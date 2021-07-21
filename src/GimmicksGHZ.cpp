#include "entities\GimmicksGHZ.h"

void GimGHZ_Stone::create() 
{
    hitBoxSize = Vector2f(32, 32);
    type = TYPE_UNKNOWN;
	anim.create(TEX_GHZ_GIMM, (Frame*)framesGhzGim);
    anim.set(0, 0, 0);
    solid = true;
    platform = true;
}

GimGHZ_BridgeController::GimGHZ_BridgeController(Vector2f _pos, uint8_t count, std::list<Entity*>& ent) : Entity(_pos)
{
    segmentsCount = count;
    segments = new GimGHZ_Bridge*[count];
	for(int i = -count / 2; i < count / 2; i++) {
        GimGHZ_Bridge* segment = new GimGHZ_Bridge(Vector2f(_pos.x + i * 16, _pos.y));
        
        if (i < 0)
            segment->maxDepression = ((count / 2) + i + 1) * 2;
        else 
            segment->maxDepression = ((count / 2) - i) * 2;

        segment->count = segmentsCount;
        segment->number = count / 2 + i;

        segments[count / 2 + i] = segment;
		ent.push_back(segment);
    }
}

void GimGHZ_BridgeController::create() 
{
    hitBoxSize = Vector2f(16, 16);
    type = TYPE_UNKNOWN;
}

void GimGHZ_BridgeController::update() 
{
    float LogDistance = 0;
    bool isActiveExist = false;
    for (int i = 0; i < segmentsCount; i++)
    {
        if ((*segments[i]).isActive()) {
            curSegment = i;
            isActiveExist = true;
            angle = 90;
        }
        (*segments[i]).setActive(false);
    }
    if (!isActiveExist && angle > 0)
        angle -= 5;

    for (int i = 0; i < segmentsCount; i++) {
            
        float log_difference = fabs((i+1) - float(curSegment));
            
        if (i < curSegment) 
            LogDistance = log_difference / float(curSegment); 
        else
            LogDistance = log_difference / float((segmentsCount - curSegment) + 1);
            
        float xx, yy;
        xx = (*segments[i]).getStartPos().x;
        yy = (*segments[i]).getStartPos().y;

        float logY = yy + ((*segments[curSegment]).maxDepression * sinf(radians(float(angle) * (1.0 - LogDistance))));
        (*segments[i]).setPos(Vector2f(xx, logY));
    }
}

void GimGHZ_Bridge::create() 
{
    hitBoxSize = Vector2f(16, 16);
    type = TYPE_BRIDGE;
	anim.create(TEX_GHZ_GIMM, (Frame*)framesGhzGim);
    anim.set(2, 2, 0);
    platform = true;
    platPushUp = false;
}

float GimGHZ_Bridge::getY() 
{
    float LogDistance = 1.0 / float((count - number) + 1);
    return startPos.y + float(maxDepression * sinf(radians(90.0 * (1.0 - LogDistance))));
}

void GimGHZ_SlpPlatform::create() 
{
    hitBoxSize = Vector2f(96, 84);
    type = TYPE_GHZ_SLP_PLATFORM;
	anim.create(TEX_GHZ_GIMM, (Frame*)framesGhzGim);
    anim.set(1, 1, 0);
    platPushUp = false;
}

void GimGHZ_Platform::create() 
{
    hitBoxSize = Vector2f(64, 26);
    type = TYPE_PLATFORM;
	anim.create(TEX_GHZ_GIMM, (Frame*)framesGhzGim);
    anim.set(3, 3, 0);
    platform = true;
    angle = 0;
}

void GimGHZ_Platform::update() 
{
    if (!mooving) return;
    switch (dir)
    {
        case 0: xsp = cosf(radians(angle)) * spd; break;
        case 1: xsp = -cosf(radians(angle)) * spd; break;
        case 2: ysp = -cosf(radians(angle)) * spd; break;
        case 3: ysp = cosf(radians(angle)) * spd; break;
    }

    pos.x += xsp;
    pos.y += ysp;

    angle += 1;
    if (angle >= 360)
        angle = 0;
}

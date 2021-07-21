#include "Entity.h"

Entity::Entity(Vector2f _pos) {
    pos = _pos;
    startPos = _pos;
}

void Entity::create() {

}

void Entity::reactingToOthers(std::list<Entity*>& entities) {
    return;
}

void Entity::update() {
	anim.tick();
}


bool Entity::collisionRight(Entity& ent, uint32_t shiftY) {
    for(int i = 4; i < hitBoxSize.y-4; i++) {
        float xx = pos.x + hitBoxSize.x / 2 + 1;
        float yy = (pos.y - hitBoxSize.y / 2) + i + shiftY;
        if ((yy > ent.pos.y - ent.hitBoxSize.y / 2) && 
            (yy < ent.pos.y + ent.hitBoxSize.y / 2) &&
            (xx > ent.pos.x - ent.hitBoxSize.x / 2) && 
            (xx < ent.pos.x + ent.hitBoxSize.x / 2))
                return true;
    }
    return false;
}

bool Entity::collisionLeft(Entity& ent, uint32_t shiftY) {
    for(int i = 4; i < hitBoxSize.y-4; i++) {
        float xx = pos.x - hitBoxSize.x / 2 - 1;
        float yy = (pos.y - hitBoxSize.y / 2) + i + shiftY;
        if ((yy > ent.pos.y - ent.hitBoxSize.y / 2) && 
            (yy < ent.pos.y + ent.hitBoxSize.y / 2) &&
            (xx > ent.pos.x - ent.hitBoxSize.x / 2) && 
            (xx < ent.pos.x + ent.hitBoxSize.x / 2))
                return true;
    }
    return false;
}

bool Entity::collisionTop(Entity& ent, uint32_t shiftY) {
    for(int i = 0; i < hitBoxSize.x - 8; i++) {
        float xx = (pos.x - hitBoxSize.x / 2) + i;
        float yy = pos.y - hitBoxSize.y / 2 + shiftY;
        if ((yy > ent.pos.y - ent.hitBoxSize.y / 2) && 
            (yy < ent.pos.y + ent.hitBoxSize.y / 2) &&
            (xx > ent.pos.x - ent.hitBoxSize.x / 2) && 
            (xx < ent.pos.x + ent.hitBoxSize.x / 2))
                return true;
    }
    return false;
}

bool Entity::collisionBottom(Entity& ent, uint32_t shiftY) {
    for(int i = 2; i < hitBoxSize.x - 2; i++) {
        float xx = (pos.x - hitBoxSize.x / 2) + i;
        float yy = pos.y + hitBoxSize.y / 2 + shiftY;
        if ((yy > ent.pos.y - ent.hitBoxSize.y / 2) && 
            (yy < ent.pos.y + ent.hitBoxSize.y / 2) &&
            (xx > ent.pos.x - ent.hitBoxSize.x / 2) && 
            (xx < ent.pos.x + ent.hitBoxSize.x / 2))
                return true;
    }
    return false;
}


bool Entity::collisionBottomPlatform(Entity& ent, uint32_t shiftY) {
    for(int i = 2; i < hitBoxSize.x - 2; i++) {
        float xx = (pos.x - hitBoxSize.x / 2) + i;
        for (int j = 0; j < shiftY; j++) {
            float yy = pos.y + hitBoxSize.y / 2 + j;
            if ((yy > ent.pos.y - ent.hitBoxSize.y / 2) && 
                (yy < ent.pos.y + ent.hitBoxSize.y / 2) &&
                (xx > ent.pos.x - ent.hitBoxSize.x / 2) && 
                (xx < ent.pos.x + ent.hitBoxSize.x / 2))
                    return true;
        }
    }
    return false;
}

bool Entity::collisionMain(Entity& ent, uint32_t shiftY) {
    if (collisionLeft(ent, shiftY) || collisionRight(ent, shiftY) || 
		collisionTop(ent, shiftY) || collisionBottom(ent, shiftY))
        return true;
    else
        return false;
}

Vector2f Entity::getPos() {
    return pos;
}

Vector2f Entity::getStartPos() {
    return startPos;
}

void Entity::setPos(Vector2f _pos) {
    pos = _pos;
}

void Entity::goToStartPos() {
    pos = startPos;
}

void Entity::draw(Camera& cam) {
    anim.draw(cam, pos, false, false, 0.0);
}

uint8_t Entity::getType() {
	return type;
}

bool Entity::isSolid() {
    return solid;
}

bool Entity::isPlatform() {
    return platform;
}

bool Entity::isPlatPushUp() {
    return platPushUp;
}

bool Entity::isLiving() {
    return living;
}

bool Entity::isInCamera(Camera& cam) {
    float rectR, rectL, rectT, rectB;
    #define DEACT_DELTA  224

    rectR = (pos.x + hitBoxSize.x / 2);
    rectL = (pos.x - hitBoxSize.x / 2);
    rectT = (pos.y - hitBoxSize.y / 2);
    rectB = (pos.y + hitBoxSize.y / 2);

    if ( (startPos.x >= cam.getPos().x - DEACT_DELTA) && 
         (startPos.x <= cam.getPos().x + SCREEN_WIDTH + DEACT_DELTA) &&
         (startPos.y >= cam.getPos().y - DEACT_DELTA) && 
         (startPos.y <= cam.getPos().y + SCREEN_HEIGHT + DEACT_DELTA))
        return true;

    if ( (rectR < cam.getPos().x - DEACT_DELTA) || 
         (rectL > cam.getPos().x + SCREEN_WIDTH + DEACT_DELTA) ||
         (rectB < cam.getPos().y - DEACT_DELTA) || 
         (rectT > cam.getPos().y + SCREEN_HEIGHT + DEACT_DELTA))
        return false;
    else
        return true;
}

bool Entity::entMeeting(Entity& ent, Vector2i meetSize)
{
    float enRectR, enRectL, enRectT, enRectB;

    enRectR = (ent.getPos().x + hitBoxSize.x / 2);
    enRectL = (ent.getPos().x - hitBoxSize.x / 2);
    enRectT = (ent.getPos().y - hitBoxSize.y / 2);
    enRectB = (ent.getPos().y + hitBoxSize.y / 2);

    if ( (enRectR < pos.x - meetSize.x) || (enRectL > pos.x + meetSize.x) ||
         (enRectB < pos.y - meetSize.y) || (enRectT > pos.y + meetSize.y))
        return false;
    else
        return true;
}

void Entity::setHitBoxSize(Vector2f _size)
{
    hitBoxSize = _size;
}

Vector2f Entity::getHitBoxSize()
{
    return hitBoxSize;
}

void Entity::destroy()
{
    living = false;
}

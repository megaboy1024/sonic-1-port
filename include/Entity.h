#pragma once
#include "structs\Geometry.h"
#include "AnimMgr.h"
#include "Camera.h"

enum Types
{
    TYPE_UNKNOWN,
    TYPE_PLAYER,
    TYPE_RING,
    TYPE_SPRING,
    TYPE_MONITOR,
    TYPE_SIGN_POST,
    TYPE_LAYER_SWITCH,
    TYPE_ENEMY,
    TYPE_EN_MOTOBUG,
    TYPE_BRIDGE,
    TYPE_BRIDGE_CNTRL,
    TYPE_GHZ_SLP_PLATFORM,
    TYPE_PLATFORM,
    TYPE_BULLET,
    TYPE_SPIKES,
    TYPE_STUBE_CNTRL,
};

class Entity
{
    public:
        Entity();
        Entity(Vector2f _pos);
        virtual void create();
        virtual void update();
        virtual void draw(Camera& cam);
        virtual void reactingToOthers(std::list<Entity*>& entities);

        void setPos(Vector2f);
        void goToStartPos();
        Vector2f getPos();
        Vector2f getStartPos();
        

        void setHitBoxSize(Vector2f _size);
        Vector2f getHitBoxSize();

        bool entMeeting(Entity& ent, Vector2i meetSize);

        void destroy();

		uint8_t getType();

        bool isSolid();
        bool isPlatform();
        bool isPlatPushUp();
        bool isLiving();

        bool isInCamera(Camera& cam);
        
        bool collisionRight(Entity& ent, uint32_t shiftY = 0);
        bool collisionLeft(Entity& ent, uint32_t shiftY = 0);
        bool collisionTop(Entity& ent, uint32_t shiftY = 0);
        bool collisionBottom(Entity& ent, uint32_t shiftY = 0);
        bool collisionBottomPlatform(Entity& ent, uint32_t shiftY = 0);
        bool collisionMain(Entity& ent, uint32_t shiftY = 0);
    protected:
		uint8_t type = TYPE_UNKNOWN;
        bool solid = false;
        bool platform = false;
        bool platPushUp = true;
        bool living = true;
        Vector2f pos;
        Vector2f startPos;
        Vector2f hitBoxSize = Vector2f(16, 16);
        AnimMgr anim;
};
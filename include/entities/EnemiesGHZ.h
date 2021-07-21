#include "Enemy.h"

#define MOTOBUG_SPD 1
#define BUZZ_SPD 4
#define CRAB_SPD 0.5

class EnMotobug : public Enemy
{
    public:
        EnMotobug(Vector2f _pos) : Enemy(_pos) {}
        void create();
        void update();
        void trnCollision(Terrain& trn);
        void draw(Camera& cam);
    private:
        int dir =-1;
};

class EnChopper : public Enemy
{
    public:
        EnChopper(Vector2f _pos) : Enemy(_pos) {}
        void create();
        void update();
    private:
        float ysp = 0;
};

class EnCrab : public Enemy
{
    public:
        EnCrab(Vector2f _pos, std::list<Entity*>& _entities) : Enemy(_pos) {entities = &_entities;}
        void create();
        void update();
        void trnCollision(Terrain& trn);
    private:
        float xsp = CRAB_SPD;
        int moveTimer = 0;
        bool faceRight = true;
        bool bulFlag = false;
        std::list<Entity*>* entities;

};

class EnBuzz : public Enemy
{
    public:
        EnBuzz(Vector2f _pos) : Enemy(_pos) {}
        void create();
        void update();
        void draw(Camera& cam);
        void reactingToOthers(std::list<Entity*>& entities);
    private:
        float xsp = BUZZ_SPD;
        int moveTimer = 0;
        int idleTimer = 8;
        int fireTimer = 0;
        bool faceRight = false;
        bool fired = false;
        AnimMgr animWings;
};

class Bullet: public Entity
{
    public:
        Bullet(Vector2f _pos, uint8_t _mode, int _dir = -1) : Entity(_pos) {
                    mode = _mode; 
                    dir = _dir;
                    create();
                }
        void create();
        void update();
        void draw(Camera& cam);
    private:
        float ysp = 0;
        float xsp = 0;
        uint8_t mode = 0; // 0 - Buzz 1 - Crab
        int dir = -1;
        const float grv = 0.21875;
        
        
};

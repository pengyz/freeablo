#ifndef FA_RENDERSYSTEM_H
#define FA_RENDERSYSTEM_H

#include "entityx.h"


namespace FAEentityComponentSystem {


    class RenderSystem :public entityx::System<RenderSystem> {
    public:
        void update(entityx::EntityManager &es, entityx::EventManager &events, entityx::TimeDelta) override;


    };



    class Sprite :public entityx::Entity {
    public:



    };


    class TranslationSystem :public entityx::System<TranslationSystem> {


    };

    class Position :public entityx::Entity {
    public:
        std::pair<int32_t, int32_t> pos;
    };

}


#endif
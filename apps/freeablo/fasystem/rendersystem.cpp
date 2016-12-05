#include "rendersystem.h"
#include "entityx.h"


namespace FAEentityComponentSystem {

    void RenderSystem::update(entityx::EntityManager & es, entityx::EventManager & events, entityx::TimeDelta)
    {
        auto entities = es.entities_with_components<Sprite>();
        for (auto entity : entities) {

        }
    }


   
}
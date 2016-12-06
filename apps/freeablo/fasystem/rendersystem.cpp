#include "rendersystem.h"
#include "entityx.h"


namespace FAEentityComponentSystem {
    RenderSystem::RenderSystem(FARender::Renderer * render):
        render(render)
    {
    }
    void RenderSystem::update(ex::EntityManager & es, ex::EventManager & events, ex::TimeDelta)
    {
        /*es.each<ESprite>([](ex::Entity entity, ESprite& sprite) {

        });*/
        
    }

    GameWorld::GameWorld()
    {
        systems.add<RenderSystem>(FARender::Renderer::get());

        systems.configure();
    }

    void GameWorld::update(ex::TimeDelta dt)
    {
        systems.update_all(dt);
    }



}



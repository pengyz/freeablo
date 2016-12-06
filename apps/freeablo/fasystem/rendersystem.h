/*
    I try refacting the engine with the ECS system using entityx.
    entityx is a C++ template library that implement the Entity Component System.
    Systems:
    RenderSystem                    Render the world
    InputSystm                      process the input device events.
    SoundSystem                     sound display
    DamageSystem                    Caculate the Damages
    DropSystem                      Caculate Drops,quality,type,etc
    AISystem                        the ai
    QuestionSystem                  the question systems.
    SkillSystem?                    the skill points and skill learning?
    GUISystem                       game gui
    //NetSystem                       multi player and the networks
    Affix
    EventSystem                     the event

    Components
    Script                          the lua script
    Sound                           sounds
    Animation                       animations
    Invetory                        the bag system
    EquipSlot                       the equipment slot that we can wear the equip.
    CollisionBody                   the collision body check the collision between another.
    Tiled                           tiled set
    EventDispatcher                 the event dispatcher system component


    ---GUI?----
    Panel                           GUI Panel
    Text                            GUI Text
    ScrollView



    Prefabs
    Rule Words




 */


#ifndef FA_RENDERSYSTEM_H
#define FA_RENDERSYSTEM_H

#include "entityx.h"
#include "../farender/renderer.h"



namespace ex = entityx;


namespace FAEentityComponentSystem {


    /**
     **Render System
     **/
    class RenderSystem :public ex::System<RenderSystem> {
    public:
        explicit RenderSystem(FARender::Renderer* render);
        void update(ex::EntityManager &es, ex::EventManager &events, ex::TimeDelta) override;

    private:
        FARender::Renderer* render;


    };

    /**
     **Collision System
     **/
    class CollisionSystem :public ex::System<CollisionSystem> {

    };


    /**
     **Transform System
     ***/
    class TransformSystem :public ex::System<TransformSystem> {


    };


    class ParticleSystem :public ex::System<ParticleSystem> {

    };


    //this is the whole world
    class GameWorld :public ex::EntityX {
    public:
        explicit GameWorld();
        void update(ex::TimeDelta dt);
    };


    struct Position {
        Position(int32_t x, int32_t y) :
            x(x), y(y) {}
        int32_t x;
        int32_t y;
    };





}


#endif
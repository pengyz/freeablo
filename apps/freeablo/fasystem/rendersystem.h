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
    NetSystem                       multi player and the networks
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
#ifndef GUIMANAGER_H
#define GUIMANAGER_H
#include <string>
#include <chrono>
#include <queue>
#include <functional>
#include "../engine/enginemain.h"
#include "../farender/renderer.h"



#include <fa_nuklear.h>

namespace Rocket
{
namespace Core
{
class ElementDocument;
}
}

namespace FAGui
{
    enum WINDOWFLAG{
        FA_INVILAD = 0x0,
        FA_GUI_INVETORY = 0x1,
        FA_GUI_CHARACTER = 0x2,
        FA_GUI_SPELLS = 0x4,
        FA_GUI_QUEST = 0x8,
    };

    class ScrollBox;
    class GuiManager
    {
    public:

        explicit GuiManager(Engine::EngineMain& engine);
        void update(bool paused);

        inline bool isSet(int flagBit){ return mGuiFlag & flagBit; }
        inline void toggle(int flagBit){ mGuiFlag ^= flagBit; }
        nk_context *getNkContext(){return FARender::Renderer::get()->getNuklearContext();}

        void updateInvetoryDialog(int charType);
        void updatePauseMenu(bool bPause);
        void updateCharacterInfoDialog();
        void updateSpellsDialog();
        void updateQuestDialog();

    private:

        Engine::EngineMain& mEngine;
        int mGuiFlag;

        const char* mBottomMenuName = "bottom_menu";
        const char* mPauseMenuName = "pause_menu";
        const char* mInvetoryDialogName = "invetory_dialog";
        const char* mCharacterInfoDialogName = "character_info_dialog";
        const char* mSpellsDialogName = "spells_dialog";
        const char* mQuestDialogName = "quest_dialog";

    private:

        void pauseMenu();
        void bottomMenu();
        void invetoryDialog(int characterType);
        void characterInfoDialog();
        void spellsDialog();
        void questDialog();
    };
}

#endif

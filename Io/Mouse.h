#pragma once
#include <memory>
#include <string>

#include "Engine/Point.h"

#include "Io/GameKey.h"
#include "Io/IMouseController.h"

class Image;
class OSWindow;


namespace Io {
    class Mouse {
     public:
        inline Mouse() : cursor_img(nullptr), window(nullptr) {
            pCursorBitmap_sysmem = nullptr;
            field_34 = 0;
            pCursorBitmap2_sysmem = nullptr;
            pPickedItem = nullptr;
            ptr_90 = nullptr;
            uMouseX = 0;
            uMouseY = 0;
        }

        void GetClickPos(unsigned int* pX, unsigned int* pY);
        void RemoveHoldingItem();
        void SetCursorBitmapFromItemID(unsigned int uItemID);
        void SetCurrentCursorBitmap();
        void SetCursorImage(const std::string &name);
        void _469AE4();
        void ClearCursor();
        void AllocCursorSystemMem();
        void* DoAllocCursorMem();
        Point GetCursorPos();
        void Initialize(std::shared_ptr<OSWindow> window);
        void SetActive(bool active);
        void Deactivate();
        void DrawCursor();
        void Activate();
        void ClearPickedItem();
        void DrawCursorToTarget();
        void DrawPickedItem();
        void ChangeActivation(int a1);
        void SetMouseClick(int x, int y);

        void UI_OnMouseLeftClick();

        unsigned int uPointingObjectID = 0;
        unsigned int bActive = 0;
        int field_8 = 0;
        int field_C = 0;
        unsigned int bInitialized = 0;
        unsigned int bRedraw = 0;
        int field_18 = 0;
        int field_1C = 0;
        int field_20 = 0;
        Image* cursor_img = nullptr;
        std::shared_ptr<OSWindow> window = nullptr;
        uint16_t* pCursorBitmap_sysmem = nullptr;
        int field_34 = 0;
        uint8_t* pCursorBitmap2_sysmem = nullptr;
        Image* pPickedItem = nullptr;
        int uCursorWithItemX = 0;
        int uCursorWithItemY = 0;
        int field_50 = 0;
        int field_54 = 0;
        int uCursorBitmapPitch = 0;
        int field_5C[13] {};
        void* ptr_90 = nullptr;
        int field_94 = 0;
        int field_98 = 0;
        int field_9C = 0;
        int field_A0 = 0;
        int field_A4 = 0;
        int field_A8 = 0;
        int field_AC = 0;
        int field_B0 = 0;
        int field_B4 = 0;
        int field_B8 = 0;
        int field_BC = 0;
        int field_C0 = 0;
        Point pCursorBitmapPos {};
        int uCursorBitmapWidth = 0;
        int uCursorBitmapHeight = 0;
        int field_D4 = 0;
        int field_D8 = 0;
        int field_DC = 0;
        int field_E0 = 0;
        int pCursorBitmapRect_x = 0;
        int pCursorBitmapRect_y = 0;
        int pCursorBitmapRect_w = 0;
        int pCursorBitmapRect_z = 0;
        char field_F4 = 0;
        std::string cursor_name;
        int field_100 = 0;
        int field_104 = 0;
        unsigned int uMouseX = 0;
        unsigned int uMouseY = 0;

        std::shared_ptr<IMouseController> mouseController = nullptr;
    };
}  // namespace Io

extern std::shared_ptr<Io::Mouse> mouse;

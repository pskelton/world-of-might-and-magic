#pragma once

#include <cstdint>

/*  149 */
#pragma pack(push, 1)
struct Viewport {
    inline Viewport() {
        field_of_view = 65536 / 2;
        SetScreen(0, 0, 639, 479);
    }

    void SetScreen(int uX, int uY, int uZ, int uW);
    void SetFOV(float fov);
    void SetViewport(int uX, int uY, int uZ, int uW);
    bool Contains(unsigned int x, unsigned int y);

    int uScreen_TL_X;
    int uScreen_TL_Y;
    int uScreen_BR_X;
    int uScreen_BR_Y;
    int uViewportTL_X;
    int uViewportTL_Y;
    int uViewportBR_X;
    int uViewportBR_Y;
    int uScreenWidth;
    int uScreenHeight;
    int uScreenCenterX;
    int uScreenCenterY;
    int field_of_view;
};
#pragma pack(pop)

extern struct Viewport *pViewport;

/*  201 */
#pragma pack(push, 1)
struct ViewingParams {
    inline ViewingParams() {
        draw_sw_outlines = false;
        draw_d3d_outlines = false;
        field_4C = 0;
    }

    void CenterOnPartyZoomIn();
    void InitGrayPalette();
    void MapViewUp();
    void MapViewLeft();
    void MapViewDown();
    void MapViewRight();
    void CenterOnPartyZoomOut();
    void AdjustPosition();
    void _443365();

    int uSomeX = 0;  // game viewport co ords
    int uSomeY = 0;
    int uSomeZ = 0;
    int uSomeW = 0;

    unsigned int uScreen_topL_X = 0;
    unsigned int uScreen_topL_Y = 0;
    unsigned int uScreen_BttmR_X = 0;
    unsigned int uScreen_BttmR_Y = 0;
    int field_20 = 0;
    unsigned int uMinimapZoom = 0;
    int field_28 = 0;  // zoom level in po2
    unsigned int uMapBookMapZoom = 0;
    int sViewCenterX = 0;
    int sViewCenterY = 0;
    int16_t indoor_center_x = 0;
    int16_t indoor_center_y = 0;
    int field_3C = 0;
    class Image *location_minimap = nullptr;  // unsigned int uTextureID_LocationMap; ::40
    int bRedrawGameUI = 0;
    int field_48 = 0;
    int field_4C = 0;
    int draw_sw_outlines = 0;
    int draw_d3d_outlines = 0;
    int field_58 = 0;
    int field_5C = 0;
    int field_60 = 0;
    int field_64 = 0;
    int field_68 = 0;
    uint16_t pPalette[256] {};
};
#pragma pack(pop)

extern struct ViewingParams *viewparams;

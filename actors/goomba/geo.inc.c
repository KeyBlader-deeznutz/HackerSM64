#include "src/game/envfx_snow.h"

const GeoLayout goomba_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 100),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, goomba_seg8_dl_0801D760),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_OPEN_NODE(),
               GEO_BILLBOARD(),
               GEO_OPEN_NODE(),
                  GEO_DISPLAY_LIST(LAYER_ALPHA, goomba_seg8_dl_0801B690),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_OPEN_NODE(),
#ifdef FLOOMBAS
               GEO_SWITCH_CASE(4, geo_switch_anim_state),
#else
               GEO_SWITCH_CASE(2, geo_switch_anim_state),
#endif
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 48, 0, 0, goomba_seg8_dl_0801B5C8),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 48, 0, 0, goomba_seg8_dl_0801B5F0),
#ifdef FLOOMBAS
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 48, 0, 0, floomba_seg8_dl_face),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 48, 0, 0, floomba_seg8_dl_blink),
#endif
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, -60, -16, 45, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, goomba_seg8_dl_0801CE20),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, -60, -16, -45, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, goomba_seg8_dl_0801CF78),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

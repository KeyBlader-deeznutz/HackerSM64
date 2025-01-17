#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bits_skybox_yay0SegmentRomStart, _bits_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOBOMB_BUDDY, 10628, -312, 11255, 0, 0, 0, 0x00000000, bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, 11871, -312, 10172, 0, 0, 0, 0x00010000, bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, 12264, -312, 9849, 0, 0, 0, 0x00020000, bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, 13026, -312, 10125, 0, 0, 0, 0x00030000, bhvBobombBuddy),
		OBJECT(MODEL_WOODEN_SIGNPOST, 10352, -312, 12127, 0, 71, 0, 0x00060000, bhvMessagePanel),
		OBJECT(MODEL_BOBOMB_BUDDY, 10355, -312, 13891, 0, 0, 0, 0x00050000, bhvBobombBuddy),
		OBJECT(MODEL_GOOMBA, 3630, -330, 4250, 0, 22, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 3915, -330, 3591, 0, 22, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 3239, -330, 3265, 0, 22, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 5028, -330, -1655, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 4581, -330, -289, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 745, -330, -4502, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1192, -330, -5869, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1400, -330, -4899, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1907, -330, -4345, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1398, -330, -3840, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 996, -330, 5014, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1506, -330, 4508, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 2517, -330, 11110, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 790, -330, 2985, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1862, -330, 11507, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3365, -330, 5897, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -2855, -330, 5391, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -331, -330, 8521, 0, 23, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -987, -330, 10505, 0, 23, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4017, -330, 5234, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 9703, -330, 1845, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 9488, -330, 1160, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1151, -330, 11318, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 7807, -330, 1095, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 8814, -330, 2120, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 9240, -330, -2760, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 9025, -330, -3445, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 3214, -330, 5924, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 7343, -330, -3510, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 8351, -330, -2485, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 7568, -330, -5952, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 4959, -330, -4266, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 5974, -330, -5243, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 5672, -330, -6702, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 6679, -330, -5677, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 2498, -330, -8860, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 2283, -330, -9545, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3906, -330, 2350, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 601, 236, -9610, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1609, -330, -8585, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 315, -330, -7511, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 100, -330, -8196, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 3463, -330, -7260, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -1582, -330, -8261, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -574, -330, -7236, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3996, -330, -7147, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4211, -330, -7832, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -2737, -330, -4447, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4435, -330, -3510, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4884, -330, -6872, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3113, -330, -473, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 7245, -330, 5019, 0, 22, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 7531, -330, 4360, 0, 22, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 6854, -330, 4034, 0, 22, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4302, -330, -4250, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -2552, -330, -4423, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -2980, -330, -1212, 0, 63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, 13022, -73, 13141, 0, 0, 0, 0x000A0000, bhvDeathWarp),
		MARIO_POS(0x01, 0, 13022, -73, 13141),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x23, SEQ_STREAMED_DOOM),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 13022, -73, 13141),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};

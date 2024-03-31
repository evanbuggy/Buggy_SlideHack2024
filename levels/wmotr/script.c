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

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/wmotr/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wmotr_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wmotr_segment_7SegmentRomStart, _wmotr_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bbh_skybox_yay0SegmentRomStart, _bbh_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wmotr_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_WMOTR, 0x01, 0x06, WARP_NO_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_WMOTR, 0x01, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x07, LEVEL_ENDING, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x08, LEVEL_WMOTR, 0x01, 0x09, WARP_NO_CHECKPOINT),
		WARP_NODE(0x09, LEVEL_WMOTR, 0x01, 0x08, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_EXCLAMATION_BOX, -11665, 9793, -12912, 0, -1, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 6497, 8805, -8313, 0, -1, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 2572, 8177, -11952, 0, -1, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_NONE, 6497, 8113, -8313, 0, -1, 0, (7 << 16), bhvTextPopup),
		OBJECT(MODEL_WOODEN_SIGNPOST, 6497, 8113, -8695, 0, -1, 0, (35 << 16), bhvMessagePanel),
		OBJECT(MODEL_EXCLAMATION_BOX, 8964, 4632, 9, 0, -1, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 8616, 6287, 13890, 0, -1, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_YELLOW_COIN, 11741, 5054, -12555, 0, -1, 0, (5 << 16), bhvOneCoin),
		OBJECT(MODEL_EXCLAMATION_BOX, -12539, 9214, -11578, 0, -1, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_NONE, 8967, 3999, 23, 0, -99, 0, (9 << 16), bhvTextPopup),
		OBJECT(MODEL_NONE, 5994, 3903, 11109, 0, -99, 0, (15 << 16), bhvTextPopup),
		OBJECT(MODEL_NONE, 901, 4562, 3068, 0, -99, 0, (17 << 16), bhvTextPopup),
		OBJECT(MODEL_NONE, -2705, 3129, 5853, 0, -99, 0, (19 << 16), bhvTextPopup),
		OBJECT(MODEL_NONE, -6142, 911, -11355, 0, -135, 0, (6 << 16), bhvFadingWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -8432, 93, -11940, 0, 45, 0, (7 << 16), bhvWarpPipe),
		OBJECT(MODEL_WOODEN_SIGNPOST, -8031, 125, -11516, 0, 88, 0, (42 << 16), bhvMessagePanel),
		OBJECT(MODEL_NONE, 43, -6621, -6, 0, 45, 0, (5 << 16), bhvFadingWarp),
		OBJECT(MODEL_METAL_BOX, 1307, -5736, -397, 0, -57, 0, (5 << 16), bhvCoinGate),
		OBJECT(MODEL_GOOMBA, -8651, 1779, 12228, 0, -99, 0, (0 << 16), bhvGoomba),
		OBJECT(MODEL_GOOMBA, -10372, 1770, 10480, 0, -99, 0, (0 << 16), bhvGoomba),
		OBJECT(MODEL_GOOMBA, -12434, 1921, 11975, 0, -99, 0, (0 << 16), bhvGoomba),
		OBJECT(MODEL_GOOMBA, -10836, 2138, 14430, 0, -99, 0, (0 << 16), bhvGoomba),
		OBJECT(MODEL_GOOMBA, -11665, 1999, 13595, 0, -99, 0, (0 << 16), bhvGoomba),
		OBJECT(MODEL_NONE, -3912, 1197, 4888, 0, -99, 0, (12 << 16), bhvTextPopup),
		OBJECT(MODEL_NONE, -10490, 2830, 12484, 0, 0, 0, (8 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -12659, 8597, 12484, 0, 0, 0, (9 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -12659, 7608, 13040, 0, 0, 0, (6 << 16), bhvTextPopup),
		OBJECT(MODEL_WOODEN_SIGNPOST, -10490, 2860, 11807, 0, 0, 0, (33 << 16), bhvMessagePanel),
		OBJECT(MODEL_NONE, -7820, 1734, 11430, 0, -99, 0, (13 << 16), bhvTextPopup),
		OBJECT(MODEL_NONE, 71, -5454, -2260, 0, -99, 0, (10 << 16), bhvTextPopup),
		OBJECT(MODEL_NONE, -12915, 5700, -811, 0, -99, 0, (11 << 16), bhvTextPopup),
		OBJECT(MODEL_YELLOW_COIN, -12640, 7699, 12160, 0, 180, 0, (0 << 16), bhvOneCoin),
		OBJECT(MODEL_WOODEN_SIGNPOST, -13183, 7903, 11848, 0, 0, 0, (32 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -733, -6614, -286, 0, 66, 0, (40 << 16), bhvMessagePanel),
		OBJECT(MODEL_NONE, -9472, 3222, -5322, 0, -1, 0, (25 << 16), bhvTextPopup),
		OBJECT(MODEL_NONE, 8673, 3684, -8678, 0, -1, 0, (27 << 16), bhvTextPopup),
		OBJECT(MODEL_GOOMBA, -12640, 8140, 10354, 0, 180, 0, (0 << 16), bhvGoomba),
		OBJECT(MODEL_NONE, -11459, 5888, -4116, 0, -175, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 8303, 7023, -13106, 0, -99, 0, (8 << 16), bhvTextPopup),
		MARIO_POS(0x01, 180, -12640, 7750, 13013),
		OBJECT(MODEL_NONE, -12749, 8596, -11728, 0, -1, 0, (21 << 16), bhvTextPopup),
		OBJECT(MODEL_GOOMBA, -12348, 8127, 5276, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, -10490, 4206, 12484, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_GOOMBA, -9272, 6372, -7151, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, -4044, 5294, -12176, 0, -1, 0, (23 << 16), bhvTextPopup),
		OBJECT(MODEL_YELLOW_COIN, -7476, 2133, 11130, 0, -99, 0, (13 << 16), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -6148, 2133, 11130, 0, -99, 0, (13 << 16), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -5209, 1986, 11130, 0, -99, 0, (13 << 16), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4020, 2036, 10702, 0, -99, 0, (13 << 16), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -3680, 2137, 9324, 0, -99, 0, (13 << 16), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -3171, 1941, 8340, 0, -99, 0, (13 << 16), bhvOneCoin),
		OBJECT(MODEL_NONE, 208, 7531, 124, 0, -66, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -13241, 5274, 4603, 0, -158, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -11444, 8015, 1818, 0, 2, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -11627, 6511, -11292, 0, -158, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -339, 7531, 124, 0, -66, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -12640, 7750, 13013, 0, 180, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wmotr_area_1_collision),
		MACRO_OBJECTS(wmotr_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 180, -12640, 7750, 13013),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};

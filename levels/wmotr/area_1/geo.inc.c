#include "src/game/envfx_snow.h"

const GeoLayout wmotr_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 8554, 6616, -13055, -8, -92, -2, wmotr_dl_a99grass_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -10453, 0, 12409, 0, 40, 0, wmotr_dl_cake_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -7127, 2431, -1211, 90, 0, 0, wmotr_dl_cloud_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -12651, 6329, 12843, 80, -26, 0, wmotr_dl_cloud_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -12812, 5567, -844, 80, -130, 53, wmotr_dl_cloud_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -9689, 8940, 3684, 104, 56, 89, wmotr_dl_cloud_003_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3377, 1041, 5700, 80, -87, 53, wmotr_dl_cloud_004_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 10833, 3021, -9708, 86, -101, -26, wmotr_dl_cloud_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 8553, 5511, 13727, 77, -42, 12, wmotr_dl_cloud_008_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2376, 7352, -12082, 94, 7, 154, wmotr_dl_cloud_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1298, 9483, -5042, 86, -95, -26, wmotr_dl_cloud_010_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -12681, 7577, -14069, 104, 56, 89, wmotr_dl_cloud_011_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -12403, 8695, -11533, 76, 73, -91, wmotr_dl_cloud_012_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 11371, 3585, 1236, 80, -22, 53, wmotr_dl_cloud_013_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -7127, -1032, -1211, 90, 0, 0, wmotr_dl_cloud_scroll_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -7028, 1232, -11876, wmotr_dl_cover_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -11230, 6107, -11670, wmotr_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -13015, 6655, -11583, 7, 21, 10, wmotr_dl_Cube_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3065, 1548, 8241, 25, -25, 0, wmotr_dl_Cube_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3776, 1768, 9236, 25, 40, 0, wmotr_dl_Cube_003_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3853, 1663, 10821, 25, -134, 0, wmotr_dl_Cube_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1863, 3847, 4930, 25, 135, 0, wmotr_dl_Cube_006_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -824, 3968, 4504, 25, 113, 0, wmotr_dl_Cube_007_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 353, 4107, 4507, 25, 155, 0, wmotr_dl_Cube_008_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1315, 4369, 4137, 25, -154, 0, wmotr_dl_Cube_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 6039, 765, 1739, 0, 90, 0, wmotr_dl_Cube_010_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4793, 1313, -11, 7, 106, 10, wmotr_dl_Cube_011_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4960, 1531, 11095, 25, -90, 0, wmotr_dl_Cube_012_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5978, 1659, 11095, 25, -90, 0, wmotr_dl_Cube_013_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -7270, 1659, 11095, 25, -61, 0, wmotr_dl_Cube_014_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 903, 4126, 2939, 4, -58, -10, wmotr_dl_Cube_015_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2037, 5122, 2574, 25, 126, 0, wmotr_dl_Cube_016_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3267, 5409, 1834, 6, -121, -15, wmotr_dl_Cube_017_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -7009, 0, -11897, wmotr_dl_Cube_018_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -7127, -1032, -1211, 90, 0, 0, wmotr_dl_death_plane_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -8119, 3121, -12947, 111, -90, 0, wmotr_dl_doll_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -9645, 8983, 3296, 90, 0, 20, wmotr_dl_doll_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -9083, 1648, 8530, 36, 37, 9, wmotr_dl_doll_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 7221, 5129, 9703, 5, -103, -5, wmotr_dl_doll_003_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 409, 9838, 476, 62, 22, 158, wmotr_dl_doll_004_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 8193, 5881, -12947, 163, -100, -3, wmotr_dl_doll_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6072, 2431, -1897, 90, 0, 0, wmotr_dl_DrawCall_76_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wmotr_dl_DrawCall_76_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -6072, 2431, -1897, 90, 0, 0, wmotr_dl_DrawCall_76_001_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -6072, 2431, -1897, 90, 0, 0, wmotr_dl_DrawCall_76_002_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -12109, 8052, 7540, 90, 0, 0, wmotr_dl_DrawCall_76_003_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -12823, 8131, 5394, 90, 0, -34, wmotr_dl_DrawCall_76_004_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 3476, 6521, 32, 115, 0, -34, wmotr_dl_DrawCall_76_005_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6817, 558, -9789, -90, 0, 0, wmotr_dl_painting_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -8706, 558, -9789, -90, 0, 0, wmotr_dl_painting_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -8706, 558, -14007, -90, 0, -180, wmotr_dl_painting_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6817, 558, -14007, -90, 0, -180, wmotr_dl_painting_003_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6565, 102, -11880, 0, -110, 0, wmotr_dl_painting_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1442, 5459, -12167, wmotr_dl_Plane_mesh_layer_1),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 0, 26, 0, wmotr_dl_Plane_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -11213, 4742, 2929, 0, 56, 0, wmotr_dl_Plane_002_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -951, 5018, -12413, 90, 0, 19, wmotr_dl_Plane_003_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 1369, 4684, -11464, 90, 0, 32, wmotr_dl_Plane_004_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 3252, 4370, -10328, 90, 0, 38, wmotr_dl_Plane_005_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 5398, 3829, -8309, 90, 0, 58, wmotr_dl_Plane_006_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 6542, 2511, 10129, wmotr_dl_Plane_008_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 10903, 3488, -12959, wmotr_dl_Plane_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -11937, 8141, 5230, 90, 0, -34, wmotr_dl_red_plant_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -11681, 5710, -3683, 90, 0, -34, wmotr_dl_red_plant_001_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -10703, 5796, -3997, 90, 0, -34, wmotr_dl_red_plant_002_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -9593, 6355, -7934, 90, 0, -34, wmotr_dl_red_plant_003_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -10001, 3289, -6638, 90, 0, -34, wmotr_dl_red_plant_004_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -8786, 3394, -6685, 90, 0, -34, wmotr_dl_red_plant_005_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6072, 2431, -1897, 90, 0, 0, wmotr_dl_ring_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -8143, 2613, 4956, 90, 0, -131, wmotr_dl_ring_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -8912, 2971, 5648, 90, 0, -131, wmotr_dl_ring_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -7368, 2234, 4421, 90, 0, -131, wmotr_dl_ring_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wmotr_dl_tower_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3001, 2642, 6259, -5, 19, -5, wmotr_dl_wall_jump_pillar_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2308, 2642, 5538, -5, -28, -5, wmotr_dl_wall_jump_pillar_2_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wmotr_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_HAUNTED, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, wmotr_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

#include "src/game/envfx_snow.h"

const GeoLayout castle_inside_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -4776, 8690, 923, 0, -135, -90, castle_inside_dl_cobweb_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -4809, 8383, -1040, 0, -45, 90, castle_inside_dl_cobweb_001_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -15847, 10451, -537, 0, 15, 0, castle_inside_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -16065, 10047, -13, castle_inside_dl_Cube_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -8005, 9390, -2199, 0, 80, 0, castle_inside_dl_Cube_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -10134, 7778, 2137, 2, -160, 10, castle_inside_dl_Cube_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6150, 7535, -75, castle_inside_dl_Cube_004_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, castle_inside_dl_Cube_004_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5927, 7742, -351, -90, 0, 120, castle_inside_dl_Cube_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6261, 7636, -365, 0, 40, 0, castle_inside_dl_Cube_006_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6898, 7636, 309, 0, 70, 0, castle_inside_dl_Cube_007_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6855, 7636, 76, -180, -85, 0, castle_inside_dl_Cube_008_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3248, 2820, 4094, -3, 82, -9, castle_inside_dl_Cube_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 7569, 4278, -6207, -5, 79, 8, castle_inside_dl_Cube_010_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 10717, 4916, 5329, 7, 117, -9, castle_inside_dl_Cube_011_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 11320, 8329, 1296, 0, 82, 0, castle_inside_dl_Cube_012_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 16096, 10567, -36, 0, 82, 0, castle_inside_dl_Cube_013_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 13943, 5877, -4356, -10, 109, 6, castle_inside_dl_Cube_014_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4921, 7711, 189, 1, -2, -63, castle_inside_dl_Icosphere_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5144, 9608, -1422, -23, -135, -96, castle_inside_dl_Icosphere_004_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -6245, 9504, -113, 8, 26, 5, castle_inside_dl_painting_001_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 10097, 9361, -40, 8, -89, 5, castle_inside_dl_painting_002_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 9776, 7958, -45, 10, 2, -15, castle_inside_dl_painting_003_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -14674, 9943, -13, castle_inside_dl_Plane_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, castle_inside_dl_Plane_mesh_layer_4),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_inside_dl_Plane_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -12866, 10166, 831, 6, 145, -91, castle_inside_dl_Plane_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -10351, 9695, -1009, 70, -32, 29, castle_inside_dl_Plane_002_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -9856, 10387, 734, 70, 107, 29, castle_inside_dl_Plane_003_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -9369, 9581, 1332, 123, 80, 4, castle_inside_dl_Plane_004_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -9387, 9108, -818, 96, 11, 72, castle_inside_dl_Plane_005_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -10921, 10276, 1147, 76, 129, 12, castle_inside_dl_Plane_006_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -11330, 10733, -693, 67, -59, 47, castle_inside_dl_Plane_007_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -11791, 9855, -1204, 55, -35, 37, castle_inside_dl_Plane_008_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -11876, 11322, 989, 77, 3, -114, castle_inside_dl_Plane_009_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -5353, 8810, 714, -6, -90, 0, castle_inside_dl_Plane_010_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -5833, 9018, 714, -6, -90, 0, castle_inside_dl_Plane_011_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -6625, 9177, 714, -6, -90, 0, castle_inside_dl_Plane_012_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -7117, 9378, 714, -6, -90, 0, castle_inside_dl_Plane_013_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 10061, 7896, -39, 0, -180, 90, castle_inside_dl_Plane_014_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 10020, 6954, -64, 0, -20, 5, castle_inside_dl_Plane_015_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5025, 9999, 813, 90, -32, 3, castle_inside_dl_Plane_016_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 9342, 5110, -36, castle_inside_dl_Plane_017_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, castle_inside_dl_Plane_017_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -2129, 10458, -13, castle_inside_dl_Plane_018_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 9342, 5110, -36, castle_inside_dl_Plane_019_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 8886, 5745, 95, 0, -74, 0, castle_inside_dl_Plane_020_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 8935, 5145, -36, castle_inside_dl_Plane_021_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 8963, 5135, -21, castle_inside_dl_Plane_022_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 8951, 6556, 293, 0, 90, 0, castle_inside_dl_Plane_023_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 8739, 5683, 195, 0, 50, 0, castle_inside_dl_Plane_024_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 8920, 6818, -407, 0, -90, 0, castle_inside_dl_Plane_025_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 8835, 6302, -95, 0, 73, 0, castle_inside_dl_Plane_026_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 9285, 8191, -59, 0, 180, 0, castle_inside_dl_Plane_027_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 10963, 8343, -36, 0, 0, 90, castle_inside_dl_Plane_028_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 10963, 7610, -36, 0, 0, 90, castle_inside_dl_Plane_029_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 10046, 7896, -39, 0, 0, 90, castle_inside_dl_Plane_030_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 14459, 10554, 724, 0, -82, 90, castle_inside_dl_Plane_031_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 13603, 10554, 837, 0, -82, 90, castle_inside_dl_Plane_032_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 12948, 10588, -994, 0, 82, 90, castle_inside_dl_Plane_033_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 13757, 10588, -886, 0, 82, 90, castle_inside_dl_Plane_034_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 12905, 9907, -91, 0, 30, 0, castle_inside_dl_Plane_035_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 8970, 10848, -36, 0, 0, 90, castle_inside_dl_Plane_036_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 9097, 8706, 270, 0, 120, 0, castle_inside_dl_Plane_037_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 9254, 9179, -218, 0, -155, 0, castle_inside_dl_Plane_038_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, -4885, 0, castle_inside_dl_Plane_039_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 7190, -68, 0, 0, 0, 20, castle_inside_dl_Plane_040_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_inside_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, castle_inside_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_SNOW_WATER, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

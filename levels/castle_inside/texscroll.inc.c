void scroll_castle_inside_dl_Plane_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 44;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_inside_dl_Plane_mesh_layer_5_vtx_0);

	deltaX = (int)(0.5 * 0x20) % width;
	deltaY = (int)(0.5 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_castle_inside_dl_Plane_040_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 266;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_inside_dl_Plane_040_mesh_layer_5_vtx_0);

	deltaX = (int)(0.5 * 0x20) % width;
	deltaY = (int)(0.5 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_castle_inside() {
	scroll_castle_inside_dl_Plane_mesh_layer_5_vtx_0();
	scroll_castle_inside_dl_Plane_040_mesh_layer_5_vtx_0();
};

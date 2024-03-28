void bhv_loop(void) {
    if (obj_check_if_collided_with_object(o, gMarioObject) == 1) {
        gMarioState->numFace = 2;
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
}

void bhv_text_popup(void) {
    bhv_loop();
}
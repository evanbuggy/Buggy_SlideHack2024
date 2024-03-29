void bhv_text_popup(void) {
    if (obj_check_if_collided_with_object(o, gMarioObject) == 1) {
        gMarioState->textID = o->oBehParams2ndByte;
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
}
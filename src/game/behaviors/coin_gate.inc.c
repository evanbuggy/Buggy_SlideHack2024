void bhv_coin_gate(void) {
    if (gMarioState->numCoins >= 60) {
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
}
void scop_entry(float arg0[2000][2000], float arg1[2000], float arg2[2000],
                float arg3[2000], float arg4[2000]) {
    // Update arg1
    for (int arg5 = 0; arg5 < 2000; ++arg5) {
        for (int arg6 = 0; arg6 < 2000; ++arg6) {
            float temp = arg1[arg5] + arg0[arg5][arg6] * arg3[arg6];
            arg1[arg5] = temp;
        }
    }

    // Update arg2
    for (int arg5 = 0; arg5 < 2000; ++arg5) {
        for (int arg6 = 0; arg6 < 2000; ++arg6) {
            float temp = arg2[arg5] + arg0[arg6][arg5] * arg4[arg6];
            arg2[arg5] = temp;
        }
    }
}

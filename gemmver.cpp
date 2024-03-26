ivoid scop_entry(float arg0[2000][2000], float arg1, float arg2, float arg3[2000], float arg4[2000],
                float arg5[2000], float arg6[2000], float arg7[2000], float arg8[2000], float arg9[2000], float arg10[2000]) {
    for (int arg11 = 0; arg11 < 2000; ++arg11) {
        for (int arg12 = 0; arg12 < 2000; ++arg12) {
            float temp1 = arg3[arg11] * arg5[arg12];
            float temp2 = arg4[arg11] * arg6[arg12];
            arg0[arg11][arg12] += temp1 + temp2;
        }
    }

    for (int arg11 = 0; arg11 < 2000; ++arg11) {
        for (int arg12 = 0; arg12 < 2000; ++arg12) {
            float temp = arg2 * arg0[arg12][arg11] * arg9[arg12];
            arg8[arg11] += temp;
        }
    }

    for (int arg11 = 0; arg11 < 2000; ++arg11) {
        arg8[arg11] += arg10[arg11];
    }

    for (int arg11 = 0; arg11 < 2000; ++arg11) {
        for (int arg12 = 0; arg12 < 2000; ++arg12) {
            float temp = arg1 * arg0[arg11][arg12] * arg8[arg12];
            arg7[arg11] += temp;
        }
    }
}

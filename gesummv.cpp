void scop_entry(float arg0[1300][1300], float arg1[1300][1300], float arg2, float arg3,
                float arg4[1300], float arg5[1300], float arg6[1300]) {
    // tmp[i] = 0
    for (int arg7 = 0; arg7 < 1300; ++arg7) {
        arg6[arg7] = 0.0f;
    }

    // y[i] = 0
    for (int arg7 = 0; arg7 < 1300; ++arg7) {
        arg4[arg7] = 0.0f;
    }

    // tmp[i] = A[i][j] * x[j] + tmp[i]
    for (int arg7 = 0; arg7 < 1300; ++arg7) {
        for (int arg8 = 0; arg8 < 1300; ++arg8) {
            float temp = arg0[arg7][arg8] * arg5[arg8];
            arg4[arg7] += temp;
        }
    }

    // y[i] = B[i][j] * x[j] + y[i]
    for (int arg7 = 0; arg7 < 1300; ++arg7) {
        for (int arg8 = 0; arg8 < 1300; ++arg8) {
            float temp = arg1[arg7][arg8] * arg5[arg8];
            arg6[arg7] += temp;
        }
    }

    // y[i] = alpha * tmp[i] + beta * y[i]
    for (int arg7 = 0; arg7 < 1300; ++arg7) {
        float tmp_term = arg2 * arg4[arg7];
        float y_term = arg3 * arg6[arg7];
        arg6[arg7] = tmp_term + y_term;
    }
}







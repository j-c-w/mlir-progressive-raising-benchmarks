void scop_entry(float A[1900][2100], float tmp[1900], float x[2100], float y[2100]) {
    // tmp[i] = 0
    for (int arg4 = 0; arg4 < 1900; ++arg4) {
        tmp[arg4] = 0.0f;
    }
    // y[i] = 0
    for (int arg4 = 0; arg4 < 2100; ++arg4) {
        y[arg4] = 0.0f;
    }
    // tmp[i] = tmp[i] + A[i][j] * x[j]
    for (int arg4 = 0; arg4 < 1900; ++arg4) {
        for (int arg5 = 0; arg5 < 2100; ++arg5) {
            tmp[arg4] += A[arg4][arg5] * x[arg5];
        }
    }
    // y[j] = y[j] + A[i][j] * tmp[i]
    for (int arg4 = 0; arg4 < 1900; ++arg4) {
        for (int arg5 = 0; arg5 < 2100; ++arg5) {
            y[arg5] += A[arg4][arg5] * tmp[arg4];
        }
    }
}

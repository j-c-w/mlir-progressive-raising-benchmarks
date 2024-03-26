void scop_entry(float A[2100][1900], float p[1900], float q[2100], float r[2100], float s[1900]) {
    // q[i] = 0
    for (int arg5 = 0; arg5 < 2100; ++arg5) {
        q[arg5] = 0.0f;
    }
    // s[i] = 0
    for (int arg5 = 0; arg5 < 1900; ++arg5) {
        s[arg5] = 0.0f;
    }
    // s[j] = s[j] + r[i] * A[i][j]
    for (int arg5 = 0; arg5 < 2100; ++arg5) {
        for (int arg6 = 0; arg6 < 1900; ++arg6) {
            s[arg6] += r[arg5] * A[arg5][arg6];
        }
    }
    // q[i] = q[i] + A[i][j] * p[j]
    for (int arg5 = 0; arg5 < 2100; ++arg5) {
        for (int arg6 = 0; arg6 < 1900; ++arg6) {
            q[arg5] += A[arg5][arg6] * p[arg6];
        }
    }
}

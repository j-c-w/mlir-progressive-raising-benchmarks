void contraction_abc_ad_bdc(float C[1024][32][32], float A[1024][1024], float B[32][1024][32]) {
    for (int a = 0; a < 1024; ++a) {
        for (int b = 0; b < 32; ++b) {
            for (int c = 0; c < 32; ++c) {
                for (int d = 0; d < 1024; ++d) {
                    float temp = A[a][d] * B[b][d][c];
                    C[a][b][c] += temp;
                }
            }
        }
    }
}

void contraction_abc_bda_dc(float C[32][32][1024], float A[32][1024][32], float B[1024][1024]) {
    for (int a = 0; a < 32; ++a) {
        for (int b = 0; b < 32; ++b) {
            for (int c = 0; c < 1024; ++c) {
                for (int d = 0; d < 1024; ++d) {
                    float temp = A[b][d][a] * B[d][c];
                    C[a][b][c] += temp;
                }
            }
        }
    }
}

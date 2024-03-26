void contraction_abc_acd_db(float C[32][1024][32], float A[32][32][1024], float B[1024][1024]) {
    for (int a = 0; a < 32; ++a) {
        for (int b = 0; b < 1024; ++b) {
            for (int c = 0; c < 32; ++c) {
                for (int d = 0; d < 1024; ++d) {
                    float temp = A[a][c][d] * B[d][b];
                    C[a][b][c] += temp;
                }
            }
        }
    }
}

void contraction_abcd_aebf_dfce(float C[32][32][32][32], float A[32][32][32][32], float B[32][32][32][32]) {
    for (int a = 0; a < 32; ++a) {
        for (int b = 0; b < 32; ++b) {
            for (int c = 0; c < 32; ++c) {
                for (int d = 0; d < 32; ++d) {
                    for (int e = 0; e < 32; ++e) {
                        for (int f = 0; f < 32; ++f) {
                            float temp = A[a][e][b][f] * B[d][f][c][e];
                            C[a][b][c][d] += temp;
                        }
                    }
                }
            }
        }
    }
}

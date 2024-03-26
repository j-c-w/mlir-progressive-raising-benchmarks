void contraction_ab_ac_cd(float A[1000][1200], float B[1200][1100], float C[1000][1100]) {
    for (int i = 0; i < 1000; ++i) {
        for (int j = 0; j < 1100; ++j) {
            for (int k = 0; k < 1200; ++k) {
                float temp = A[i][k] * B[k][j];
                C[i][j] += temp;
            }
        }
    }
}

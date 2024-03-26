void scop(float *a0, float*a1, float* a2, float*a3, float a4, float a5, float *a6) {
	for (int i = 0; i < 800;  i++) {
		for (int j = 0; j < 1200; j ++) {
			a3[1200 * i + j] *= a5;
		}
	}

	for (int i = 0; i < 800;  i++) {
		for (int j = 0; j < 900; j ++) {
			a6[900 * i + j] = 0;
		}
	}

	for (int i = 0; i < 800;  i++) {
		for (int j = 0; j < 900; j ++) {
			for (int k = 0; k < 1100; k ++) {
				a6[i* 900 + j] += a4 * a0[i* 1100 + k] * a1[k*900 + j];
			}
		}
	}

	for (int i = 0; i < 800;  i++) {
		for (int j = 0; j < 1200; j ++) {
			for (int k = 0; k < 900; k ++) {
				a3[i* 1200 + j] += a2[i* 1100 + k] * a3[k*1200 + j];
			}
		}
	}

}

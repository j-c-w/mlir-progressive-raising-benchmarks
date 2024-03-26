void scop(float *a0, float *a1, float *a2, float *a3, float *a4, float *a5, float *a6) {
	for (int i = 0; i < 800; i ++) {
		for (int j = 0; j < 1100; j ++) {
			a6[i * 1100 + j] = 0;
		}
	}
	for (int i = 0; i < 900; i ++) {
		for (int j = 0; j < 1100; j ++) {
			a5[i*1100 + j] = 0;
		}
	}
	for (int i = 0; i < 800; i ++) {
		for (int j = 0; j < 900; j ++) {
			a4[i*900 + j] = 0;
		}
	}
	for (int i = 0; i < 800; i ++) {
		for (int j = 0; j < 900; j ++) {
			for (int k = 0; k < 1000; k ++) {
				a4[i*900 + j] += a0[i*900 + j] * a1[k*900 + j];
			}
		}
	}
	for (int i = 0; i < 900; i ++) {
		for (int j = 0; j < 1100; j ++) {
			for (int k = 0; k < 1200; k ++) {
				a5[i*1100 + j] += a2[i*1100 + j] * a3[k*1200 + j];
			}
		}
	}
	for (int i = 0; i < 800; i ++) {
		for (int j = 0; j < 1100; j ++) {
			for (int k = 0; k < 900; k ++) {
				a6[i*1100 + j] += a4[i*1100 + j] * a5[k*1100 + j];
			}
		}
	}
}

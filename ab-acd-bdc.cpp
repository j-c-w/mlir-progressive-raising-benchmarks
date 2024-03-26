void f(float *c, float *a, float *b) {
	for (int i =0; i < 1024; i ++) {
		for (int j = 0; j < 1024; j ++) {
			for (int k = 0; k < 32; k ++) {
				for (int l = 0; l < 32; l ++) {
					c[i*1024 + j] += a[(i * 32 + k) * 32 + l] * b[(l * 1024 + j) * 32 + k];
				}
			}
		}
	}
}

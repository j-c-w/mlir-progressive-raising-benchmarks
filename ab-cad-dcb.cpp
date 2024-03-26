void f(float *C, float *A, float *B) {
	for (int a =0; a < 1024; a ++) {
		for (int b = 0; b < 1024; b ++) {
			for (int c = 0; c < 32; c ++) {
				for (int d = 0; d < 32; d ++) {
					C[a*1024 + b] += A[(c * 1024 + a) * 32 + d] * B[(d * 32 + c) * 1024 + b];
				}
			}
		}
	}
}

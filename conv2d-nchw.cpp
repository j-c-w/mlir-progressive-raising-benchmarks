// conv2d is a full operator in linalg
ivoid conv2d(float input[][512], float filter[][256], float output[][256]) {
    int input_height = 512;
    int input_width = 512;
    int filter_height = 256;
    int filter_width = 256;

    // Loop over the output dimensions
    for (int i = 0; i < input_height - filter_height + 1; ++i) {
        for (int j = 0; j < input_width - filter_width + 1; ++j) {
            // Apply the filter
            float sum = 0.0f;
            for (int m = 0; m < filter_height; ++m) {
                for (int n = 0; n < filter_width; ++n) {
                    sum += input[i + m][j + n] * filter[m][n];
                }
            }
            output[i][j] = sum;
        }
    }
}

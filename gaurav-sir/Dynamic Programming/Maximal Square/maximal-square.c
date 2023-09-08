#include <stdio.h>

int min(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

int maximalSquare(char** matrix, int matrixSize, int* matrixColSize) {
    if (matrixSize == 0 || *matrixColSize == 0)
        return 0;

    int maxSide = 0;
    int dp[matrixSize][*matrixColSize];

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < *matrixColSize; j++) {
            dp[i][j] = matrix[i][j] - '0'; // Convert '0'/'1' to integer
            if (i > 0 && j > 0 && dp[i][j] == 1) {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]) + 1;
            }
            if (dp[i][j] > maxSide) {
                maxSide = dp[i][j];
            }
        }
    }

    return maxSide * maxSide;
}

int main() {
    // Example usage
    char* matrix[] = {"11111", "11111", "11111", "11111"};
    int matrixSize = 4;
    int matrixColSize = 5;

    int result = maximalSquare(matrix, matrixSize, &matrixColSize);
    printf("The size of the largest square is: %d\n", result);

    return 0;
}

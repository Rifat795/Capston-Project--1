
#include <stdio.h>

int main() {
    int rows, cols, i, j, principalSum = 0, secondarySum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("The matrix must be square.\n");
        return 1;
    }

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the principal diagonal
    for (i = 0; i < rows; i++) {
        principalSum += matrix[i][i];
    }

    // Calculate the sum of the secondary diagonal
    for (i = 0; i < rows; i++) {
        secondarySum += matrix[i][rows - i - 1];
    }

    printf("Sum of the principal diagonal: %d\n", principalSum);
    printf("Sum of the secondary diagonal: %d\n", secondarySum);

    return 0;
}

#include <stdio.h>
#define MAX 100

int main(void) {
    int a, b, c, n, arr[MAX], z;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    while (1) {
    printf("Enter the operation (1: Search, 2: Update, 3: Exit): ");
    scanf("%d", &z);

        switch (z) {
            case 1:
                printf("Enter the element to search: ");
                scanf("%d", &a);

                b = 0;
                for(int i = 0; i < n; i++) {
                    if (arr[i] == a) {
                        b = 1;
                        break;
                    }
                }

                if (b == 1) {
                    printf("Found\n");
                } else {
                    printf("Not found\n");
                }
                break;

            case 2:
                printf("Enter the position to update: ");
                scanf("%d", &a);

                if (a < 0 || a >= n) {
                    printf("Invalid position\n");
                    break;
                }

                printf("Enter the new element: ");
                scanf("%d", &c);
                arr[a] = c;

                printf("Updated array:\n");
                for(int i = 0; i < n; i++) {
                    printf("%d\n", arr[i]);
                }
                break;

            case 3:
                return 0;

            default:
                printf("Invalid operation\n");
                break;
        }
    }

    return 0;
}

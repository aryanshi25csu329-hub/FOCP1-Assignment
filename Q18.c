#include <stdio.h>

int main() {
    int n, i, j;
    int arr[100];
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements are: ");

 
    for (i = 0; i < n; i++) {
        int count = 1;

        if (arr[i] == -1)
            continue;

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        if (count > 1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found)
        printf("-1");

    printf("\n");
    return 0;
}

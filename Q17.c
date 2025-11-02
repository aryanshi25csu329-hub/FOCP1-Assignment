#include <stdio.h>

int main() {
    int n, pos, i, choice;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[100]; 

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter the position for deletion (1 = front, 2 = middle, 3 = end): ");
    scanf("%d", &choice);
    if (choice == 1) {
        pos = 0; 
    } 
    else if (choice == 2) {
        pos = n / 2; 
    } 
    else if (choice == 3) {
        pos = n - 1; 
    } 
    else {
        printf("Invalid choice.\n");
        return 0;
    }

    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; 
    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

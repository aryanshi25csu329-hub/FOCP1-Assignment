#include <stdio.h>

int main() {
    int n, pos, value, i;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
   int arr[n]; 

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 
    printf("\nArray before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

  
    printf("\n\nEnter the position for insertion (1 = front, 2 = middle, 3 = end): ");
    int choice;
    scanf("%d", &choice);

    printf("Enter the element to insert: ");
    scanf("%d", &value);


    if (choice == 1) {
        pos = 0; 
    } 
    else if (choice == 2) {
        pos = n / 2; 
    } 
    else if (choice == 3) {
        pos = n; 
    } 
    else {
        printf("Invalid choice.\n");
        return 0;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++; 
    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

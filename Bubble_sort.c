#include <stdio.h>

void bubble_sort(int A[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j+1]) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main() {
    int A[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(A) / sizeof(A[0]);
    
    printf("Original Elements: ");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    
    bubble_sort(A, n);
    
    printf("\nSorted Elements: ");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");
    
    return 0;
}

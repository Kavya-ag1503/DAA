#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A[100000];
    int n, j, i, key;
    clock_t start, end;
    double time_taken;

    printf("Enter number of elements: ");
    scanf("%d", &n);

   
    srand(time(NULL));

     for (i = 1; i <= n; i++) {
        A[i] = rand() % 10000;
        printf("%d ", A[i]);
    }

   
    start = clock();

    for (j = 2; j <= n; j++) {
        key = A[j];
        i = j - 1;

        while (i > 0 && A[i] > key) {
            A[i + 1] = A[i];
            i = i - 1;
        }

        A[i + 1] = key;
    }

    end = clock();

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Time taken: %.10f seconds\n", time_taken);

    return 0;
}




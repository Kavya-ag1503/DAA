#include <stdio.h>
#include <time.h>

int binarySearch(int A[], int low, int high, int key)
{
    int mid;

    if(low > high)
     return -1;
    mid = (low + high) / 2;

    if(A[mid] == key)
      return mid;

   if(A[mid] < key)
    return binarySearch(A, mid + 1, high, key);
   else
     return binarySearch(A, low, mid - 1, key);
}

int main()
{
    int A[100], n, i, key, pos;
    clock_t start, end;
    double time_taken;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    start = clock();

    pos = binarySearch(A, 0, n - 1, key);

    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    if(pos != -1)
        printf("Element found at index %d\n", pos);
    else
        printf("Element not found\n");

    printf("Time taken = %lf seconds\n", time_taken);

    return 0;

}


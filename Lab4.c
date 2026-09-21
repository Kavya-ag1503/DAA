#include <stdio.h>
#include <time.h>

int main()
{
    int A[100], n, key;
    int low, high, mid, i;
    clock_t start, end;
    double time_taken;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // sorted array
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    // Key 
    printf("Enter the element to search: ");
    scanf("%d", &key);

  
    low = 0;
    high = n - 1;

    start = clock();   

   
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(A[mid] == key)
        {
            end = clock();   
            time_taken = (double)(end - start) / CLOCKS_PER_SEC;

            printf("Element found at position %d\n", mid + 1);
            printf("Time taken = %lf seconds\n", time_taken);
            return 0;
        }
        else if(key > A[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    end = clock();   
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Element not found.\n");
    printf("Time taken = %lf seconds\n", time_taken);

    return 0;
}


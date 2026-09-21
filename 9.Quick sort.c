#include <stdio.h>

int partition(int A[], int lb, int ub)
{
    int pivot = A[ub];       
    int start = lb;
    int end = ub - 1;
    int temp;

    while(start <= end)
    {
        while(start <= end && A[start] <= pivot)
        {
            start++;
        }

        while(start <= end && A[end] > pivot)
        {
            end--;
        }

        if(start < end)
        {
            temp = A[start];
            A[start] = A[end];
            A[end] = temp;
        }
    }

    if(start > end)
    {
        temp = A[start];
        A[start] = A[ub];
        A[ub] = temp;
    }

    return start;
}

void quickSort(int A[], int lb, int ub)
{
    int loc;

    if(lb < ub)
    {
        loc = partition(A, lb, ub);

        quickSort(A, lb, loc - 1);

        quickSort(A, loc + 1, ub);
    }
}

int main()
{
    int A[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    quickSort(A, 0, n - 1);

    printf("Sorted array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}

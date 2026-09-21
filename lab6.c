#include <stdio.h>

void merge(int A[], int lb, int mid, int ub)
{
    int i = lb;
    int j = mid + 1;
    int k = 0;
    int B[100];

    while(i <= mid && j <= ub)
    {
        if(A[i] <= A[j])
        {
            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
        k++;
    }

    while(i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }

    while(j <= ub)
    {
        B[k] = A[j];
        j++;
        k++;
    }

    for(i = lb, k = 0; i <= ub; i++, k++)
    {
        A[i] = B[k];
    }
}

void mergeSort(int A[], int lb, int ub)
{
    int mid;

    if(lb < ub)
    {
        mid = (lb + ub) / 2;

        mergeSort(A, lb, mid);
        mergeSort(A, mid + 1, ub);

        merge(A, lb, mid, ub);
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

    mergeSort(A, 0, n - 1);

    printf("Sorted array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}














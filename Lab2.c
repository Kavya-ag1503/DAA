#include <stdio.h>
#include <time.h>

int main()
{
    int a[100], n, i, j;
    int sum, max, min, count, s;
    clock_t start, end;

    // Read array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // 1. Read and Display Array
    printf("\n1. Array elements are:\n");

    start = clock();

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    end = clock();

    printf("\nStart time = %ld\n", start);
    printf("End time = %ld\n", end);
    printf("Time taken = %f seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);
    printf("Time Complexity = O(n)\n");


    // 2. Minimum and Maximum
    start = clock();

    min = a[0];
    max = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }

        if(a[i] > max)
        {
            max = a[i];
        }
    }

    end = clock();

    printf("\n2. Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
    printf("Start time = %ld\n", start);
    printf("End time = %ld\n", end);
    printf("Time taken = %f seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);
    printf("Time Complexity = O(n)\n");


    // 3. Reverse Array
    start = clock();

    printf("\n3. Reverse array:\n");

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    end = clock();

    printf("\nStart time = %ld\n", start);
    printf("End time = %ld\n", end);
    printf("Time taken = %f seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);
    printf("Time Complexity = O(n)\n");


    // 4. Sum of all elements
    start = clock();

    sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    end = clock();

    printf("\n4. Sum of all elements = %d\n", sum);
    printf("Start time = %ld\n", start);
    printf("End time = %ld\n", end);
    printf("Time taken = %f seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);
    printf("Time Complexity = O(n)\n");


    // 5. Largest element
    start = clock();

    max = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    end = clock();

    printf("\n5. Largest element = %d\n", max);
    printf("Start time = %ld\n", start);
    printf("End time = %ld\n", end);
    printf("Time taken = %f seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);
    printf("Time Complexity = O(n)\n");


    // 6. Multiplication
    printf("\nEnter n for multiplication: ");
    scanf("%d", &n);

    start = clock();

    i = 1;
    count = 0;

    while(i < n)
    {
        i = i * 2;
        count++;
    }

    end = clock();

    printf("\n6. Multiplication\n");
    printf("Number of iterations = %d\n", count);
    printf("Start time = %ld\n", start);
    printf("End time = %ld\n", end);
    printf("Time taken = %f seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);
    printf("Time Complexity = O(log n)\n");


    // 7. Division
    printf("\nEnter n for division: ");
    scanf("%d", &n);

    start = clock();

    i = n;
    count = 0;

    while(i > 1)
    {
        i = i / 2;
        count++;
    }

    end = clock();

    printf("\n7. Division\n");
    printf("Number of iterations = %d\n", count);
    printf("Start time = %ld\n", start);
    printf("End time = %ld\n", end);
    printf("Time taken = %f seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);
    printf("Time Complexity = O(log n)\n");


    // 8. s = s + i
    printf("\nEnter n for s and i: ");
    scanf("%d", &n);

    start = clock();

    i = 1;
    s = 1;
    count = 0;

    while(s < n)
    {
        i++;
        s = s + i;
        count++;
    }

    end = clock();

    printf("\n8. s = s + i\n");
    printf("Number of iterations = %d\n", count);
    printf("Final i = %d\n", i);
    printf("Final s = %d\n", s);
    printf("Start time = %ld\n", start);
    printf("End time = %ld\n", end);
    printf("Time taken = %f seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);
    printf("Time Complexity = O(sqrt(n))\n");


    // 9. Constant Time
    start = clock();

    printf("\n9. My name is Kavya\n");

    end = clock();

    printf("Start time = %ld\n", start);
    printf("End time = %ld\n", end);
    printf("Time taken = %f seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);
    printf("Time Complexity = O(1)\n");


    // 10. Quadratic Time
    printf("\nEnter n for quadratic operation: ");
    scanf("%d", &n);

    start = clock();

    count = 0;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            count++;
        }
    }

    end = clock();

    printf("\n10. Quadratic operation\n");
    printf("Number of operations = %d\n", count);
    printf("Start time = %ld\n", start);
    printf("End time = %ld\n", end);
    printf("Time taken = %f seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);
    printf("Time Complexity = O(n^2)\n");

    return 0;
}
#include <stdio.h>
#include <time.h>

int Fibonacci(int n)
{
    if (n == 0)
      return 0;
    else if (n ==1)
      return 1;
    else
      return Fibonacci(n-1)+ Fibonacci(n-2);

}

 int main()
{
    long long n, i;
    clock_t start, end;
    double time_taken;

 printf("Enter number of terms ");
 scanf("%d",&n);

    start= clock();

 printf("the fibonacci series is:");


    for(i = 0; i < n; i++)
    {
        printf("%lld ", Fibonacci(i));
    }

    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nTime taken = %lf sec\n", time_taken);


    return 0;
}



#include <stdio.h>
#include <time.h>

int main()
{
    long long  n,i;
    int a=0;
    int b=1;
    int c;

    clock_t start, end;
    double time_taken;
 
    printf("Enter number of terms you want in series ");
    scanf("%lld",&n);
   
    start = clock();

    for(i = 0; i < n; i++)
    {
    printf("%d",a);
    c=a+b;
    a=b;
    b=c;
}

end = clock();
time_taken = (double)(end - start) / CLOCKS_PER_SEC;
printf(" \nTime taken = %lf sec\n", time_taken);
   return 0;
}





























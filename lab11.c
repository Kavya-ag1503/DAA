#include <stdio.h>

int w[20], n, target;

void subset(int index, int sum, int total)
{
    if(sum == target)
    {
        printf("Subset found\n");
        return;
    }

    if(index == n)
        return;

    if(sum > target || sum + total < target)
        return;

    // Include current element
    subset(index + 1,
           sum + w[index],
           total - w[index]);

    // Exclude current element
    subset(index + 1,
           sum,
           total - w[index]);
}

int main()
{
    int total = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &w[i]);
        total = total + w[i];
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    subset(0, 0, total);

    return 0;
}
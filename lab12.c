#include <stdio.h>

int n, capacity;
int weight[20], profit[20];
int maxProfit = 0;

void knapsack(int index, int currentWeight, int currentProfit)
{
    // All items checked
    if(index == n)
    {
        if(currentProfit > maxProfit)
            maxProfit = currentProfit;

        return;
    }

    // INCLUDE current item
    if(currentWeight + weight[index] <= capacity)
    {
        knapsack(index + 1,
                 currentWeight + weight[index],
                 currentProfit + profit[index]);
    }

    // EXCLUDE current item
    knapsack(index + 1,
             currentWeight,
             currentProfit);
}

int main()
{
    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter weights: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &weight[i]);

    printf("Enter profits: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &profit[i]);

    printf("Enter capacity: ");
    scanf("%d", &capacity);

    knapsack(0, 0, 0);

    printf("Maximum Profit = %d\n", maxProfit);

    return 0;
}
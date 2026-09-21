#include <stdio.h>

int main()
{
    int a[100], n, i, choice;
    int min, max, sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Read and Display Array\n");
        printf("2. Find Minimum and Maximum\n");
        printf("3. Find Largest Element\n");
        printf("4. Find Sum of All Elements\n");
        printf("5. Reverse Array\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array elements are: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 2:
                min = max = a[0];

                for(i = 1; i < n; i++)
                {
                    if(a[i] < min)
                        min = a[i];

                    if(a[i] > max)
                        max = a[i];
                }

                printf("Minimum = %d\n", min);
                printf("Maximum = %d\n", max);
                break;

            case 3:
                max = a[0];

                for(i = 1; i < n; i++)
                {
                    if(a[i] > max)
                        max = a[i];
                }

                printf("Largest element = %d\n", max);
                break;

            case 4:
                sum = 0;

                for(i = 0; i < n; i++)
                {
                    sum = sum + a[i];
                }

                printf("Sum = %d\n", sum);
                break;

            case 5:
                printf("Reversed array is: ");
                for(i = n - 1; i >= 0; i--)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}


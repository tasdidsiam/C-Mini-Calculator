#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divide(int a, int b);

int main()
{
    int choice;
    int num1, num2;
    char again;

    system("color 4");

    do
    {
        system("cls");

        printf("===== MINI CALCULATOR =====\n\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4)
        {
            printf("\nEnter first number: ");
            scanf("%d", &num1);

            printf("Enter second number: ");
            scanf("%d", &num2);
        }

        printf("\n");

        switch(choice)
        {
            case 1:
                printf("Result: %d + %d = %d\n", num1, num2, add(num1, num2));
                break;

            case 2:
                printf("Result: %d - %d = %d\n", num1, num2, sub(num1, num2));
                break;

            case 3:
                printf("Result: %d * %d = %d\n", num1, num2, mul(num1, num2));
                break;

            case 4:
                if(num2 == 0)
                {
                    printf("Error: Division by zero is not allowed!\n");
                }
                else
                {
                    printf("Result: %d / %d = %.2f\n", num1, num2, divide(num1, num2));
                }
                break;

            case 5:
                printf("Thank you for using the calculator!\n");
                printf("Copyright © Tasdid Siam\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }

        printf("\nDo you want to calculate again? (y/n): ");
        scanf(" %c", &again);

    } while(again == 'y' || again == 'Y');

    printf("\nThank you for using the calculator!\n");
    printf("Copyright © Tasdid Siam\n");

    getch();
    return 0;
}
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}

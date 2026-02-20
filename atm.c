#include <stdio.h>
void checkbalance(float balance)
{
    printf("your balance is %.2f\n", balance);
}
int makedeposit()
{
    float deposit;
    printf("enter amount to depoist: ");
    scanf("%d", &deposit);
    if (deposit <= 0)
{
    printf("Invalid amount!\n");
    return 0;
}
    return deposit;
}
int makewithdraw(float balance)
{
    float withdraw;
    printf("enter amount to withdraw: ");
    scanf("%d", &withdraw);
    if (withdraw <= 0)
{
    printf("Invalid amount!\n");
    return 0;
}
    else if (withdraw > balance)
    {
        printf("\n!!!!Insuffisant balance!!!!\n");
        return 0;
    }
    else if ((balance-withdraw)<1000)
    {
        printf("Minimum balance of 1000 must be maintained!");
        return 0;
    }
    else
        return withdraw;
}
int main()
{
    float balance = 1000000.0;
    int choice;
    printf("*** WELCOME TO THE BANK ***\n");
    do
    {
        printf("\n1. Press 1 for balance\n2. press 2 to make a deposit\n3. press 3 to make a withdraw\n4. press 4 to exit\n");
        printf("\n***SELECT ONE OPTION***\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            checkbalance(balance);
            break;
        case 2:
            balance += makedeposit();
            break;
        case 3:
            balance -= makewithdraw(balance);
            break;
        case 4:
            printf("***THANKS FOR USING MY BANK***\n   ***ENJOY YOUR DAY***");
            break;
        default:
            printf("pelease choose between 1-4 ");
        }
    } while (choice != 4);

    return 0;
}
#include <stdio.h>

int main()
{
    int option;
    float balance = 1000.0;
    float withdraw, deposit;

    printf("Welcome to the ATM\n");

    while(1)
    {
        printf("\nChoose an option:\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                printf("Your balance is $%.2f\n", balance);
                break;
            case 2:
                printf("Enter the amount to withdraw: ");
                scanf("%f", &withdraw);
                if(withdraw > balance)
                {
                    printf("Insufficient balance\n");
                }
                else
                {
                    balance -= withdraw;
                    printf("Your new balance is $%.2f\n", balance);
                }
                break;
            case 3:
                printf("Enter the amount to deposit: ");
                scanf("%f", &deposit);
                balance += deposit;
                printf("Your new balance is $%.2f\n", balance);
                break;
            case 4:
                printf("Thank you for using the ATM\n");
                return 0;
            default:
                printf("Invalid option\n");
                break;
        }
    }

    return 0;
}

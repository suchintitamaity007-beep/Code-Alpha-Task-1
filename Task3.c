#include<stdio.h>
void checkBalance(float balance);
float deposit();
float withdraw(float balance);
int main()
{
    int choice=0;
    float balance=0.0f;
    printf("\n *** WELCOME TO THE BANK ***");
    do{
        printf("\n Select an option: \n");
        printf("\n 1. Check Balance \n");
        printf("2. Deposit Money \n");
        printf("3. Withdraw Money \n");
        printf("4. Exit \n");
        printf("\n Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
               checkBalance(balance);
               break;
            case 2:
               balance += deposit();
               break;
            case 3:
               balance -= withdraw(balance);
               break;
            case 4:
               printf("\n Thank you for using the bank! \n");
               break;
            default:
               printf("\n Invalid choice! Please select 1-4 \n"); 
        }
    }while(choice!=4);
    return 0;
}
void checkBalance(float balance)
{
    printf("\n Your current balance is: $%.2f \n",balance);
}
float deposit()
{
    float amount=0.0f;
    printf("\n Enter amount to deposit: $");
    scanf("%f",&amount);
    if(amount<0)
    {
        printf("Invalid Amount \n");
        return 0.0f;
    }
    else
    {
        printf("Successfully deposited $%.2f \n",amount);
        return amount;
    }
}
float withdraw(float balance)
{
    float amount=0.0f;
    printf("\n Enter amount to withdraw: $");
    scanf("%f",&amount);
    if(amount<0)
    {
        printf("Invalid amount! \n");
        return 0.0f;
    }
    else if(amount>balance)
    {
        printf("Insufficient balance \n");
        return 0.0f;
    }
    else
    {
        printf("Successfully withdrew $%.2f \n",amount);
        return amount;
    }
}


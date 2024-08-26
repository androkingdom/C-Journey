#include <stdio.h> 
// Create a structure representing a bank account of a customer.
struct BankAcc{
    char AccountNumber[11];
    char name[30];
    char ifsc[12];
    char phoneNumber[11];
    int Balance;
};

int main(){
    struct BankAcc Acc1 = {"1234567890", "Aanya Sharma", "ABCD0123456", "1234567890", 900000};
    printf("The account holder %s has an account number %s\n", Acc1.name, Acc1.AccountNumber);
    printf("Their IFSC code is %s\n", Acc1.ifsc);
    printf("Contact number: %s\n", Acc1.phoneNumber);
    printf("With Balance: %d\n", Acc1.Balance);
    return 0;
}
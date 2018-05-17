#include <stdio.h>
#include <stdlib.h>

struct bank_account {
    int balance;
    int account_number;
};

void print_Structure(struct bank_account *p, int n) {
    int i = 0;
    for (;i<n; i++){
        printf("Bank account: \n");
        printf("account number: %d\n", p[i].account_number);
        printf("balance: %d\n", p[i].balance);
    }
}

void input_Structure(struct bank_account  *p, int n) {
    int i = 0;
    for (;i<n; i++){

        printf("Input account number: ");
        scanf("%d", &p[i].account_number);

        printf("Input balance: ");
        scanf("%d", &p[i].balance);

    }
}

int balance_sume(struct bank_account *p, int n) {
    int sume = 0;
    int i = 0;
    for(;i<n; i++) {
        sume += p[i].balance;
    }
    return sume;
}

int main()
{
    int n;
    do{
        printf("Input array size: ");
        scanf("%d", &n);
    }while(n<=0);

    struct bank_account array_of_bank_accounts[n];

    input_Structure(array_of_bank_accounts, n);
    print_Structure(array_of_bank_accounts, n);
    printf("Sume of balance of all accounts: %d\n", balance_sume(array_of_bank_accounts, n));

    return 0;
}

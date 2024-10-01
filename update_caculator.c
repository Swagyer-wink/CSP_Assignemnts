#include <stdio.h>
float income, rent, utilities, grocieries, transportation, savings, expenses, spend;

float input(char type[], float var){
    printf("monthly %s:\n", type);
    scanf("%f", &var);
    return var;
}


void percent(char type[], int amount){
    int per = amount/income *100;

    printf("Your %s is %d%% of your income. \n", type, per);

}

int main(void){
    
    printf("this is a budget caculator.\n");
    income = input("income", income);

    income = input("income", income);
    rent = input("rent", rent);
    grocieries = input("grocieries", grocieries);
    utilities = input("utilities", utilities);
    transportation = input("transportation", transportation);


    savings = income * .2;
    expenses = rent + utilities + grocieries + transportation;
    spend = income - expenses - savings;
    printf("your expenses $%.2f\n", expenses);
    printf("your savings $%.2f\n", savings);
    printf("you make $%.2f\n", income);
    printf("your spending $%.2f\n", spend);
    
    percent("rent", rent);
    percent("utilities", utilities);
    percent("grocieries", grocieries);
    percent("transportation", transportation);
    percent("expenses", expenses);
    percent("savings", savings);
    percent("spending money", spend);
    
   
    return 0;

}

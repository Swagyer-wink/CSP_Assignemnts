#include <stdio.h>
int age = 3;
int main(void){
    if (age >= 18){
        printf("You are old enough to vote! \n");
    }else{
        printf("You can not vote. Try again when you 18+. \n");
    }
    if (age >= 16){
        printf("You are able to drive! \n");
    }else{
        printf("you are not old enough to drive, try again next year. \n");
    }
    if (age >= 15){
        printf("You have your Driving permit and can drive with adults. \n");
    }else{ 
        printf("You can not drive come back when your sixteen. \n");
    }
    if (age >= 5){
        printf("You can go to school! \n");
    }else{
        printf("How are you on this you arent old enough to read or go to school. \n");
    }
}

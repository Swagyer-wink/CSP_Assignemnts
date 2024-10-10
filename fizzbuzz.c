#include <stdio.h>
#include <string.h>
int i;
char one[50];
char two[50];
char three[50];
int usr;
int main(){
    printf("Give me a number\n");
    scanf("%d", &usr);
    printf("Give me a short word\n");
    scanf("%s", &one);
    printf("Give me another short word\n");
    scanf("%s", &two);
    strcat(three,one);
    strcat(three, two);
    //loops that count to 50
    for(i=1;i<usr;i++){
    //replace #'s divisible by 3 and 5 with "fizzbuzz"
    if(i%3==0 && i%5==0){

        printf("%s\n", three);
    }else if (i%3==0){
    //replace #'s divisible by 3 with "fizz"
    printf("%s\n", one);
    }else if (i%5==0){
    //replace #'s divisible by 5 with "buzz"
    printf("%s\n", two);
    }else {printf("%d\n", i);
    //print just the number
    }
    }


    return 0;
}

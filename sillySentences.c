#include <stdio.h>

int main(void){
    char animal[20];
    char place[20];
    char pastVerb[20];
    printf("Name an animal: ");
    scanf("%s", animal );
    printf("name a place: ");
    scanf("%s", place);
    printf("name a pastVerb: ");
    scanf("%s", pastVerb);
    printf("the %s walked to the %s and %s with his friend the anger turtle. ", animal, place, pastVerb);
    return 0;
}

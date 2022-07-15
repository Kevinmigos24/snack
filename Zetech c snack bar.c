/*
Zetech C Snack bar
created by DIT-1186
kevin
on 15th July 2022
MIT License
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
{
    int item;
    printf("\tTodays Menu\n");
    printf("Hamburger - ksh 250\n");
    printf("Samosa - ksh 50\n");
    printf("African tea - ksh 60\n");
    printf("Smokie - ksh 30\n");
    printf("Enter item No");
    scanf("%d"&item);
    if(item > 0 && item<=3){
            printf("item added to cart\n");
    }
    else{
       printf("Invalid item");
       menu();
    }
    return item;
}

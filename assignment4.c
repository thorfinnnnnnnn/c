#include <stdio.h>

int main(){
    float amount , tax , total ;
    printf("Enter an amount :");
    scanf("%f", &amount);
    total= amount + amount*(5.00/100.00);
printf("With tax added: %f \n" ,total);

    return 0;
}
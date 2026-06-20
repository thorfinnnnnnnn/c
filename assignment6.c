#include <stdio.h>

int main(){
    int x,output;
    printf("Put the value of x: ");
    scanf("%d" , &x);
    output=((((3*x+2)*x-5)*x-1)*x+7)*x-6 ;
    printf("output: %d \n" , output);
    return 0;
}
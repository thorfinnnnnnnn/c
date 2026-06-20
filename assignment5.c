#include <stdio.h>

int main(){
    int x,output;
    printf("Put the value of x: ");
    scanf("%d" , &x);
    output=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
    printf("output: %d \n" , output);
    return 0;
}
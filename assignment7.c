#include <stdio.h>

int main(){
    int dollar ,amount5, amount4, amount3 ,amount2, amount,amount1 ;
    printf("Enter a dollar amount : ");
    scanf("%d", &dollar);
amount= dollar/20;
printf("$20 bills:%d \n" , amount);
amount1= 93- 20*4;
amount2=amount1/10;
printf("$10 bills:%d \n" , amount2);
amount4=((93- 20*4)-10);
amount5=amount4/5;
printf("$5 bills: %d \n" , amount5);
amount3= ((93- 20*4)-10);
printf("$1 bills:%d \n" , amount3 );
    return 0;
}
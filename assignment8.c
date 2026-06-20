#include <stdio.h>

int main(){
    float amount,rate,payment,balance,rateM,balance2,balance1;
    printf("Enter the amount of loan :");
    scanf("%f" , &amount);
    printf("Enter interset rate :");
    scanf("%f" , &rate);
    printf("Enter monthly payment :");
    scanf("%f" , &payment);
rateM=rate/12;    
balance=(amount+amount*rateM/100)-payment;
printf("Balance remaining after first payment : $ %.2f \n" , balance);
balance2=(balance+balance*rateM/100)-payment;
printf("Balance remaining after second payment : $ %.2f \n" , balance2);
balance1=(balance2+balance2*rateM/100)-payment;
printf("Balance remaining after third payment : $ %.2f \n" , balance1);
    return 0;
}
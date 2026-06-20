#include <stdio.h>

int main(){
    float radius, volume ;
    printf("Enter radius of sphere :");
    scanf("%f" , &radius );
    volume= (4.0f/3.0f) * 3.14*radius * radius * radius ;
printf("volume %.1f \n", volume);
    return 0;
}
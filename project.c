#include<stdio.h>
int main() {
    int time;
    float principle,rate,si;
    printf("enter the principle :");
    scanf("%f" , &principle);
    
    printf("enter the time :");
    scanf("%d" , &time);
    rate = 8.0;
    si = (principle * time * rate) / 100;
    printf("%f" , si);
    return 0;
}
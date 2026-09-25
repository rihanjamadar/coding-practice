// write a program to convert celcius to fahrenhiet
#include<stdio.h>
int main(){
    float celcius, fahrenhite;
    printf("Enter the temperature in Celcius ");
    scanf("%f",&celcius);
    fahrenhite = (celcius * 9.0/5.0)+ 32;
    printf("The temperature in Fahrenheit %f",fahrenhite);
    return 0;
}
#include<stdio.h>
int main(){
    int a;           // variable declaration
    float b ;
    long c;
    char d;
    
    a = 6;// variable initialization   
    b = 6.5;
    c = 1000000;
    d = 'A';
   
    printf("%d",a); //%d is used to print integer values
    printf("%f",b); //%f is used to print float values
    printf("%ld",c); //%ld is used to print long int values
    printf("%c",d); //%c is used to print character values
    return 0;

}
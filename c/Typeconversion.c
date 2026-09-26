#include<stdio.h>
int main(){
    float a =9.0 ;
    int b =2;
    float c = a/b;
    int d =3.44;
    printf("The division of 9/2 is %f",c);
    printf("The type of d is %d",d); //demotion of value is called as type demotion

    d =(int) a;
    printf("%d\n",d);
    return 0;

}
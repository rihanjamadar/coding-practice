#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : \n");
    scanf("%d",&a );
    if(a % 97==0){
        printf("The number is divisible by 97\n");
    }
    else{
        printf("The number is not divisible by 97\n");
    }
    return 0;
}
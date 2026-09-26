#include<stdio.h>
int main(){
    if(1){
        printf("This if is executed\n");
    }
    if(2345){
        printf("This is also executed\n");
    }
    if(0){
        printf("Zero cant be executed\n");
    }
    if('c'){
        printf("This character is also executed\n");
    }
    return 0;

}
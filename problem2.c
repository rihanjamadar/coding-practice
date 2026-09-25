//calculate area of circle using its radius and modify the same program to find the volume of cylinder given its radius and height
#include<stdio.h>
int main(){
    float pi = 3.14;
    int radius;
    printf("Enter the radius :"); 
    scanf("%d",&radius);
    float area = pi*radius*radius;

    int height;    
    printf("Enter the height of cylinder : ");
    scanf("%d",&height);

    float volume= pi*radius*radius*height;
    printf("The area of Circle is %f",area);
    printf("\n The volume of cylinder is %f",volume);
    return 0;
}
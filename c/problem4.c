// program to calculate simple interest, for principle value, duration, and rate of interest per year
#include <stdio.h>
int main(){
    float principle_value , simple_interest,Total_interest,Final_amount;
    printf("Enter the Principle value ");
    scanf("%f",&principle_value);
    printf("Enter the Rate of Interest per annum ");
    scanf("%f",&simple_interest);
    int number_of_years;
    printf("Enter the number of years ");
    scanf("%d",&number_of_years);
    
    Total_interest =(principle_value*simple_interest*number_of_years)/100;
    printf("\n Total interest over %d years is %f",number_of_years , Total_interest);
    Final_amount =principle_value + Total_interest;

    
    printf("\n Final value %f", Final_amount);
    
    return 0;

}
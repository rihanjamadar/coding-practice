#include <stdio.h>
int main(){
    int a =12;
    int b =2;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    printf("Sum of %d and %d is %d\n", a, b, sum);
    printf("Difference of %d and %d is %d\n", a, b, sub);
    printf("Product of %d and %d is %d\n", a, b, mul);
    printf("Quotient of %d and %d is %d\n", a, b, div);
    return 0; 
}

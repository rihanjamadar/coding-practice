#include <stdio.h>
#define MAX 10

int stack[MAX], top = -1;

void push(int x) {
    if (top == MAX - 1)
        printf("Stack overflow\n");
    else
        stack[++top] = x;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());
    return 0;
}
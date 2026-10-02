#include <stdio.h>
#define MAX 10
int stack[MAX], queue[MAX], top = -1, front = -1, rear = -1;
void push(int x) {
    queue[++rear] = x;
}
int pop() {
    if (front == rear) {
        printf("Stack underflow\n");
        return -1;
    } else {
        for (int i = rear; i > front; i--)
            queue[i - 1] = queue[i];
        rear--;
        return queue[front];
    }
}
int main() {
    push(10);
    push(20);
    push(30);
    printf("Popped element: %d\n", pop());
    return 0;
}
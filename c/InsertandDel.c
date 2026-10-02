#include <stdio.h>
#define MAX 10
int queue[MAX], front = -1, rear = -1;
void insert(int x) {
    if (rear == MAX - 1) {
        printf("Queue overflow\n");
    } else {
        if (front == -1)
            front = 0;
        queue[++rear] = x;
    }
}
int delete() {
    if (front == -1) {
        printf("Queue underflow\n");
        return -1;
    } else {
        int elem = queue[front];
        if (front == rear)
            front = rear = -1;
        else
            front++;
        return elem;
    }
}
int main() {
    insert(10);
    insert(20);
    insert(30);
    printf("Deleted element: %d\n", delete());
    return 0;
}
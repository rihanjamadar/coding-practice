#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void traverse(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}
void search(struct Node* head, int x) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == x) {
            printf("%d found\n", x);
            return;
        }
        current = current->next;
    }
    printf("%d not found\n", x);
}
int main() {
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->next = NULL;
    printf("Traversal of Linked List:\n");
    traverse(head);
    printf("\nSearching element:\n");
    search(head, 2);
    search(head, 3);
    return 0;
}
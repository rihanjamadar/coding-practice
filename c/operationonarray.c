#include<stdio.h>
void create(int arr[], int n){
    printf("Array elements: ");
    for(int i =0; i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
void insert(int arr[], int*n,int pos, int elem){
    for(int i=*n;i>pos;i--){
        arr[i]= arr[i-1];
    }
    arr[pos]=elem;
    (*n)++;
}
void delete(int arr[],int*n,int pos){
    for(int i = pos;i<*n-1;i++){
        arr[i]=arr[i+1];
    }
    (*n)--;
}
int main() {
int arr[100], n = 5, pos, elem;
int initial[] = {1, 2, 3, 4, 5};
for (int i = 0; i < n; i++) arr[i] = initial[i];
create(arr, n);
insert(arr, &n, 2, 99);
create(arr, n);
delete(arr, &n, 3);
create(arr, n);
return 0;
}
#include<stdio.h>
int main(){
    int arr[10] = {10,30,40,50,0};
    int n = 5;
    int pos = 2;
    int ele = 20;
    printf("Array Before Insertion\n");
    for (int i = 0; i<4; i++){
        printf("%d\t",arr[i]);
    }
    for(int i = n; i>=pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = ele;
    printf("\nArray after Insertion\n");
    for(int i = 0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}

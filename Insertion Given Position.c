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

//by Using User Input

#include<stdio.h>
int main(){
    int arr[50], size, pos, ele;
    printf("Enter Your Array Size:");
    scanf("%d",&size);
    printf("Enter Your Elements\n");
    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter Your Location:");
    scanf("%d",&pos);
    printf("Enter The Element:");
    scanf("%d",&ele);
    
    printf("Array Before Insertion\n");
    for(int i = 0; i<size; i++){
        printf("%d\t",arr[i]);
    }
    for(int i = size; i>=pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = ele;
    printf("\nArray Afte Insertion\n");
    for(int i = 0; i<(size+1); i++){
        printf("%d\t",arr[i]);
    }
    
    return 0;
}

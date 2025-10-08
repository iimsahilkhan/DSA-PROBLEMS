#include<stdio.h>
int main(){
    int arr[50],size;
    printf("Enter Size of Array:");
    scanf("%d",&size);
    printf("Enter Elements of Array\n");
    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("Your Traversed Array is\n");
    for(int i = 0; i<size; i++){
        printf("%d\t",arr[i]);
    }
    
    return 0;
}

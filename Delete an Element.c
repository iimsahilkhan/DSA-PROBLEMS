#include <stdio.h>

int main() {
    int arr[50], size, pos;
    printf("Enter the Size of Array:");
    scanf("%d",&size);
    printf("Enter The Elements\n");
    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter Location:");
    scanf("%d",&pos);
    
    printf("Array Before Deletion:\n");
    for (int i = 0; i<size; i++){
        printf("%d\t",arr[i]);
    }
    //Deletion logic
    for(int i = pos; i<size; i++){
        arr[i - 1] = arr[i];
    }
    if(pos <= size){
        size--;
    }
    
    printf("\nArray After Delition\n");
    for (int i = 0; i<size; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}

#include <stdio.h>

int main() {
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int pos = 3;
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

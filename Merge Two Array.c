#include<stdio.h>
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int resultArr[]){
    for (int i = 0; i<size1; i++){
        resultArr[i] = arr1[i];
    }
    for (int i = 0; i<size2; i++){
        resultArr[size1+i] = arr2[i];
    }
}
int main(){
    int arr1[] = {1,4,6};
    int size1 = 3;
    int arr2[] = {2,3,5,8};
    int size2 = 4;
    int mergeArray[size1 + size2];
    mergeArrays( arr1, size1, arr2, size2, mergeArray);
    printf("Merged Array:");
    for (int i = 0; i<(size1 + size2); i++){
        printf("%d\t",mergeArray[i]);
    }
    printf("\n");
    return 0;
}

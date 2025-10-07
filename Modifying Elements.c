#include<stdio.h>
int main(){
    int arr[50], size, new_s;
    printf("Enter the Size of Array: ");
    scanf("%d",&size);
    printf("Enter the Elements of Array\n");
    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter The Incressed Size: ");
    scanf("%d",&new_s);
    // increasing each elements by 5
    for(int i = 0; i<size; i++){
        arr[i] += new_s;
    }
    printf("Modified Array\n");
    for(int i = 0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}

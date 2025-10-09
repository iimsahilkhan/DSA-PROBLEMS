#include<stdio.h>
int main(){
    int marks[10] = {10,20,30,40,50};
    
    for(int i = 0; i<5; i++){
        printf("Elements Position: %d\n",i);
        printf("Elements Value: %d\n", marks[i]);
        printf("Elements Memory Address: %p\n\n",&marks[i]);
    }
    return 0;
}

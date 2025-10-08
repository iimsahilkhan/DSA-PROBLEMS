#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 3

int top = -1,stack[MAXSIZE];

void push(){
    int n;
    if(top == MAXSIZE - 1){
        printf("stack is full\n");
    }else{
        printf("Enter Value to Push:");
        scanf("%d",&n);
        top += 1;
        stack[top] = n;
        printf("Element %d Pushed\n",n);
    }
}

void pop(){
    if (top == -1){
        printf("Stack is Empty\n");
    }else{
        printf("Popped Value:%d\n",stack[top]);
        top--;
    }
}

void display(){
    if(top == -1){
        printf("\nStack is Empty\n");
    }else{
        printf("Stack Elements:\n");
        int i = top;
        while(i>=0){
            printf("%d\n",stack[i]);
            i--;
        }
    }
}
int main(){
    int choice;
    while(1){
        printf("\n**Stack Menu**\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Choose an Option:");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("Galat Hai\n");
        }
    }
    return 0;
}

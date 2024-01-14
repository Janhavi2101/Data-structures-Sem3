#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int stack[MAX];
int top = -1;

char isFull(){
    if(top== MAX){
        printf("Stack is full. Stack overflow\n");
        return 1;
    }
    else{
        printf("Stack is not full\n");
    }
    return 0;
}
char isEmpty(){
    if(top == -1){
        printf("Stack is empty. stack underflow\n");
        return 1;
    }
    else printf("Stack is not empty\n");
    return 0;
}

void push(int value) {
    if (top == MAX - 1) {
        printf("Error: Stack overflow!\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Error: Stack underflow!\n");
        return -1;
    }
    return stack[top--];
}

void peek(){
    if(isEmpty()!= 1 ){
    printf("The value at top of stack is:%d\n", stack[top]);
    }
    else
    printf("Cant peek into empty stack\n");

}

int main() {
    int choice, value;
    printf("Name: Janhavi Gangawane\nBatch :S12\nRoll No: 28\n\n");
    while (1) {
        printf("1. isFull\t2. isEmpty\t3. Push\t4. Pop\t5. Peek\t6. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            isFull();
            break;
            case 2: 
            isEmpty();
            break;
            case 3:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 4:
                value = pop();
                if (value != -1) {
                    printf("Popped value: %d\n", value);
                }
                break;

            case 5:
               peek();
               break;
                
            case 6:
              exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

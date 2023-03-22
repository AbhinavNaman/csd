#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 4

int stk[MAX_SIZE], top=-1;
void push();
void pop();
void display();

void main(){
    int ch;

    while(1){
        scanf("%d", &ch);

        switch (ch)
        {
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
            break;
        
        default:
            printf("invalid");
        }
    }
}

void push(){
    int p;
    if(top == MAX_SIZE-1){printf("overflow");}
    else{
        scanf("%d", &p);
        top++;
        stk[top] = p;
    }
}

void pop(){
    if(top==-1){printf("underflow");}
    else{
        top--;
    }
}

void display(){
    if(top==-1){printf("empty");}
    else{
        for(int i =0; i<=top; i++){
            printf("%d \t", stk[i]);
        }
    }
}
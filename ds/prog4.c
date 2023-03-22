#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

#define MAX 5
int f=-1, r=-1, q[MAX];

void insert(){
    int item;
    if(r== MAX-1)printf("overflow");
    else{
        if(f==-1)f=0;
        printf("enter item to be inserted");
        scanf("%d", &item);
        q[++r]=item;
    }
}

void delete(){
    if(f==-1)printf("underflow");
    else if(f>r){
        f=r=-1;
        printf("underflow");
    }
    else{
        f++;
    }
}

void display(){
    if(f==-1)printf("underflow");
    else{
        for(int i=f; i<=r; i++){
            printf("%d", q[i]);
        }
    }
}

void main(){
    int ch;
    do{
        scanf("%d", &ch);
        switch(ch){
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            default: exit(0);
        }
    }while(ch!=4);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

#define MAX 5
int f=-1, r=-1, q[MAX], item, cout =0;

void add(){
    if(cout == MAX)printf("full");
    else{
        scanf("%d", &item);
        if(f==-1)f=r=0;
        else r=(r+1)%MAX;
        q[r]= item;
        cout++;
    }
}

void del(){
    if(cout == 0)printf("empty");
    else{
       if(f==r)f=r=-1;
       else{
        f=(f+1)%MAX;
        cout--;
       } 
    }
}

void display(){
    if(cout == 0)printf("empty");
    else{
        int i= f;
        while(i!=r){
            printf("%d", q[i]);
            i = (i+1)%MAX;
        }
        printf("%d", q[i]);
    }
}

void main(){
    int ch;
    do{
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: add(); break;
        case 2: del(); break;
        case 3: display(); break;
        case 4: exit(0); break;
        default: printf("invalid");
            break;
        }
    }while(ch!=4);
}

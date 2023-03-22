#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include<string.h>

int F(char sym){
    switch(sym){
        case '+':
        case '-': return 1;
        case '*':
        case '/':
        case '%':return 2;
        case '^':return 3;
        default: return 0;
    }
}

void infix_postfix(char infix[], char postfix[]){
    char s[30];
    int top=-1, j=0;
    s[++top] = '#';
    
    for(int i=0; i<strlen(infix); i++){
        if(isalnum(infix[i])){
            postfix[j++]= infix[i];
        }
        else if(infix[i] == '('){
            s[++top] = infix[i];
        }
        else if(infix[i] == ')'){
            while(s[top]!= '('){
                postfix[j++] = s[top--];
            }
            top--;
        }
        else{
            while(F(s[top]>=F(infix[i])))
            {
            postfix[j++]=s[top--];
            }
            s[++top]=infix[i];
        }
        }
         while(s[top] != '#'){
        postfix[j++] = s[top--];
    }
    postfix[j] = '\0';
    }

void main(){
    char infix[20], postfix[20];
    printf("enter the infix expression");
    scanf("%s", infix);
    infix_postfix(infix, postfix);
    printf("postfix expression is :");
    printf("%s", postfix);
    getch();
}
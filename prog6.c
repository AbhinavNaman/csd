#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
    int info;
    struct node* link;
};

struct node* NODE;

NODE getnode(){
    NODE x;
    x= (NODE)malloc(sizeof(struct node));
    if(x== NULL){
        printf("out of memory");
        exit(0);
    }
    return x;
}


NODE insert_front(int item, NODE first){
    NODE temp;
    temp= getnode();
    temp->info = item;
    temp->link = first;
    return temp;
}

NODE delete_front(NODE first){
    if(first == NULL){
        printf("list is empty");
        return first;
    }
    else{
        first= first->link;
        return first;
    }
}

NODE insert_rear(int item, NODE first){
    NODE temp, cur;
    temp = getnode();
    temp->info= item;
    temp->link= NULL;

    if(first == NULL) return temp;

    cur = first;
    while(cur->link != NULL){
        cur=cur->link;
    }
    cur->link = temp;
    return temp;
}

NODE delete_rear(NODE first){
    NODE cur = first;
    NODE prev;
    if(cur==NULL){
        printf("list is empty");
        return first;
    }

    while(cut->link != NULL){
        prev = cur;
        cur = cur->link;
    }
    free(cur);
    prev->link = NULL;
    return first;
}

void display(NODE first){
    NODE temp = first;
    if(first == NULL){
        printf("empty");
        return first;
    }
    else{
        while(temp!= NULL){
            printf("%d", temp->info);
            temp = temp->link;
        }
    }
}

void main(){
    NODE first = NULL;
    int ch, item;

    do
    {
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            scanf("%d", &item);
            first=insert_front(item, first);
            break;

        case 2:
            scanf("%d", &item);
            first=insert_rear(item, first);
            break;

        case 3:
            first=delete_front(first);
            break;

        case 4:
            first=delete_rear(first);
            break;

        case 5: display(first);
                break;

        case 6: exit(0);
        
        default: exit(0);
                 break;
        }
    } while (ch != 6);
    
}
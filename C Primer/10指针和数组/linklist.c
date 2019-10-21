#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    int value;
    struct _node *next;
} Node;

typedef struct _list{
    Node* head;
    Node* tail;
} List;

int main(void){
    Node *head = NULL;
    int number;

    do{
        
        scanf("%d",&number);
        if(number != -1){
            Node *p = (Node*)malloc(sizeof(Node));
            p->value = number;
            p->next = NULL;
            Node *last = head;

            while(last->next){
                last = last->next;
            }
            last->next = p;
        }
    }while(number != -1);
    
    return 0;
}

void add(List* pList, int number){

            Node *p = (Node*)malloc(sizeof(Node));
            p->value = number;
            p->next = NULL;
            Node *last = head;

            while(last->next){
                last = last->next;
            }
            last->next = p;
}

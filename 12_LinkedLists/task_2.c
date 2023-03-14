#include <stdio.h>
#include <stdlib.h>

typedef struct t_node{
    int data;
    struct t_node *next;
} t_node;

void insertPos(t_node *, int);

void insertEnd(t_node *);

void deletePos(t_node *, int);

void displayList(t_node *);

void displayPos(t_node *, int);

int main(void){

    t_node *start = malloc(sizeof(t_node));

    start->data = 1;
    start->next = NULL;

    for (int i = 0; i < 13; i++){
        insertEnd(start);
    }

    displayList(start);
    displayPos(start, 14 - 5);

    return 0;
}

void insertPos(t_node *start, int pos){

    t_node *ptr,*temp;
    
    temp = malloc(sizeof(t_node));
    
    if(temp == NULL)
    {
        printf("\nOut of Memory\n");
        return;
    }
        
    printf("\nEnter the data value of the node: ");
    scanf("%d", &temp->data) ;
  
    temp->next = NULL;
    if (pos == 0){
        temp->next = start;
        start = temp;
    }
    else{
        ptr = start;
        for(int i = 0; i < pos - 1; i++){
            ptr = ptr->next;

            if (ptr == NULL){
                printf("\nPosition not found\n");
                return;
            }
        }
        temp->next = ptr->next ;
        ptr->next = temp;
    }

}

void deletePos(struct t_node *start, int pos){
    
    t_node *temp;
    t_node *current;
    temp = start;

    for (int i = 0; i < pos; i++){
        if (temp == NULL){
            printf("There is no position %d", pos);
        }
        current = temp;
        temp = temp->next;
        if (i == pos - 1){
            current->next = temp->next;
        }
    }
}

void insertEnd(t_node *start){

    t_node *temp,*ptr;
    temp = malloc(sizeof(t_node));
    
    if (temp == NULL){
        printf("\nOut of Memory\n");
        return;
    }
    printf("\nEnter the data value for the node: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    
    if(start == NULL){
        start = temp;
    }
    else{
        ptr = start;
        while (ptr->next != NULL){
            ptr = ptr->next ;
        }
        ptr->next = temp;
    }
}

void displayList(t_node *start){

    for (t_node *ptr = start; ptr != NULL; ptr = ptr->next){
        printf("%d\n", ptr->data);
    }
    printf("\n");    
}

void displayPos(t_node *start, int pos){

    t_node *ptr = start;
    
    for (int i = 0; ptr != NULL; ptr = ptr->next, i++){
        
        if (i == pos){
            printf("%d\n", ptr->data);
            return;
        }

        if (i > pos){
            printf("There is no position %d in list", pos);
            return;
        }        
    }
}
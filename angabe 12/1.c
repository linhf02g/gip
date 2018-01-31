#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *mkNode(int val){
    struct node *node = NULL;
    if((node = malloc(sizeof (struct node))) != NULL){
    node->data = val; node->next = NULL; return node;}
    else {return NULL;}
}
struct node *head, *tail;
void insert_sorted (int val) {
    struct node* current;
    struct node *p = mkNode(val);
    if (head == NULL||head->data >= p->data){
        p->next = head;
        head = p;
    }
    else{
        current = head;
        while (current->next!=NULL &&
               current->next->data < p->data)
        {
            current = current->next;
        }
        p->next = current->next;
        current->next = p;
    }
}
void printList(void){
    struct node *tmp = head;
    printf("(");
    while(tmp != NULL){
        printf(" %d", tmp->data);
        tmp = tmp->next;
    }
    printf(" )\n");
}
struct node *reverse (struct node *head)
{
    struct node* current = head;
    struct node* next = NULL;
    struct node* prev = NULL;
    int count = 0;   
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    if (next !=  NULL)
       head->next = reverse(next); 
    return prev;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("\nnhap so phan tu:");
    scanf("%d",&n);
    for(int i = 0; i<n;i++)
    {
        int x;
        printf("\nnhap vao so lieu:");
        scanf("%d",&x);
        insert_sorted(x);
    }    
    printList();
    head = reverse(head);
    printList();
    return 0;
}
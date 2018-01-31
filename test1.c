
#include<stdio.h>
#include<stdlib.h>

struct dnode{
    int data;
    struct dnode *next;
    struct dnode *prev;
};
struct dnode *mkNode(int val){
    struct dnode *node = NULL;
    if((node = malloc(sizeof (struct dnode))) != NULL){
        node->data = val; node->next=node->prev = NULL;
        return node;
    }
    else {return NULL;
    }
}
struct dnode *head, *last;
void insertFirst(int x) {
    struct dnode *node = mkNode(x);
    if(head == NULL) {
        head = node;
        return;
    }
    head->prev = node;
    node->next = head; 
    head = node;
}
 // erstes und letztes Listenelement
void printInverse(void)
{
    if(head == NULL){
        printf("( )");
        return;
    }
    printf("(");
    struct dnode *tmp = last; // ans Ende der Liste gehen
    while(tmp != NULL){
        printf("%d", tmp->data);
        tmp = tmp->prev;
    }
    printf(")");
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
        insertFirst(x);
    }    
    printInverse();
    return 0;
}
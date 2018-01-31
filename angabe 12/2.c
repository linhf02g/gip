/* Doubly Linked List implementation */
#include<stdio.h>
#include<stdlib.h>

struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head;

struct Node* GetNewNode(int x) {
	struct Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

void InsertAtHead(int x) {
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head; 
	head = newNode;
}

void Print() {
	struct Node* temp = head;
	printf("List: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
} 
void delete (int val) {
	struct Node *p = head, *prev = NULL;
	while (p != NULL && p->data != val) {
		prev = p; p = p->next;
		} // p == NULL || p->data == val
	if (p != NULL) { // p->data == val
		if (p == head) head = p->next;
		else prev->next = p->next;
		free(p);
	}
}
int main() {
	head = NULL;
	
	int n;
    printf("\nnhap so phan tu:");
    scanf("%d",&n);
    for(int i = 0; i<n;i++)
    {
        int x;
        printf("\nnhap vao so lieu:");
        scanf("%d",&x);
        InsertAtHead(x);
    }
    Print();
    int xoa;
    printf("nhap so can xoa: \n");
    scanf("%d",&xoa);
    delete(xoa);
    Print();
}
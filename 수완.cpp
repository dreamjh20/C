#include<stdio.h>
#include<stdlib.h>
typedef struct NODE * NodePointer;
typedef struct NODE{
	int data;
	NodePointer llink;
	NodePointer Rlink;
}NODE;
NodePointer tail = NULL;
void Insert(NodePointer pre, int value);
int Search(int key);
void InsertF(int value);
void InsertL(int value);
void Delete(NodePointer del, NodePointer tra);
void print();
int main(){
}
void Insert(NodePointer pre, int value){
	NodePointer temp = (NodePointer)malloc(sizeof(NODE));
	temp->data = value;
	if(!head){
		temp->link = NULL;
		head = temp;
	}
	else{
		temp->link = pre->link;
		pre->link = temp;
	}
}
int Search(int key){
	NodePointer pointer=tail;
	int i = 0;
	do{
		pointer = pointer->link;
		i++
	}while(pointer->data!=key&&pointer!=tail);
	return i;
}
void InsertF(int value){
	NodePointer temp = (NodePointer)malloc(sizeof(NODE));
	temp->data = value;
	temp->link = tail->link;
	tail->link = tamp;
}
void InsertL(int value){
	NodePointer temp = (NodePointer)malloc(sizeof(NODE));
	temp->data = value;
	tail->link = temp;
	temp->link = tail->link;
	tail = temp;
}
void Delete (NodePointer del, NodePointer tra) {
	if(del == tail){
		tra->link = del->link;
	}
	else{
		tra->link = del->link;
		tail = tra;
	}
	free(del);
}

void print(){
	for(NodePointer ptr = head; ptr!=NULL; ptr = ptr->link){
		printf("%d ",ptr->data);
	}	
	printf("\n");
}

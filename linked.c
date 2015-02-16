#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int val;
	struct node* next;
}node;
void insert(int val,node **root){
	node *ptr;
	ptr  = *root;
	if(*root == NULL){
		//printf("here\n");
		*root = (node*)malloc(sizeof(node));
		(*root)->val = val;
	//	printf("\n %d \n",(**root)->val);
	}else{
		while(ptr->next!=NULL)
			ptr = ptr->next;
		node *temp = (node*)malloc(sizeof(node));
		temp->val = val;
		ptr->next = temp;
	}
}
void display(node **root){
	node *ptr = *root;
	while(ptr!=NULL){
		printf("%d ",ptr->val);
		ptr = ptr->next;
	}
}
int main(void){
	node *root;
	root = NULL;
	insert(1,&root);
	insert(4,&root);
	display(&root);
	
}

#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
}*stnode;


void remove_element(int redata);
void loop_nodenum();
void display_list();

int main(){
	int redata; // redata="Removed data"
	int i ;
	printf("Give me the number that you want to remove\n");
	printf("------------------------------------------\n");
	printf("The number of nodes in this linked list is");
	display_list();
}


void remove_element(int redata) {
	
	 stnode = (struct node*) malloc(sizeof(struct node));
	 if(stnode == NULL){
	 	printf("Allocation Fail");
	 }
	 else {
	 	stnode->data = 1;
	 	stnode->next = NULL;
	 	
	 }
	 
	struct node *midnode = (struct node*) malloc(sizeof(struct node));
	
	midnode->data = 2;
	midnode->next = NULL;
	stnode->next = midnode;
	
	struct node *fnnode = (struct node*) malloc(sizeof(struct node));
	
	fnnode->data = 3;
	fnnode->next = NULL;
	midnode->next = fnnode;
}
void display_list() {
	struct node *cpt;
	
	if(stnode == NULL) {
		printf("the list is empty");
	}
	else {
		cpt = stnode;
		while(cpt != NULL){
			printf("Data = %d", cpt->data);
			cpt=cpt->next;
		}
	}
}


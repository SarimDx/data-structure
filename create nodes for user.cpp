#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int num;                        //Data of the node
    struct node *next;           //Address of the next node
}*stnode;

void create_List(int n);
void display_list();



int main()
{
    int n;
    
	printf("\n\n Linked List : To create  Singly Linked List :\n");
	printf("-------------------------------------------------------------\n");
		
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    create_List(n);
    printf("Now let see this list played \n");
    display_list();
    return 0;
}






// function to create the list 

void create_List(int n) {
	
	struct node *cpt , *fnnode ;
	int num , i , g;
	
	printf("do you want the list prefill or you want to fill it \n 1 for prefill \n 0 for you to fill\n -:");
    scanf("%d",&g);
    
    stnode = (struct node*) malloc(sizeof(struct node)); // Startnode or you can say head 
	
	if(stnode == NULL ) {
		printf(" Allocation Fail");
	}
	else {
		
	 printf(" input data for node 1 : ");
	 scanf("%d",&num);
	 stnode->num = num;
	 stnode->next = NULL;
	 cpt = stnode;
	 
	 for(i=2;i<=n;i++){
	 	
	 	struct node *fnnode = (struct node*) malloc(sizeof(struct node)); // Endnode or you can say footer or last 
	 	
	 	if(fnnode == NULL){
	 		printf("Allocation Fail");
	 		break ;
		 }
	 	else {
	 		printf("input data for node %d :",i);
	 		scanf("%d",&num);
	 		fnnode->num = num;
	 		fnnode->next = NULL;
	 		
	 		cpt->next = fnnode;
	 		cpt = cpt->next;
	 		
	 	
		 }
	 } 	
}
} 	




// Function to display a list 

void display_list() {
	
	struct node *cpt;
	if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else {
    	cpt = stnode;
    	while(cpt != NULL){
    		printf("Data = %d \n",cpt->num);
    		cpt = cpt->next;
		}
	}
}

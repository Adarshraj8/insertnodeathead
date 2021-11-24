#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data; 
	struct node *next;
}node;

node* insertNodeAsHeadNode(int head_value, node* start)
{
    node* p;
    p = (node*)malloc(sizeof(node));
    p->data = head_value;
    p->next = NULL;
    
    p->next = start;
    start = p;
    return start;
}
int main()
{	
	int a , i = 1 , n ,r , head_value; 
	node *p,*q,*start;
	printf("Enter the number of nodes");
	scanf("%d",&n);
	
	printf("Enter node %d  \n",i);  
	p = (node*)malloc(sizeof(node));
	scanf("%d",&a);
	p->data = a;
	p->next = NULL;
	start = p; 
		
	for(i=2;i<=n;i++)                
	 	{
	 		printf("Enter node %d  \n",i);
		 	q = (node*)malloc(sizeof(node));
			scanf("%d",&a);
			q->data = a;
			q->next = NULL;			 	
		 	p->next = q;
		 	p = p->next;		 	
	 	
		}

	p = start;
	while(p!=NULL)
	{
		printf("\t %d", p->data);
		p = p->next;
	}
	printf("\n Enter the value which you want to include as head node");
	scanf("%d",&head_value);
start =	insertNodeAsHeadNode(head_value , start);
   

printf(" ");
p = start;
while(p!=0){
    printf("\t %d",p->data);
    p = p->next;
}
return 0;
}



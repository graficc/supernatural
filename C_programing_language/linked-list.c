#include<stdio.h>
#include<stdlib.h>
typedef struct _node{
		int value;
		struct _node *next;
}Node;

int main(void)
{
	int number;
	Node *head = NULL;
	do{
			scanf("%d",&number);
			if(number != -1){	
					//add to linked-list
					Node *p = (Node *)malloc(sizeof(Node));
					p->value = number;
					p->next = NULL;
					//find the last 
					Node *last = head;
					if( last ){
							while(last->next)
									last = last -> next;
					//attach
					last -> next = p;
					}else{
							head = p;
					}
			}
	}while(number != -1);
	Node *pp = head;
	for(	; pp ;pp = pp->next)
			printf("%d\t",pp->value);
	printf("\n");
	//add new value to linked-list
	for(pp = head;pp;pp = pp->next)
			if(pp->value == 5){
					Node *new = (Node *)malloc(sizeof(Node));
					new->next = pp->next;
					new->value = 10;
					pp->next = new;
			}
	for(pp = head; pp ;pp = pp->next)
			printf("%d\t",pp->value);
	printf("\n");
	for(pp = head; pp ;pp = pp->next)
			free(pp);
	return 0;
}

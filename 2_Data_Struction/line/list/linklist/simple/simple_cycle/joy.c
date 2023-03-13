#include <stdio.h>
#include <stdlib.h>

#define JOSE_NM  8

struct node_st
{
	int data;
	struct node_st *next;
};

struct node_st *jose_create()
{
	
	struct node_st *me;
	struct node_st *newnode,*cur;
	int i = 1;
	me = malloc(sizeof(*me));
	if(me == NULL)
		return NULL;
	me->data = i;
        me->next = me;
	i++;	

	cur = me;

	for(i=2 ;i<=JOSE_NM;i++)
	{
		newnode = malloc(sizeof(*newnode));
		if(newnode == NULL)
			return NULL;
		newnode->data = i;
	       newnode ->next = me;
       		cur->next = newnode;
	 	cur = newnode;		
	}
	return me;
}

void jose_show(struct node_st *me)
{
	struct node_st *list = me;
	for(list = me;list->next != me;list = list->next)
	{
	
		printf("%d\n",list->data);
	}
	printf("%d\n",list->data);
	


}



void jose_kill(struct node_st *me ,int n)
{


	struct node_st *cur = me,*node;
	int i = 1;
	while(cur != cur->next)
	{
		while(i < n)
		{
			node = cur;
			cur =cur->next;
			i++;			
	
		}	
		printf("%d\n",cur->data);
		node->next = cur->next;
		free(cur);
	
		cur = node->next;
		i =1;
	}
	printf("\n");

}

int main()
{
	struct  node_st *list;
	int n = 3;
	list = jose_create(JOSE_NM);
	if(list == NULL){
		exit(1);
	}
	
	jose_show(list);
	
	jose_kill(list,n);
	
	jose_show(list);





}

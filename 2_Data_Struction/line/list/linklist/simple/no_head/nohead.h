
#ifndef LIST__H
#define LIST__H




#define   NAMESIZE 32


struct score_st
{
	int id;
	char name[NAMESIZE];
	int math;
	int chinese;



};

struct node_st
{
	struct score_st data;
	struct node_st *next;


};

struct node_st *list_insert(struct node_st *,struct score_st *);

int  list_insert_double_pointer(struct node_st **,struct score_st *);

void list_show(struct node_st *);
int list_delete(struct node_st **);
struct score_st * list_find(struct node_st *,int);
void list_destroy(struct node_st *); 
#endif


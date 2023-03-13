#ifndef SQLIST_H__
#define SQLIST_H__

#define DATASIZE 1024
typedef int datatype;

typedef struct node_st
{
	datatype data[DATASIZE];
	int last;//计数器

}sqlist;

sqlist *sqlist_create();//增
void sqlist_create1(sqlist **);//增
int sqlist_insert(sqlist *,int i,datatype *);//改
int sqlist_delete(sqlist * ,int i);//删
int sqlist_find(sqlist *,datatype *);//查
int sqlist_isempty(sqlist *);//判空
int sqlist_setempty(sqlist *);//设置空
int sqlist_display(sqlist *);//遍历
int sqlist_destroy(sqlist *);//销毁
int sqlist_getnum(sqlist *);//查数
int sqlist_union(sqlist *,sqlist *);//合并

#endif


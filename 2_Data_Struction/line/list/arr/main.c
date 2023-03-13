#include"sqlist.h"
#include <stdio.h>
#include <stdlib.h>
#include <err.h>

int main()
{
	sqlist *list=NULL,*list1=NULL;
	datatype arr[]={12,23,34,45,56};
	datatype arr1[]={89,90,78,67,56,45};
//	list = sqlist_create();
	int i,err;
	sqlist_create1(&list);//二级指针传参
	//if(list ==NULL)
	//{
	//	&&和下面一样&&
	//}
	if(list  == NULL)
	{
		fprintf(stderr,"sqlist_create() failed!\n");
		exit(1);
	}
//	printf ("%d\n",__LINE__);
	list1 = sqlist_create();
	if(list1 == NULL)
	{
		fprintf(stderr,"sqlist_create() failed!\n");
                exit(1);

	}
	for(i=0;i<sizeof(arr)/sizeof(*arr);i++)
		if((err=sqlist_insert(list,0,&arr[i]))!=0)
		{
			if(err == -1)		
				fprintf(stderr,"The arr is full.\n");
			else if(err ==-2)
				fprintf(stderr,"the pos you want");

			else
				fprintf(stderr,"Error!\n");
			exit(1);
		
		
		}

	   for(i=0;i<sizeof(arr1)/sizeof(*arr1);i++)
                if((err=sqlist_insert(list1,0,&arr1[i]))!=0)
                {
                        if(err == -1)
                                fprintf(stderr,"The arr is full.\n");
                        else if(err ==-2)
                                fprintf(stderr,"the pos you want");

                        else
                                fprintf(stderr,"Error!\n");
                        exit(1);


                }

	sqlist_display(list);
	sqlist_display(list1);

#if 0	
	sqlist_delete(list,1);
	/*if error*/
	sqlist_display(list);

#endif
	sqlist_union(list,list1);
	sqlist_display(list);
        sqlist_display(list1);	
	
	sqlist_destroy(list);
	sqlist_destroy(list1);






	exit(0);
}


#include <stdio.h>
#include <malloc.h>

# define LIST_INIT_SIZE 100 // 存储空间的初始分配量 
# define LISTINCREMENT 10 // 分配增量 

typedef struct{
	int *elem; // 存储空间基址 
	int length;
	int listsize;
}Sqlist;

int main()
{
	Sqlist L;
	int L_count;
	int pos, elem;
	int flag;
	
	InitList(L);
	printf("一共多少元素");
	scanf("%d", &L_count);
	CreateList(L, L_count);
	PrintList(L);

	printf("请输入添加位置"); 
	scanf("%d", &pos);
	printf("请输入添加元素"); 
	scanf("%d", &elem);
	InsertList(L, pos, elem);
	PrintList(L);
	
	printf("请输入删除位置"); 
	scanf("%d", &pos);
	DeleteList(L, pos); 
	PrintList(L);
	
	printf("请输入查找元素");
	scanf("%d", &elem);
	flag = SortList(L, elem);
	if(flag == -1){
		printf("列表中没有该元素");
	}
	else{
		printf("列表中含有该元素，且位置为%d", flag);
	}
	return 0;
}

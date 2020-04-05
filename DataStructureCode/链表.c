#include <stdio.h>
#include <malloc.h>

typedef struct LNode{
	int data;
	struct LNode *next;
}LNode, *LinkList;

int main()
{
	LNode *L;
	int L_count;
	int pos, elem;
	int flag;
	
	printf("请输入元素个数");
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
		printf("链表中没有该元素");
	}
	else{
		printf("链表中含有该元素，且位置为%d", flag);
	}
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#include "lib.h"

// tạo struct để miêu đối tượng là node 
	// địa chỉ của node kế tiếp
	// giá trị của node 
typedef struct
{
	void* node_next;
	int value;
} node;

// tạo struct để miêu tả đối tượng la linked list
	// địa chỉ của node đầu tiên
	// số lượng node
typedef struct
{
	node* root_node;
	int size;
} linked_list;

// viết hàm khởi tạo linked_list
void linked_list_init(linked_list* ll)
{
	ll->root_node = 0;
	ll->size = 0;
}

// viết hàm: để thêm một node vào cuối linked_list
void linked_list_add_node(linked_list* ll, int val)
{
	node* n = malloc(sizeof(node)); // them 1 node
	n->value = val;
	n->node_next = NULL;
	if (ll->root_node == NULL)
	{
		ll->root_node = n;
	}
	else
	{
		node* temp = ll->root_node;
		for (int i = 0; i < ll->size-1; i++)
		{
			temp = (node*)(temp->node_next);
		}
		temp->node_next = n;
	}
	ll->size++;
}

// viết hàm để đọc giá trị của 1 node trong linked_list
int linked_list_get_val(linked_list* ll, int index)
{
	node* temp = ll->root_node;
	for (int i = 0; i < index; i++)
	{
		temp = (node*)(temp->node_next);
	}
	return temp->value;
}

//in gia tri linked_list
void linked_list_show_all_node(linked_list* ll)
{
	printf("Linked List: ");
	node* temp = ll->root_node;

	for (int i = 0; i < ll->size; i++)
	{
		printf(" %d", temp->value);

		temp = (node*)(temp->node_next);
	}
}

// xoa node vd tu node 1 noi toi node 3 la se xoa node 2, lay &node3 luu vao &node1
void linked_list_remove_node(linked_list* ll, int index)
{
	node* delete = NULL;

	if (index == 0)
	{
		delete = ll->root_node;
		ll->root_node = (node*)(delete->node_next);
	}

	else
	{
		node* temp = ll->root_node;
				
		for (int i = 0; i < index - 1; i++)
		{
			temp = (node*)(temp->node_next);
		}

		delete = (node*)(temp->node_next);           
		temp->node_next = delete->node_next;        
	}

	ll->size--;
}

// link dia chi toi 1 node
void linked_list_insert_node(linked_list* ll, int index, int val)
{
	node* new_node = (node*)malloc(sizeof(node));
	new_node->value = val;
	new_node->node_next = NULL;

	if (index == 0)  
	{
		new_node->node_next = ll->root_node;
		ll->root_node = new_node;
	}
	else
	{
		node* temp = ll->root_node;
		
		for (int i = 0; i < index - 1; i++)
		{
			temp = (node*)(temp->node_next);
		}

		new_node->node_next = temp->node_next;
		temp->node_next = new_node;
	}
	ll->size++;
}

void midterm_test()
{
	linked_list l;
	linked_list_init(&l);
	linked_list_add_node(&l, 10);
	linked_list_add_node(&l, 20);
	linked_list_add_node(&l, 30);
	linked_list_add_node(&l, 40);

	printf("Sau khi them 4 node: \n");
	linked_list_show_all_node(&l); 

	printf("\nChen 25 vao vi tri 2: \n");
	linked_list_insert_node(&l, 2, 25);
	linked_list_show_all_node(&l);

	printf("\nXoa node tai vi tri 0: \n");
	linked_list_remove_node(&l, 0);
	linked_list_show_all_node(&l);

	printf("\nnode 2: %d ", linked_list_get_val(&l, 2));

}
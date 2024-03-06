#include"my_queue.h"
#include"TV.h"
#include<stdio.h>

int main() {
	my_queue* head = NULL;

	TV* tv1 = (TV*)malloc(sizeof(TV));
	Init(tv1, "LG", 20, false);
	head = enqueue(head, tv1);
	
	TV* tv2 = (TV*)malloc(sizeof(TV));
	Init(tv2, "Sony", 35, true);
	head = enqueue(head, tv2);

	TV* tv3 = (TV*)malloc(sizeof(TV));
	Init(tv3, "Samsung", 40, true);
	head = enqueue(head, tv3);

	TV* tv4 = (TV*)malloc(sizeof(TV));
	Init(tv4, "Telek", 30, false);
	head = enqueue(head, tv4);

	TV* tv5 = (TV*)malloc(sizeof(TV));
	Init(tv5, "No model", 25, false);
	head = enqueue(head, tv5);

	my_queue* tmp = head;
	for (size_t i = 0; i < 3; i++)
	{
		PrintTV(tmp->tv);
		tmp = tmp->next;
	}

	clear(head);
	return 0;
}
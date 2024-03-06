#include "my_queue.h"

my_queue* enqueue(my_queue* head, TV* tv) {
	//������� ������
	if (head == NULL) {
		head = (my_queue*)malloc(sizeof(my_queue));
		head->tv = tv;
		head->next = NULL;
		head->prev = NULL;
		return head;
	}
	//����� ������
	my_queue* tmp = (my_queue*)malloc(sizeof(my_queue));
	tmp->tv = tv;
	tmp->next = head;
	tmp->prev = NULL;
	head->prev = tmp;
	return tmp;
}

my_queue* dequeue(my_queue* head)
{
	//������� ������
	if (head == NULL) {
		return NULL;
	}
	//� ������� ���� �������
	else if (head->next == NULL) {
		free(head->tv);
		free(head);
		return NULL;
	}
	//����� ������
	my_queue* tmp = head;
	while (head->next != NULL) {
		head = head->next;
	}
	head->prev->next = NULL;
	free(head->tv);
	free(head);
	return tmp;
}

void clear(my_queue* head) {
	while (head != NULL) {
	 	head = dequeue(head);
	}
}
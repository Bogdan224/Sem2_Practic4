#pragma once
#include<stdlib.h>
#include"TV.h"
struct my_queue
{
	TV* tv;
	my_queue* next;
	my_queue* prev;
};
//��������� � ������ ������� tv
my_queue* enqueue(my_queue* head, TV* tv);
//������� ��������� �������
my_queue* dequeue(my_queue* head);
//������� ���� ����
void clear(my_queue* head);


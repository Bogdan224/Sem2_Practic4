#pragma once
#include<stdlib.h>
#include"TV.h"
struct my_queue
{
	TV* tv;
	my_queue* next;
	my_queue* prev;
};
//Добавляет в начало очереди tv
my_queue* enqueue(my_queue* head, TV* tv);
//Удаляет последний элемент
my_queue* dequeue(my_queue* head);
//Удаляет весь лист
void clear(my_queue* head);


#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct TV
{
	char _model[20];
	int _displaySize;
	bool _haveWIFI;
};
//Инициализирует tv заданными значениями
void Init(TV* tv, const char model[20] = "No model", int displaySize = 20, bool haveWIFI = false);
//Печатает поля tv
void PrintTV(TV* tv);

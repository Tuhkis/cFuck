#ifndef __CFUCK_H__
#define __CFUCK_H__
#include <stdio.h>
#ifndef CFUCK_MEMORY_LEN
#define CFUCK_MEMORY_LEN 16
#endif // CFUCK_MEMORY_LEN
static unsigned int memory[CFUCK_MEMORY_LEN] = {0};
static unsigned char current = 0;
#define P ++memory[current];
#define M --memory[current];
#define R ++current;
#define L --current;
#define D printf("%d\n", memory[current]);
#define C printf("%c", memory[current]);
#define O while (memory[current] > 0) {
#define E }
#define I \
	printf("Enter Number: ");\
	scanf("%d", &memory[current]);
#endif // __CFUCK_H__

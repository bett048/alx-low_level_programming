#include "main.h"
#include<stdio.h>
/**
 * main - prints the number of arguments passed into main
 * @args: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}

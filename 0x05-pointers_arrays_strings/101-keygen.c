#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * main - program to generate valid password
 * Return: 0
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i = 0;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("keygen: %s\n", password);

	return (0);
}

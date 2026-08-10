#define clearBuffer() while (getchar() != '\n');
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int getZero();

int main()
{
	int x = getZero();

	printf("%d", x);

	getchar();
    return 0;
}


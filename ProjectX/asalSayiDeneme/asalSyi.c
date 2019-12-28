#include <stdio.h>
#include<stdlib.h>
int main()
{
	int low, high, i, flag, u;
	printf("write two numbers");
	scanf("%d%d", &low, &high);
	
	for (i = low + 1; i <= high; i++)
		for (u = 2; u < i; u++)
			if (u%i == 0)
				break;
	if (u == i)
		printf("%d", i);
	system("pause");
	return 0;
}



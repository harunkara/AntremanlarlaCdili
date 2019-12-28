#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sayi = 1;
		while (sayi <= 100)
		{
			if (sayi % 4 == 0 || sayi % 7 == 0)
				printf("%d\n", sayi);
			sayi++;
			}
	system("pause");
	return 0;

}
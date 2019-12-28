#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sayi, i, asal = 1;
	printf("sayiyi girin \n");
	scanf("%d", &sayi);
	if (sayi <= 1)
		asal = 0;
	else
		for (i = sayi - 1; i > 1 && asal == 1; i--)
			if (sayi%i == 0)
				asal = 0;
	if (asal)
		printf("sayi asaldir");
	else
		printf("sayi asal degildir");
	system("pause");
	return 0;
}
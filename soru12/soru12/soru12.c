#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sayi, birler, onlar, yuzler, binler;
	printf("lutfen 4 basamakli bir sayi girin\n");
	scanf("%d", &sayi);
	if(sayi>=1000 && sayi<10000)
	{
		binler = sayi / 1000;
		yuzler = (sayi / 100) % 10;
		onlar = (sayi / 10) % 10;
		birler = sayi % 10;
		printf("binler=%d\nyuzler=%d\nonlar=%d\nbirler=%d\n", binler, yuzler, onlar, birler);
	}
	else
	printf("sayi 4 basamakli degil");
	
	system("pause");
	return 0;
}
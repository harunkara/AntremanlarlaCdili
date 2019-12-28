#include<stdio.h>
#include<stdlib.h>
int main()
{
	int yas, cinsiyet;
	printf("lutfen yasinizi girin\n");
	scanf("%d", &yas);
	printf("lutfen cinsiyetinizi[erkek icin=1 kadin icin=2] girin\n");
	scanf("%d", &cinsiyet);
	if (cinsiyet == 1)
	{
		if (yas <= 20)
			printf("grup 1desiniz\n");
		else if (yas > 40)
			printf("grup 5tesiniz\n");
		else
			printf("grup 3tesiniz\n");
	}
	else if(cinsiyet == 2)
	{
		if (yas <= 20)
			printf("grup 2desiniz\n");
		else if (yas > 40)
			printf("grup 5tesiniz\n");
		else
			printf("grup 4tesiniz\n");
	}
	else
		printf("cinsiyeti yanlis girdiniz\n");

	system("pause");
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int boy, kilo, cinsiyet;;

	printf("lutfen ilk boyunuzu sonra kilonuzu giriniz\n\n");
	scanf("%d%d", &boy, &kilo);
	printf("lutfen cinsiyetinizi[kadin icin 2 erkek icin 1 basiniz] giriniz\n");
	scanf("%d", &cinsiyet);
	switch (cinsiyet)
	{
	case 1:
	{
		if (boy >= 180)
			printf("ideal kilonuz 85 olmalidir");
		else if (boy <= 170)
			printf("ideal kilo bilgisi sizin icin bulunmamaktadir");
		else
			printf("ideal kilonuz 75 olmalidir");
		break;
	}

	case 2:
	{
		if (boy >= 170)
			printf("ideal kilonuz 70 olmalidir");
		else if (boy <= 160)
			printf("ideal kilo bilgisi sizin icin bulunmamaktadir");
		else
			printf("ideal kilonuz 60 olmalidir");
		break;
	}
	default:
	{
		printf("muhtemelen birseyleri yanlis girdiniz");
		break;
	}
	}
	system("pause");
	return 0;
}
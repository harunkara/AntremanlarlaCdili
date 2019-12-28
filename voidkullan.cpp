#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct hasta
{
	char tcno[11];
	char isim[20];
	char soyisim[20];
	int yas;
};

void HastaKayit()
{
	FILE *hastaDosya = fopen("denemeeeeeee.txt", "a");
	struct hasta hasta;

			printf("TC No: ");
			scanf("%s", &hasta.tcno);
			printf("Hasta ismi: ");
			scanf("%s", &hasta.isim);
			printf("Hasta soyismi: ");
			scanf("%s", &hasta.soyisim);
			printf("Hasta Yas: ");
			scanf("%d", &hasta.yas);
			fprintf(hastaDosya, "%s %s %s %d \n", hasta.tcno,hasta.isim, hasta.soyisim, hasta.yas);


	fprintf(hastaDosya, "%s %s %s %d \n", hasta.tcno,hasta.isim, hasta.soyisim, hasta.yas);
	fclose(hastaDosya);	

}

int HastaKayit2()
{
	FILE *hastaDosya = fopen("denemem.txt", "a");
	struct hasta hasta;

printf("TC No: ");
			scanf("%s", &hasta.tcno);
			printf("Hasta ismi: ");
			scanf("%s", &hasta.isim);
			printf("Hasta soyismi: ");
			scanf("%s", &hasta.soyisim);
			printf("Hasta Yas: ");
			scanf("%d", &hasta.yas);
			fprintf(hastaDosya, "%s %s %s %d \n", hasta.tcno,hasta.isim, hasta.soyisim, hasta.yas);


	fprintf(hastaDosya, "%s %s %s %d \n", hasta.tcno,hasta.isim, hasta.soyisim, hasta.yas);
	fclose(hastaDosya);	
int s = hasta.yas;
	
	return s;
}





int main()
{
	
	int secim;
	
	printf("OZEL KARA HASTANESI SISTEMINE HOSGELDINIZ\n							MENU\nLUTFEN YAPMAK ISTEDIGINIZ ADIMI SECIN\n");
	printf("HASTA KAYDI ICIN 1'E BASINIZ\nRANDEVU ALMAK ICIN 2'YE BASINIZ\nHASTA KAYDI BILGISI GUNCELLEMEK ICIN 3'E BASINIZ\n");
	printf("SECIMIM:");
	scanf("%d", &secim);	
	
	switch(secim){
		case 1: 
		{
			int oldumu = HastaKayit2();
			printf("%d oldu", oldumu);
						break;
		}
	}
	
	
	
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<windows.h>

struct hasta {
	char tcno[11];
	char isim[20];
	char soyisim[20];
	char dgtarihi[10];
	char dgyeri[20];
	char kangrubu[10];
	int yas;
};

struct randevu {
	char tc[30];
	char rtarihi[20];
	char rsaat[12];
	char htipi[20];
	char doktor[20];

};

struct muayene {
	char metc[11];
	char ensonmt[30];
	char ensonmtarihi[10];
	char medendoktor[28];
	char yazilantedavi[50];
};

void hastaKaydi()
{
	FILE *hastaDosya = fopen("hasta.txt", "a");
	struct hasta hasta;

	printf("TC No: ");
	scanf("%s", &hasta.tcno);
	printf("Hasta ismi: ");
	scanf("%s", &hasta.isim);
	printf("Hasta soyismi: ");
	scanf("%s", &hasta.soyisim);
	printf("Dogum tarihi: ");
	scanf("%s", &hasta.dgtarihi);
	printf("Dogum yeri: ");
	scanf("%s", &hasta.dgyeri);
	printf("Kan grubu: ");
	scanf("%s", &hasta.kangrubu);
	printf("Hasta Yas: ");
	scanf("%d", &hasta.yas);
	fprintf(hastaDosya, "%s %s %s %s %s %s %d \n", hasta.tcno, hasta.isim, hasta.soyisim, hasta.dgtarihi, hasta.dgyeri, hasta.kangrubu, hasta.yas);
	fclose(hastaDosya);

}

void randevuKaydi()
{
	FILE *randevuDosya = fopen("randevu.txt", "a");
	struct randevu randevu;
	printf("Tc:");
	scanf("%s", &randevu.tc);
	printf("Randevu tarihi:");
	scanf("%s", &randevu.rtarihi);
	printf("Randevu saati:");
	scanf("%s", &randevu.rsaat);
	printf("Sikayetci oldugu hastalik tipi:");
	scanf("%s", &randevu.htipi);
	printf("Randevu alinmak istenen doktor ismi:");
	scanf("%s", &randevu.doktor);
	fprintf(randevuDosya, "%s %s %s %s %s \n", randevu.tc, randevu.rtarihi, randevu.rsaat, randevu.htipi, randevu.doktor);
	fclose(randevuDosya);
}



void muayeneKaydi() {
	FILE *muayeneDosya = fopen("muayene.txt", "a");
	struct muayene muayene;
	printf("Muayene edilenin tc'si: ");
	scanf("%s", &muayene.metc);
	printf("En son muayene tipi: ");
	scanf("%s", &muayene.ensonmt);
	printf("En son muayene tarihi: ");
	scanf("%s", &muayene.ensonmtarihi);
	printf("Muayene eden doktor ismi: ");
	scanf("%s", &muayene.medendoktor);
	printf("Yazilan tedavi:");
	scanf("%s", &muayene.yazilantedavi);

	fprintf(muayeneDosya, "%s %s %s %s %s \n", muayene.metc, muayene.ensonmt, muayene.ensonmtarihi, muayene.medendoktor, muayene.yazilantedavi);
	fclose(muayeneDosya);
}

void hastaListele() {
	FILE *hastaDosya;
	hastaDosya = fopen("hasta.txt", "r+");
	struct hasta hasta;
	while (fscanf(hastaDosya, "%s%s%s%s%s%s%d", &hasta.tcno, &hasta.isim, &hasta.soyisim, &hasta.dgtarihi, &hasta.dgyeri, &hasta.kangrubu, &hasta.yas) != EOF)
	{

		printf("Tc:%s\nIsim:%s\nSoy isim:%s\nDogum tarihi:%s\nDogum yeri:%s\nKan grubu:%s\nYas:%d\n", hasta.tcno, hasta.isim, hasta.soyisim, hasta.dgtarihi, hasta.dgyeri, hasta.kangrubu, hasta.yas);
	}
	fclose(hastaDosya);
}

void randevuListele() {
	FILE *randevuDosya;
	randevuDosya = fopen("randevu.txt", "r+");
	struct randevu randevu;
	while (fscanf(randevuDosya, "%s%s%s%s%s", &randevu.tc, &randevu.rtarihi, &randevu.rsaat, &randevu.htipi, &randevu.doktor) != EOF)
	{

		printf("Tc No:%s\nRandevu tarihi:%s\nRandevu saati:%s\nSikayetci oldugu hastalik tipi:%s\nRandevu alinmak istenen doktor ismi:%s\n", randevu.tc, randevu.rtarihi, randevu.rsaat, randevu.htipi, randevu.doktor);
	}
	fclose(randevuDosya);
}

void muayeneListele() {
	FILE *muayeneDosya;
	muayeneDosya = fopen("muayene.txt", "r+");
	struct muayene muayene;
	while (fscanf(muayeneDosya, "%s%s%s%s%s", &muayene.metc, &muayene.ensonmt, &muayene.ensonmtarihi, &muayene.medendoktor, &muayene.yazilantedavi) != EOF)
	{

		printf("Muayene edilenin TC'si:%s\nEn son muayene tipi:%s\nEn son muayene tarihi:%s\nMuayene eden doktor ismi:%s\nYazilan tedavi:%s\n", muayene.metc, muayene.ensonmt, muayene.ensonmtarihi, muayene.medendoktor, muayene.yazilantedavi);
	}
	fclose(muayeneDosya);
}

void khastaListele() {

	FILE *hastaDosya = fopen("hasta.txt", "r+");
	struct hasta hasta;
	char aranan[11];
	printf("Aranan hastanin TC'sini girin:");
	scanf("%s", &aranan);
	while (fscanf(hastaDosya, "%s%s%s%s%s%s%d", &hasta.tcno, &hasta.isim, &hasta.soyisim, &hasta.dgtarihi, &hasta.dgyeri, &hasta.kangrubu, &hasta.yas) != EOF) {
		if (strcmp(hasta.tcno, aranan) == 0)
			printf("Tc:%s\nIsim:%s\nSoy isim:%s\nDogum tarihi:%s\nDogum yeri:%s\nKan grubu:%s\nYas:%d\n", hasta.tcno, hasta.isim, hasta.soyisim, hasta.dgtarihi, hasta.dgyeri, hasta.kangrubu, hasta.yas);
	}

	fclose(hastaDosya);

}

void krandevuListele() {

	FILE *randevuDosya = fopen("randevu.txt", "r+");
	struct randevu randevu;
	char aranan[11];
	printf("Randevusu olan hastanin TC'sini girin:");
	scanf("%s", &aranan);
	while (fscanf(randevuDosya, "%s%s%s%s%s", &randevu.tc, &randevu.rtarihi, &randevu.rsaat, &randevu.htipi, &randevu.doktor) != EOF) {
		if (strcmp(randevu.tc, aranan) == 0)
			printf("Tc No:%s\nRandevu tarihi:%s\nRandevu saati:%s\nSikayetci oldugu hastalik tipi:%s\nRandevu alinmak istenen doktor ismi:%s\n", randevu.tc, randevu.rtarihi, randevu.rsaat, randevu.htipi, randevu.doktor);
	}
	fclose(randevuDosya);

}


void kmuayeneListele() {

	FILE *muayeneDosya = fopen("muayene.txt", "r+");
	struct muayene muayene;
	char aranan[11];
	printf("Muayene edilmis aranan kisinin TC'sini girin:");
	scanf("%s", &aranan);
	while (fscanf(muayeneDosya, "%s%s%s%s%s", &muayene.metc, &muayene.ensonmt, &muayene.ensonmtarihi, &muayene.medendoktor, &muayene.yazilantedavi) != EOF) {
		if (strcmp(muayene.metc, aranan) == 0)
			printf("Muayene edilenin TC'si:%s\nEn son muayene tipi:%s\nEn son muayene tarihi:%s\nMuayene eden doktor ismi:%s\nYazilan tedavi:%s\n", muayene.metc, muayene.ensonmt, muayene.ensonmtarihi, muayene.medendoktor, muayene.yazilantedavi);
	}
	fclose(muayeneDosya);
}


void hastaSil() {
	FILE *hastaDosya = fopen("hasta.txt", "r+");
	FILE *hastaDosya1 = fopen("tmp.txt", "w");
	struct hasta hasta;
	char aranan[11];
	printf("Silinmesini istediginiz hastanin TC'sini girin:");
	scanf("%s", &aranan);
	while (fscanf(hastaDosya, "%s%s%s%s%s%s%d", &hasta.tcno, &hasta.isim, &hasta.soyisim, &hasta.dgtarihi, &hasta.dgyeri, &hasta.kangrubu, &hasta.yas) != EOF) {
		if (strcmp(hasta.tcno, aranan) != 0)
			fprintf(hastaDosya1, "%s %s %s %s %s %s %d \n", hasta.tcno, hasta.isim, hasta.soyisim, hasta.dgtarihi, hasta.dgyeri, hasta.kangrubu, hasta.yas);

	}

	fclose(hastaDosya);
	fclose(hastaDosya1);
	remove("hasta.txt");
	rename("tmp.txt", "hasta.txt");

}

void randevuSil() {
	FILE *randevuDosya = fopen("randevu.txt", "r+");
	FILE *randevuDosya1 = fopen("tmp.txt", "w");
	struct randevu randevu;
	char aranan[11];
	printf("Silinmesini istediginiz randevuya ait kisinin TC'sini girin:");
	scanf("%s", &aranan);
	while (fscanf(randevuDosya, "%s%s%s%s%s", &randevu.tc, &randevu.rtarihi, &randevu.rsaat, &randevu.htipi, &randevu.doktor) != EOF) {
		if (strcmp(randevu.tc, aranan) != 0)

			fprintf(randevuDosya1, "%s %s %s %s %s \n", randevu.tc, randevu.rtarihi, randevu.rsaat, randevu.htipi, randevu.doktor);
	}

	fclose(randevuDosya);
	fclose(randevuDosya1);
	remove("randevu.txt");
	rename("tmp.txt", "randevu.txt");

}

void muayeneSil() {
	FILE *muayeneDosya = fopen("muayene.txt", "r+");
	FILE *muayeneDosya1 = fopen("tmp.txt", "w");
	struct muayene muayene;
	char aranan[11];
	printf("Silinmesini istediginiz muayeneye ait kisinin TC bilgisini girin:");
	scanf("%s", &aranan);
	while (fscanf(muayeneDosya, "%s%s%s%s%s", &muayene.metc, &muayene.ensonmt, &muayene.ensonmtarihi, &muayene.medendoktor, &muayene.yazilantedavi) != EOF) {
		if (strcmp(muayene.metc, aranan) != 0)
			fprintf(muayeneDosya1, "%s %s %s %s %s \n", muayene.metc, muayene.ensonmt, muayene.ensonmtarihi, muayene.medendoktor, muayene.yazilantedavi);

	}

	fclose(muayeneDosya);
	fclose(muayeneDosya1);
	remove("muayene.txt");
	rename("tmp.txt", "muayene.txt");

}
int a;
int menu() {
	printf("OZEL KARA HASTANESI SISTEMINE HOSGELDINIZ\n							MENU\nLUTFEN YAPMAK ISTEDIGINIZ ADIMI SECIN\n");
	printf("HASTA KAYDI ICIN 1'E BASINIZ\nRANDEVU ALMAK ICIN 2'YE BASINIZ\nMUAYENE BILGISI GIRMEK ICIN 3'E BASINIZ\n");
	printf("KAYITLI HASTALARI GORUNTULEMEK LISTELEMEK ICIN 4'E BASINIZ\nRANDEVU KAYITLARINI LISTELEMEK ICIN 5'E BASINIZ\n");
	printf("MUAYENE KAYITLARINI LISTELEMEK ICIN 6'YA BASINIZ\n");
	printf("GIRILEN TC'YE GORE HASTA BILGILERINI LISTELEMEK ICIN 7'YE BASINIZ\nGIRILEN TC'YE GORE RANDEVU BILGILERINI LISTELEMEK ICIN 8'E BASINIZ\n");
	printf("GIRILEN TC'YE GORE MUAYENE BILGILERINI LISTELEMEK ICIN 9'A BASINIZ\n");
	printf("HASTA KAYDINI YANLIS YAPMISSANIZ VE SILMEK ISTIYORSANIZ 10'A BASINIZ\n");
	printf("RANDEVU KAYDINI YANLIS YAPMISSANIZ VE SILMEK ISTIYORSANIZ 11'E BASINIZ\n");
	printf("MUAYENE KAYDINI YANLIS YAPMISSANIZ VE SILMEK ISTIYORSANIZ 12'YE BASINIZ\n");
	printf("SECIMIM:");
	scanf("%d", &a);
	return a;
}
int main() {
	
		menu();
		switch (a) {
		case 1: {
			hastaKaydi();
			system("cls");
			break;
		}
		case 2: {
			randevuKaydi();
			break;
		}
		case 3: {
			muayeneKaydi();
			break;
		}
		case 4: {
			hastaListele();
			break;
		}
		case 5: {
			randevuListele();
			break;
		}
		case 6: {
			muayeneListele();
			break;
		}
		case 7: {
			khastaListele();
			break;
		}
		case 8: {
			krandevuListele();
			break;
		}
		case 9: {
			kmuayeneListele();
			break;
		}
		case 10: {
			hastaSil();
			break;
		}
		case 11: {
			randevuSil();
			break;
		}
		case 12: {
			muayeneSil();
			break;
		}
		
	}
	system("pause");
	return 0;
}
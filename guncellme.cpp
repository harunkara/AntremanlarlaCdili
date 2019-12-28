#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct hasta{
	char tcno[11];
	char isim[20];
	char soyisim[20];
	int yas;
};


int main()
{
	char aranan[100];
	scanf("%s", &aranan);
	
	FILE *fp = fopen("hasta.txt", "r");
	
	struct hasta hasta;
	
	while(!feof(fp)){
		
		fscanf(fp, "%s %s %s %d", &hasta.tcno, &hasta.isim, &hasta.soyisim, &hasta.yas);
		
     if(strcmp(hasta.tcno,aranan)== 0)
     {	
	 	printf("TC: %s \nIsim: %s \nSoyisim: %s \nYas: %d \n\n",hasta.tcno, hasta.isim, hasta.soyisim,hasta.yas);
	 }
	
		
	}
	fclose(fp);
	


	system("pause");
	return 0;
}

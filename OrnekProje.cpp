#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <ctype.h>



struct Hasta{
	char tcno[11];
	char isim[10];
	char soyisim[20];
};


int main(){
	
struct Hasta hasta;
char tcNo[15];

	
	FILE *hastaDosya = fopen("hastas.txt", "r");
	FILE *hastaYedek = fopen("temp.txt","a");
	
	
    	
    	printf("Aranan hastanin TC'sini girin:");
    	scanf("%s",&tcNo);
	    while(fscanf(hastaDosya, "%s%s%s",&hasta.tcno,&hasta.isim,&hasta.soyisim)!=EOF)
		{
			if(strcmp(hasta.tcno,tcNo) != 0)
			{
			
	   	//	printf("\nTc:%s\nIsim:%s\ isim:%s\n\n",hasta.tcno,hasta.isim,hasta.soyisim);
	   		fprintf(hastaYedek, "%s %s %s \n",hasta.tcno, hasta.isim, hasta.soyisim);	
			}
		
		}
		
    fclose(hastaDosya);
    fclose(hastaYedek);
    remove("hastas.txt");
    rename("temp.txt","hastas.txt");

	
	/*
	while(!feof(hastaDosya))
	{
		hastaobj = (Hasta*)malloc(sizeof(Hasta));
		fread(hastaobj, sizeof(Hasta)-2*sizeof(hastaobj),1, hastaDosya);
		
		if(hastaobj != NULL)
		{
			if(strcmp(hastaobj->tc, tcNo))
			{
				fwrite(hastaobj, sizeof(Hasta) - 2*sizeof(hastaobj), 1, hastaYedek);    
			}
			 else if(strcmp(hastaobj->tc, tcNo))
                {
                    printf("Kayit silindi!\n");
                }
		}
	}
	fclose(hastaDosya);
	fclose(hastaYedek);
	remove("hastas.txt");
	rename("temp.txt","hastas.txt");
	*/
	system("pause");
	return 0;
}

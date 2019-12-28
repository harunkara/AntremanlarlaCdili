#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void kb(){
	
	int i=0;
	char sa[100];
	fflush(stdin);
	printf("Bir cumle giriniz: ");
	gets(sa);
	
    for (i = 0; sa[i]!='\0'; i++) {
		if(sa[i] >= 'a' && sa[i] <= 'z'){
			sa[i]-=32;
		}	
	}
puts(sa);	
}

void bk() {
    fflush(stdin);
    char harf[100];
    int i = 0;
    
    printf("Bir cumle giriniz: ");
    gets(harf);
    
    int fark = 'A' - 'a';
    
   for (i = 0; harf[i]!='\0'; i++) {
        
        if (harf[i] >= 'A' && harf[i] <= 'Z') {
            harf[i] -= fark;
        } 
  
    }  
     puts(harf);
}
int main(){
	int j;
	printf("1:Buyuk harfli cumlelerdeki harfleri kucuge cevirme\n2:Kucuk harfli cumlelerdeki harfleri buyuge cevirme\nSecimim:");
	scanf("%d",&j);
	if(j==1){
		bk();
	}
	
	else if(j==2){	
	kb();
	}
	
	
}

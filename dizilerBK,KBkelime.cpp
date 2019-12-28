#include<stdio.h>
#include<stdlib.h>
void kb(){
	int i=0;
	char sa[34];
	printf("Bir kelime giriniz: ");
	scanf("%s",&sa);
	int fark= 'a' - 'A';
	while(sa[i] != NULL){
		if(sa[i] >= 'a' && sa[i] <= 'z'){
			sa[i]-=fark;
		}
		printf("%c",sa[i]);
		i++;
		
	}
	
}

void bk() {
    
    char harf[100];
    int i = 0;
    
    printf("Bir kelime giriniz: ");
    scanf("%s",&harf);
    
    int fark = 'A' - 'a';
    
    while (harf[i] != NULL) {
        
        if (harf[i] >= 'A' && harf[i] <= 'Z') {
            harf[i] -= fark;
        } 
        printf("%c", harf[i]);
        i++;
    }  
}
int main(){
	int j;
	printf("1:Buyuk harfleri kucuge cevirme\n2:Kucuk harfleri buyuge cevirme\nSecimim:");
	scanf("%d",&j);
	if(j==1)
	bk();
	else if(j==2)
	kb();
	
}



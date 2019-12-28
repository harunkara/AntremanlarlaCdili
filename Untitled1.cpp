#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int i,h;
//	srand(900);
for(i=1;i<6;i++){
h= 1 + rand() %89;
printf("%d sayi:%d\n",i,h);
}
}

#include<stdio.h>
#include<stdlib.h>

void dizi();
int main(){
	dizi();
}
void dizi(){
	printf("dizinin boyutunu giriniz:\n");
	int i,f;
	int carpim=1;
	scanf("%d",&f);
	int a[f];
	for(i=0;i<f;i++)
 	scanf("%d",&a[i]);
	for(i=0;i<f;i++){
	
	carpim*=a[i];
	
}
printf("%d",carpim);
}

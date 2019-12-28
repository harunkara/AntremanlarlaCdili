/*#include <stdio.h>

int main()
{
    int i, n;
    float arr[100];

    printf("Enter total number of elements(1 to 100): ");
    scanf("%d", &n);
    printf("\n");

    // Stores number entered by the user
    for(i = 0; i < n; ++i)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%f", &arr[i]);
    }
for()
    return 0;
}
*/
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int d[4],i,f;
	float ortalama,toplam=0;
	for(i=0;i<5;i++)
	{
		printf("Deger %d giriniz:",i);
		scanf("%d",&d[i]);
	}
		
	for(i=0;i<5;i++)
	{
		toplam=toplam+d[i];
	}
	ortalama=toplam/5;
	printf("Ortalama=%.2f\n",ortalama);
	f=ortalama;
	printf("%d\n",f);
	for(i=0;i<5;i++)
	{
		if(d[i]<f)
			{
				
				printf("Ortalama hesabi sonrasi eleman %d=%d\n",i,d[i]=d[i]+f);
		}
		else if(d[i]>f)
		{
			
				printf("Ortalama hesabi sonrasi eleman %d=%d\n",i,d[i]=d[i]-f);
		}
       else 
       printf("ortalama hesabi sonrasi eleman %d=%d\n",i,d[i]);
	}
		system("pause");
		return 0;

}

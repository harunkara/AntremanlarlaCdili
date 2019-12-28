#include<stdio.h>
#include<stdlib.h>
int main()
{
    int low, high, i, flag,j=0,k;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);
    k=low;
 
    

    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0){
        	printf("%d ", low);
        	j++;
		}
          

        ++low;
    }
   printf("\n%d ile %d sayilarinin arasindaki asal sayilarin sayisi: %d ", k,high,j);

    return 0;
}

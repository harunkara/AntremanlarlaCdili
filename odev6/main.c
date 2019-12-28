#include <stdio.h>
int main()
{
  float vize,Final,not;
    printf("vize notunu yaz");
    scanf("%f",&vize);
    printf("final notunu yaz");
    scanf("%f",&Final);
    not=(vize*60/100)+(Final*40/100);
    printf("\n\ndonem notunuz=%f",not);
    return 0;
}

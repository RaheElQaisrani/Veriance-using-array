# Veriance-using-array
#include <stdio.h>
int main()
{
int num[7]={10,11,12,13,14,15,16};
int ans[7];
int add,all=0;
float avg;
for (add=0;add<8;add++)
{
all+=num[add];
}
avg=all/7;
printf("The sum is %d",all);
printf("\nThe avg is %f",avg);
for (add=0;add<7;add++)
{

ans[7]=(num[add]-avg)*(num[add]-avg);
printf("\n%d",ans[7]);
}
return 0;
}

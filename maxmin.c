#include<stdio.h>
void main()
{
int a[10],i,n,max,min;
printf("enter the size");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("\n the maximum number in the array is %d\n",max);
printf("the minimum number in the array is %d",min);
}


OUTPUT

enter the size:5
enter the elements
12345
12
12
12
12

 the maximum number in the array is 12345
the minimum number in the array is 12


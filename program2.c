#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main()
{
double start,end;
int n,a[20],i,j,pos,swap;void delay(){
int i;
for(i=0;i<23456789;i++);
}
printf("enter n\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
start=clock();
for(i=0;i<n-1;i++)void delay(){
int i;
for(i=0;i<23456789;i++);
}
pos=i;
for(j=i+1;j<n;j++)
{
if(a[pos]>a[j])
pos=j;
}
if(pos!= i)
{
swap=a[i];
a[i]=a[pos];
a[pos]=swap;
}
Sleep(1000);
end=clock();
printf("Sorted Array:\n");
for(i = 0; i < n; i++)
printf("%d\n", a[i]);
printf("time taken::%f",(((double)(end-start))/CLK_TCK));
return 0;
}

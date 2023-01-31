//=====BUBBLE SORT======

#include <stdio.h>
#include <conio.h>
void main()
{
int a[10];
int n,i,j,temp;

//=====Create An ARRAY========
printf("How Many Elements do you want to insert in an Array");
scanf("%d",&n);
printf("Enter Array Element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Display Array Element");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}

//=======Bubble Sort Logic========
for(i=0;i<n-1;i++)
{
  for(j=0;j<n-1;j++)
{
    if(a[j]>a[j+1])
    {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
    }
  }

}
}


//=====SELECTION SORT=======
#include <stdio.h>
#include <conio.h>
void SSort (int, int);
int a[20];
int main()
{
  int n;
  printf(" Enter Element");
  scanf("%d" , &n);
  printf("\n Enter Array  Element");
  for(int i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
//=====Function Call=======
SSort(0, n-1);

//=======================
printf("\n Display Sorted Array");
for(int i=0; i<n; i++)
{
   printf("\n %d", a[i]);
}

getch();
}
//=====Selection Sort Logic======
void SSort(low,high)
{
    int i,j,min,temp;
   for(i=low; i<=high; i++)
   {
     min=i;
     for(j=i+1; j<=high; j++)
     {
       if(a[j]<a[min])
        {
          min=j;
        }
     }
       temp=a[i];
       a[i]=a[min];
       a[min]=temp;
   }
}

//======BINARY SEARCH=======
//====Array Element Should be in shorted order====

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50], i, loc=0, beg, end, mid, item, n, flag=0;
    printf("How Many Elements");
    scanf("%d",&n);

//=====Store Element in Array=====
  printf("Enter the element of array");
  for(i=0;i<=n-1;i++)
  {
    scanf("%d",&a[i]);
  }

//======Search Item========
    printf("Enter element to search");
    scanf("%d",&item);

//=========================
   beg=0;
   end=n-1;

//=====Binary Search Logic======
  while((beg<=end)&&(item!=a[mid]))
  {
   mid=((beg+end)/2);
   if(item==a[mid])
   {
    printf("\n Search is success");
       loc=mid;
    printf("\n Position of item %d \n",loc+1);
       flag=flag+1;
   }
    else if(item< a[mid])
    {
      end=mid-1;
    }
      else
      {
       beg= mid+1;
      }
  }

//=============================
    if(flag==0)
    {
      printf("\n Item is not found");
    }
    getch();
}


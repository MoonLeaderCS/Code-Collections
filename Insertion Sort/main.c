//======INSERTION SORT=======

#include<stdio.h>
#include<conio.h>
void ISort( int);
int a[20];
int main()
{
 int n,i;

 printf("\n How many Elements do you want to Enter in an Array");
 scanf("%d",&n);
 printf("\n Enter Array Element");
 for(i=0; i<n; i++)
 {
  scanf("%d",&a[i]);
 }
 //======Function Call=======
 ISort(n);

 //==========================
 printf("\n Display Sorted Array");
 for(i=0; i<n;i++)
 {
   printf("\n %d", a[i]);
 }
  return (0);   //return 0;    //getch();
}
//======Insertion Sort Logic=======
void ISort(int n)
 {


 /* storing current element whose left side is checked for its
	     correct position */


    int i, j, temp;
    for (i=1; i<=n-1;i++)
    {
        temp=a[i];
        j=i;

       /* check whether the adjacent element in left side is greater or
	    less than the current element */

     while(j>0 && temp <a[j-1])
     {
	// moving the left side element to one position forward.

       a[j]=a[j-1];
       j=j-1;
     }
      // moving current element to its  correct position.

     a[j]=temp;
    }
 }

#include <stdio.h>
int main()
{
//11.	Implement a C program to delete an element
        //  from an array at a specified index.
   int N;
   scanf("%d",&N);
   int a[100];
   for(int i=0;i<N;i++)
       scanf("%d",&a[i]);
    // 10 20 30 40 50
   int pos,ele,informer=N;
   printf("Enter the positiion to insert:");
   scanf("%d",&pos);
   if(pos>informer)
    printf("Not Available");
   else{
    for(int i=pos-1;i<informer;i++)
        a[i] = a[i+1];
    informer--;
   }
   printf("Elements are:");
   for(int i=0;i<informer;i++)
    printf("%d ",a[i]);
    return 0;
}

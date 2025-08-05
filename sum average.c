#include <stdio.h>
int main()
{
   //2.	Implement a C program to find the sum and average
//of elements in a one-dimensional array.
   int N,sum=0;
   float average;
   scanf("%d",&N);
   int a[N];
   for(int i=0;i<N;i++)
   {
       scanf("%d",&a[i]);   // 10 20
       sum=sum+a[i]; // 30
   }
   printf("Sum is:%d",sum);
   average=(float)sum/N;
   printf("\n Average:%f",average);
    return 0;
}

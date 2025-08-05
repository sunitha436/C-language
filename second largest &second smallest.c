#include <stdio.h>
int main()
{
//13.	Develop a C program to find the second largest and
        //second smallest elements in an array
   int N;
   scanf("%d",&N);
   int a[N];
   for(int i=0;i<N;i++)
       scanf("%d",&a[i]);  // 10 5 15 20 17
   for(int i=0;i<N;i++)
   {
       for(int j=i+1;j<N;j++)
       {
           if(a[j]<a[i]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
           }
       }
   }
   printf("Second largest :%d",a[N-2]);
   printf("\nSecond Smallest :%d",a[1]);

    return 0;
}

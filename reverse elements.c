#include <stdio.h>
int main()
{
   int N;
   scanf("%d",&N);
   int a[N];
   for(int i=0;i<N;i++)
       scanf("%d",&a[i]);
   int i=0,j=N-1;
   for(i=0;i<j;i++){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    j--;
   }
   printf("Elements are:");
   for(int i=0;i<N;i++)
    printf("%d ",a[i]);
    return 0;
}

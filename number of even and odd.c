#include <stdio.h>
int main()
{
//12.	Write a program to count the
   // number of even and odd elements in an array.
   int N;
   scanf("%d",&N);
   int a[N];
   for(int i=0;i<N;i++)
       scanf("%d",&a[i]);
   int odd=0;
   for(int i=0;i<N;i++){
       if(a[i]%2!=0)
        odd++;
   }
   printf("Odd count is:%d",odd);
   printf("\nEven count is:%d",N-odd);

    return 0;
}

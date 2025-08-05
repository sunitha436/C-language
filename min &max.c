#include <stdio.h>
int main()
{
    int rows,cols;
    scanf("%d %d",&rows,&cols);
    int arr[rows][cols];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            scanf("%d",&arr[i][j]);
    }
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]>max)
                max=arr[i][j];
            else if(arr[i][j]<min)
                min=arr[i][j];
        }
    }
    printf("Max : %d",max);
    printf("Min : %d",min);
    return 0;
}

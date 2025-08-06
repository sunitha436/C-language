#include<stdio.h>
struct product{
char name[20];
int stock;
int amt;
}product[3];
int main(){
    int n;
 for(int i=0;i<3;i++){
    scanf("%s",product[i].name);
    scanf("%d",&product[i].stock);
    scanf("%d",&product[i].amt);}
    for(int i=0;i<3;i++){
        printf("%s %d %d",product[i].name,product[i].stock,product[i].amt);
        printf("\n");
}
}

#include<stdio.h>
struct customer{
char name[20];
char address[20];
long long int phoneno;
int balance;
}cust[2];
int main()
{
for(int i=0;i<2;i++){
scanf("%s",cust[i].name);
scanf("%s",cust[i].address);
scanf("%llu",&cust[i].phoneno);
scanf("%d",&cust[i].balance);
}
for(int i=0;i<2;i++){
printf("%s %s %llu %d",cust[i].name,cust[i].address,cust[i].phoneno,cust[i].balance);
printf("\n");
return 0;
}
}

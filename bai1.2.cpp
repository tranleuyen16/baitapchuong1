#include<stdio.h>

typedef struct HonSo{
    int Tu;
    int Mau;
    int Nguyen;
}HONSO ;
void nhapHonSo(HONSO*hs)
{ 
    printf("nhap tu so:");
    scanf("%d",& hs-> Tu);
    printf("nhap mau so:");
    scanf("%d",& hs-> Mau);
    printf("nhap so nguyen");
    scanf("%d",&hs->Nguyen);
}
void xuatHonSo(HONSO hs)
{
    printf("%d(%d/%d)",hs.Nguyen,hs.Tu,hs.Mau);
}
int main()
{
     HONSO hs;
    nhapHonSo(&hs);
    xuatHonSo(hs);
    return 0;
    
}


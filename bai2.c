#include <stdio.h>
int main (){
    int a,b,x;
    printf("moi nhap a:");
    scanf("%f",&a);
    printf("moi nhap b:");
    scanf("%f",&b);
    if(a ==0) {
    if (b == 0){
        printf(" phuong trinh  vo so nghiem. \n");
        }else{
        printf(" phuong trinh vo so nghiem.\n");
        }
    } else  {
        x = -b/a;
        printf (" phuong trinh co nghiem x=%f,x");
    }

    return 0;
}

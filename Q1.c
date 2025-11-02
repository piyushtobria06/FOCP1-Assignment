#include<stdio.h>
int main(){
    int n,c,r,arm=0;
    printf("enter num:");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }if(c==arm){
        printf("armstrong");
    }else{
        printf("Not armstrong");
    }return 0;
}
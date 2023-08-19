#include<stdio.h>
int main(){
    int m,n;
    while(scanf("%d%d",&m,&n)==2){
   	 printf("%d\n",(n-1)+(m-1)*n);
    }
    return 0;
}

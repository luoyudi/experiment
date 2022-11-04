# include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    printf("%d",(int)sqrt(pow(a-c,2)+pow(b-d,2)));
    return 0;
}
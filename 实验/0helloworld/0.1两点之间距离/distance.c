#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    printf("输入一个点的坐标");
    scanf("%d %d", &a, &b);
    printf("再输入一个点的坐标");
    scanf("%d %d", &c, &d);
    int e = pow(a - c, 2) + pow(b - d, 2);
    printf("%d", (int)sqrt(e));
    return 0;
}
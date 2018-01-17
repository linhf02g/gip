//dien tich tam giac
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int x1,x2,x3,y1,y2,y3;
    int y1y2,y2y3,y1y3,x1x2,x2x3,x1x3;
    int kyp1p2,kyp2p3,kyp1p3,kxp1p2,kxp2p3,kxp1p3;
    int a2,b2,c2;
    int k,s;
    printf("P1(x1,y1): ");
    scanf("%d %d",&x1,&y1);
    printf("P2(x2,y2): ");
    scanf("%d %d",&x2,&y2);
    printf("P3(x3,y3): ");
    scanf("%d %d",&x3,&y3);
    y1y2 = y1-y2;
    y2y3 = y2-y3;
    y1y3 = y1-y3;
    x1x2 = x1 - x2;
    x2x3 = x2 - x3;
    x1x3 = x1 - x3;
    a2 = ((x1x2*x1x2) + (y1y2*y1y2));
    b2 = ((x1x3*x1x3) + (y1y3*y1y3));
    c2 = ((x2x3*x2x3) + (y2y3*y2y3));
    k = ((a2 + b2 + c2)*(a2+b2+c2)) - 2*((a2*a2 + b2*b2 + c2*c2));
    s = sqrt(k)/4;
    printf("Flaecheninhalt Dreieck: %d",s);
    return 0;
}
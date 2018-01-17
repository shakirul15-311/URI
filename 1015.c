#include<stdio.h>
int main(void)
{
    double x1,y1,x2,y2,p,q,z,r;
    while(scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2)==4){
    p=(x2-x1);
    q=(y2-y1);
    z=sqrt((p*p)+(q*q));
    printf("%.4lf\n",z);

    }
    return 0;

}

#include<stdio.h>
#include<math.h>

int main(){
    double x1,x2,x3,y1,y2,y3, a,b,c, p, area;

    scanf("%lf %lf %lf %lf %lf %lf", &x1,&y1,&x2, &y2, &x3, &y3);

    a =  sqrt(((x3-x2) * (x3-x2)) + ((y3-y2) * (y3-y2)));
    b =  sqrt(((x3-x1) * (x3-x1)) + ((y3-y1) * (y3-y1)));
    c =  sqrt(((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1)));

    p = (a+b+c)/2;

    area = sqrt(p*(p-a)*(p-b)*(p-c));

    printf("Triangle area: %lf", area);
}

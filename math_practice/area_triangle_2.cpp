#include<stdio.h>
#include<math.h>

int main(){
    double x1,x2,x3,y1,y2,y3, area;

    scanf("%lf %lf %lf %lf %lf %lf", &x1,&y1,&x2, &y2, &x3, &y3);

    area = fabs(((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)))/2);

    printf("Triangle area: %lf", area);
}

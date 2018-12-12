#include<stdio.h>
#include<math.h>

int main(){
    double distance, x1, y1, x2, y2, x, y;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    x = x2-x1;
    y = y2-y1;

    distance = sqrt((x*x)+(y*y));

    printf("%lf", distance);
}

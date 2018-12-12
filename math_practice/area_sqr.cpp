#include<stdio.h>
#include<math.h>

int main(){
    double pi, area, radius;

    scanf("%lf", &radius);

    pi = acos(-1.);
    area = pi*radius*radius;

    printf("Area: %lf", area);
}

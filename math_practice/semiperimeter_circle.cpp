#include<stdio.h>
#include<math.h>

int main(){
    double pi, s, radius;

    scanf("%lf", &radius);

    pi = acos(-1.);
    s = 2*pi*radius;

    printf("Semiperimeter: %lf", s);
}

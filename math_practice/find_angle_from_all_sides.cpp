#include<stdio.h>
#include<math.h>

int main(){
    double a,b,c, A, B, C;

    scanf("%lf %lf %lf", &a, &b, &c);

    A = acos(((b*b) + (c*c) - (a*a))/(2*b*c));
    B = acos(((c*c) + (a*a) - (b*b))/(2*a*c));
    C = acos(((a*a) + (b*b) - (c*c))/(2*b*a));

    printf("A = %lf\nB = %lf\nC = %lf", A, B, C);
}

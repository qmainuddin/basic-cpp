#include<stdio.h>
#include<math.h>

int main(){
    double input;

    scanf("%lf", &input);

    input = sqrt(input);

    printf("Nearest Number: %lf", floor(input));
    printf("\nNearest Number: %lf", ceil(input));
}



#include <stdio.h>

int main(void) {
    double input;
    double result;

    scanf("%lf", &input);
    result = input * 1.08;
    printf("%.2f", result);

    return 0;
}

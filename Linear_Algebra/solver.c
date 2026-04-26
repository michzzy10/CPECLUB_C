#include <stdio.h>

int main() {
    double a, b, c, d, e, f;
    double D, x, y;

    printf("Enter values for a, b, c, d, e, f:\n");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

    printf("You entered: %.2lf %.2lf %.2lf %.2lf %.2lf %.2lf\n", a,b,c,d,e,f);
    D = (a * d) - (b * c);

    if (D == 0) {
        printf("No unique solution exists.\n");
    } else {
        x = (e * d - b * f) / D;
        y = (a * f - e * c) / D;

        printf("x = %.2lf\n", x);
        printf("y = %.2lf\n", y);
    }

    return 0;
}

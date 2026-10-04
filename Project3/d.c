#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    double w, r;
    double L, S, C;

    printf("¬ведите угол w в радианах: ");
    scanf("%lf", &w);

    printf("¬ведите радиус r: ");
    scanf("%lf", &r);

    L = r * w;
    S = r * r * w / 2;
    C = 2 * r * sin(w / 2);

    printf("\nƒлина дуги: %.3f\n", L);
    printf("ѕлощадь сектора: %.3f\n", S);
    printf("ƒлина хорды: %.3f\n", C);

    return 0;
}
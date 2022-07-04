#include <stdio.h>
#ifndef PI
#define PI 3.14159265359
#endif
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}

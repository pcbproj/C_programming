#include <stdio.h>

#define PI_VALUE (3.1415f)

#define AREA_OF_CIRCLE(x) ( (PI_VALUE) * (x) * (x) )

int main(void)
{
    float area_circle;
    area_circle = AREA_OF_CIRCLE(1+1);
    printf("Area = %.2f\n", area_circle);

    return 0;
}


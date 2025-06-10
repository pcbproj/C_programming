#include <stdio.h>

int main()
{
    unsigned char distanceAB;
    distanceAB = 160;

    unsigned char distanceBC = 40;

    unsigned char distanceAC;

    distanceAC = distanceAB + distanceBC;

    printf("%o Total distance AC =  Km\n", distanceAC);

    printf("Distance AB = %u Km,  Distance ВС = %u Km\n", distanceAB, distanceBC);

    return 0;
}

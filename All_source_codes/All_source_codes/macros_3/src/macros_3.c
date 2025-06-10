#include <stdio.h>

//#define AREA_CIR
//#define AREA_TRI

#if !defined(AREA_CIR) && !defined(AREA_TRI)
    #warning "No macros defined."
#endif

int main(void)
{
#ifdef AREA_CIR
	float radius = 0;
	printf("This is circle area calculation program\n");
	fflush(stdout);
	printf("Enter the radius :");
	fflush(stdout);
	scanf("%f", &radius);
	printf("Area of circle = %0.2f\n", (3.1415 * radius * radius));
	fflush(stdout);
#endif

#ifdef AREA_TRI
	float base, height;
	printf("This is Triangle area calculation program\n");
	fflush(stdout);
	printf("Enter base and height: ");
	fflush(stdout);
	scanf("%f%f", &base, &height);
	printf("Area of triangle = %0.2f\n", (0.5 * base * height));
#endif

	return 0;
}

#include<stdio.h>

void wait_for_user_input(void);

int main(void)
{
	char code;
	float r, b, h, a;
	float area;
	printf("Area calculation program\n");
	printf("Circle    --> c\n");
	printf("Triangle  --> t\n");
	printf("Trapezoid --> z\n");
	printf("Square    --> s\n");
	printf("Rectangle --> r\n");
	printf("Enter the code here:");
	fflush(stdout);
	scanf("%c", &code);

	switch(code){
	case 'c':
		printf("Circle Area calculation\n");
		printf("Enter radius(r) value:");
		fflush(stdout);
		scanf("%f", &r);
		if( r < 0)
		{
			printf("radius cannot be -ve\n");
			area = -1;
		}
		else
		{
			area = 3.1415 * r * r;
		}
		break;
	case 't':
		printf("Triangle Area calculation\n");
		printf("Enter base(b) value:");
		fflush(stdout);
		scanf("%f", &b);
		printf("Enter height(h) value:");
		fflush(stdout);
		scanf("%f", &h);
		if( (b < 0) || ( h < 0))
		{
			printf("base or height cannot be -ve\n");
			area = -1;
		}
		else
		{
			area = ( b * h)/2;
		}
		break;
	case 'z':
		printf("Trapezoid Area calculation\n");
		printf("Enter base1(a) value:");
		fflush(stdout);
		scanf("%f", &a);
		printf("Enter base2(b) value:");
		fflush(stdout);
		scanf("%f", &b);
		printf("Enter height(h) value:");
		fflush(stdout);
		scanf("%f", &h);
		if( ( (a < 0) || ( b < 0) || (h < 0) ) )
		{
			printf("base or height cannot be -ve\n");
			area = -1;
		}
		else
		{
			area = (( a + b)/2) * h;
		}
		break;
	case 's':
		printf("Square Area calculation\n");
		printf("Enter side(a) value:");
		fflush(stdout);
		scanf("%f", &a);
		if( a < 0)
		{
			printf("side cannot be -ve\n");
			area = -1;
		}
		else
		{
			area = a * a;
		}
		break;
	case 'r':
		printf("Rectangle Area calculation\n");
		printf("Enter width(w) value:");
		fflush(stdout);
		scanf("%f", &a);
		printf("Enter length(l) value:");
		fflush(stdout);
		scanf("%f", &b);
		if( (a < 0)  || (b < 0))
		{
			printf("width or length cannot be -ve\n");
			area = -1;
		}
		else
		{
			area = a * b;
		}
		break;
	default:
		printf("Invalid input\n");
		area = -1;

	}//end of body of switch

	if(!(area < 0))
	{
		printf("Area = %f\n", area);
	}

    wait_for_user_input();
}

void wait_for_user_input(void)
{
	printf("Press enter key to exit this application");
	fflush(stdout);
	while(getchar() != '\n');
	getchar();
}

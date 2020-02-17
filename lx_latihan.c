#include <stdio.h>
int main()
{
	int a;
	int b;
	double c;
	scanf("%d %ld\n", &a, &b);
	scanf("%lf", &c);
	printf("%d %.2lf %ld\n", a, c, b);
	return 0;
}

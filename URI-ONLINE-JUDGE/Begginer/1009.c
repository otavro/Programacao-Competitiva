#include <stdio.h>

int main()
{
	char seller[25]; double salary, sales, total;
	scanf("%s", &seller);
	scanf("%lf", &salary);
	scanf("%lf", &sales);
	total = (sales * 0.15) + salary;
	printf("TOTAL = R$ %.2lf\n", total);	
	return 0;
}
	

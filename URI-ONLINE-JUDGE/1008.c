#include <stdio.h>

int main()
{
	int hours, NUMBER;
	float SALARY,hoursvalue;
	scanf("%d", &NUMBER);
	scanf("%d", &hours);
	scanf("%f", &hoursvalue);		
	SALARY = hoursvalue * hours;
	printf("NUMBER = %d\nSALARY = U$ %.2f\n",NUMBER, SALARY);	
	return 0;
}

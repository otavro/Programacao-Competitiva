#include <stdio.h>

int main()
{
	int code1,code2,numu1, numu2;
	float price1, price2, value_to_pay;
	scanf("%i %i %f", &code1, &numu1, &price1);
	scanf("%i %i %f", &code2, &numu2, &price2);
	value_to_pay = (numu1 * price1) + (numu2 * price2);
	printf("VALOR A PAGAR: R$ %.2f\n", value_to_pay);
	return 0;	
}

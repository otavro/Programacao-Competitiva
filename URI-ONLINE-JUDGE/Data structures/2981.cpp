#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main()
{
	int  n, x = 0, c, d, k, aux, cont;
	int vAntes[1000], vDepois[1000];
	char trocas;

	scanf("%d", &n);

	for(c=0; c < n; c++)
	{
		cont=0;
		scanf("%d", &x);

		for(d=0; d < x; d++)
		{
			scanf("%d", &vAntes[d]);
			vDepois[d] = vAntes[d];
		}

		do
		{
			trocas = 0;
			k = 0;
			while (k < x - 1)
			{	if (vDepois[k] < vDepois[k + 1])
				{	
                    aux = vDepois[k];
					vDepois[k] = vDepois[k + 1];
					vDepois[k + 1] = aux;

					trocas = 1;
				}
				k++;
			}
		} while (trocas == 1);

		for(d=0; d < x; d++)
			if (vAntes[d] == vDepois[d])
				cont++;

		printf("%d\n", cont);
	}

	return 0;
}
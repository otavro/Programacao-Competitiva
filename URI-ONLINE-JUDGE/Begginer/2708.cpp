#include <stdio.h>
#include <string.h>


int main()
{

	int t, c, tmp;
	char com[10];

	t = c = 0 ;
	while (1)
	{

		scanf("%s", com);
		if (com[0] == 'A')
			break;

		scanf("%d", &tmp);
		if (com[0] =='S')
			t += tmp, c++;
		else
			t -= tmp, c--;

	}

	printf("%d\n%d\n", t, c);

	return 0;

}
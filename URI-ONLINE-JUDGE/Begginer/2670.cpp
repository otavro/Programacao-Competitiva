#include <iostream>
#include <cstdio>

using namespace std;

int menor (int a, int b);

int main(int argc, char *argv[])
{
	int a1, a2, a3, tot1 = 0, tot2 = 0, tot3 = 0;
	scanf("%d %d %d", &a1);
	scanf("%d %d %d", &a2);
	scanf("%d %d %d", &a3);

    tot1 = a2 * 2 + a3 * 4;
	tot2 = a1 * 2 + a3 * 2;
	tot3 = a1 * 4 + a2 * 2;
	printf("%d\n", menor(tot1, menor(tot2, tot3)));

	return 0;
}


int menor (int a, int b)
{
	if (a < b) return a;
	else return b;
}
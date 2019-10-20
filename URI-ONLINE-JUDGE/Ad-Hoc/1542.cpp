#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int Q, D, P,  dc, res;

    while (1)
    {
        scanf("%d",&Q); 
        if (Q==0)
            break;
        scanf("%d %d", &D, &P);
        
        dc = Q*P;

        D *= dc;

        Q = dc/Q;
        P = dc/P;


        res = trunc(D/abs(Q-P));

        res == 1? printf("%d pagina\n", res) : printf("%d paginas\n", res);

    }



    return 0;
}
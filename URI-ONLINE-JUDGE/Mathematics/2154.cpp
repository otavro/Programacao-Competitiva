#include <iostream>

using namespace std;

int main()
{
    char mais;
    int exp[100], n, y[100], expoente;

    while (scanf("%d", &n)!=EOF)
    {    
        for(int i = 0; i<n; i++)
        {
            scanf("%dx%d", &y[i], &exp[i]);
            if (i<n-1)
                cin>>mais;
        }
        for(int i = 0; i<n; i++)
        {
            expoente = exp[i]-1;
            if (expoente == 1)
            {
                if (i<n-1)
                    printf("%dx + ", y[i] * exp[i]);
                else
                    printf("%dx\n", y[i] * exp[i]);
            }
            else
            {
                if (i<n-1)
                    printf("%dx%d + ", y[i] * exp[i], expoente);
                else
                    printf("%dx%d\n", y[i] * exp[i], expoente);
            }  
        }
    }


    return 0;
}
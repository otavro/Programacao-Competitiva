#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int T, N;

    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        scanf("%d", &N);

        if(N % 4 == 0)
            printf("1\n");
        else if(N % 4 == 1)
            printf("7\n");            
        else if(N % 4 == 2)
            printf("9\n");
        else
            printf("3\n");
    }



    return 0;
}
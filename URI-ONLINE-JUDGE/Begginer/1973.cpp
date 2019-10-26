#include <stdio.h>
int main()
{

    long long int N, i;
    scanf("%lld", &N);
    long long int fazenda[N], ovelha[N], tot_trak=0, tot_ovelha=0;
    
    for(i=0; i<N; i++)
    {
        scanf("%lld", &ovelha[i]);
        fazenda[i]=0;
    }
    i=0;
    while(1)
    {
        if(i==0 && ovelha[i]%2==0)
        {
            fazenda[i]=1;
            if(ovelha[i]>0)
                ovelha[i]--;
            break;
        }
        else if(i==N-1 && ovelha[i]%2==1)
        {
            fazenda[i]=1;
            if(ovelha[i]>0)
                ovelha[i]--;
            break;
        }
        else if(ovelha[i]%2==1)
        {
            ovelha[i]--;
            fazenda[i]=1;
            i++;
        }
        else if(ovelha[i]%2==0)
        {
            fazenda[i]=1;
            if(ovelha[i]>0)
                ovelha[i]--;
            i--;
        }


    }
    for(i=0; i<N; i++)
    {
        tot_ovelha += ovelha[i];
        tot_trak += fazenda[i];
    }
    printf("%lld %lld\n", tot_trak, tot_ovelha);
    return 0;
}

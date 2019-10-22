#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],  votos=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        votos+=a[i];
    }
    double qcinco,quarent,dez;
    int p=n-1;
    sort(a,a+n);

    qcinco=(45*votos*1.00)/100;
    quarent=(40*votos*1.00)/100;
    dez=(10*votos*1.00)/100;

    if(a[n-1]>=qcinco)
        printf("1\n");
    else if(a[p]<quarent)
        printf("2\n");
    else if(a[n-1]>=quarent)
    {
        bool dez=false;
        double div;
        for(int i=0;i<n-1;i++)
        {
            div=a[p]-a[i];
            if(div>=dez)
                continue;
            else
            {
                dez=true;
                break;
            }
        }
        if(dez)
            printf("2\n");
        else
            printf("1\n");
    }
    return 0;
}
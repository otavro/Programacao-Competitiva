//#include<bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;
int main()

{
    string palavra;
    while(cin >> palavra)
    {
        int j=0;
        int k=palavra.length();
        for(int count=0;count<palavra.length();count++)
        {
            for(int i=0;i<j;i++)
            {
                cout<<" ";
    
            }
            for(int I=0;I<k-1;I++)
            {
                cout<<palavra[I]<<" ";
            }
            cout<<palavra[k-1];
            cout<<"\n";
            k--; j++;
        }
        cout<<"\n";
    }
    return 0;
}
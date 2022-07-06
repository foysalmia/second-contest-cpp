#include<bits/stdc++.h>

using namespace std;

int main()
{
    char O[51],E[51];
    cin>>O>>E;
    if(strlen(O)==strlen(E))
    {
        for(int i=0; i<strlen(O); i++)
        {
            cout<<O[i]<<E[i];
        }
    }
    else
    {
        for(int i=0; i<strlen(E); i++)
        {
            cout<<O[i]<<E[i];
        }
        cout<<O[strlen(E)];
    }

    return 0;
}

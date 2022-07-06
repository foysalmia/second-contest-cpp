#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[101];
    cin>>s;
    int x = strlen(s);
    int sum = 0;
    for(int i=0;i<x-2;i++){
        sum++;
    }

    cout<<s[0]<<sum<<s[x-1]<<endl;
    return 0;
}


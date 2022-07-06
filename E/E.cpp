#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x=0;
    cin>>n;
    while(n){
        x++;
        n >>= 1;
    }
    cout<<(1<<(x-1))<<endl;
    return 0;
}



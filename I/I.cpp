
#include<bits/stdc++.h>
using namespace std;

int main() {
    char a[11],b[11],c[11];
    cin>>a>>b>>c;
    int al = strlen(a);
    int bl = strlen(b);
    int cl = strlen(c);

    if(a[al-1] == b[0] && b[bl-1] == c[0] ){
        cout<<"YES"<<endl;
    }else{
         cout<<"NO"<<endl;
    }
    return 0;
}



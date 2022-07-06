
#include<bits/stdc++.h>
using namespace std;

int main() {
    char s[27];
    cin >> s;
    int len = strlen(s);

    int cnt[26] = {0};

    for (int i = 0; i < len; i++) {
        int num = s[i] - 'a';
        cnt[num]++;
    }
    for (int i = 0; i < 26; i++) {
        if (cnt[i] == 2) {
            char letter = i + 'a';
            cout <<"no"<<endl;
            return 0;
        }
    }
    cout << "yes"<<endl;
    return 0;
}


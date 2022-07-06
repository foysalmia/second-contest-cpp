#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[100001];
    cin >> str;
    int len = strlen(str);

    int cnt[26] = {0};

    for (int i = 0; i < len; i++) {
        int num = str[i] - 'a';
        cnt[num]++;
    }
    for (int i = 0; i < 26; i++) {
        if (cnt[i] == 0) {
            char letter = i + 'a';
            cout << letter;
            return 0;
        }
    }
    cout << "None";
    return 0;
}



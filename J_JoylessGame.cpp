#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        int len = str.length();
        cout << (((len & 1) != (str[0] != str[len - 1])) ? "Bash" : "Chikapu") << endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int Q;
int QueryType[100009], y[100009];
string x[100009];

// 添え字がstring, 記録する値がint型
map<string, int> mp;

int main() {
    cin >> Q;
    for (int i = 1; i <= Q; i++) {
        cin >> QueryType[i];
        if (QueryType[i] == 1) cin >> x[i] >> y[i];
        if (QueryType[i] == 2) cin >> x[i];
    }

    for (int i = 1; i <= Q; i++) {
        if (QueryType[i] == 1) mp[x[i]] = y[i];
        if (QueryType[i] == 2) cout << mp[x[i]] << endl;
    }

    return 0;
}
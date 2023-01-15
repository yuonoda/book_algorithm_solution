#include <iostream>
#include <vector>
using namespace std;

char latestActivity;

long SelectHappiestActivity(vector<long long> arr) {
    long a = latestActivity == 'a'? -1 : arr[0];
    long b = latestActivity == 'b'? -1 : arr[1] ;
    long c = latestActivity == 'c'? -1 : arr[2];
    if ( a >= b ) {
        if (a >= c) {
            latestActivity = 'a';
            return a;
        }
        latestActivity = 'c';
        return c;
    }
    if ( a < b) {
        if (b >= c ) {
            latestActivity = 'b';
            return b;
        }
        latestActivity = 'c';
        return c;
    }
}

int main() {
    // 入力
    int N;
    cin >> N;
    vector<vector<long long> > a(N, vector<long long>(3));
    for (long i = 0; i < N; ++i)
        for (long j = 0; j < 3; ++j)
            cin >> a[i][j];

    latestActivity = 'x';
    long result = 0;
    for (long i = 0; i < N; ++i) {
        result += SelectHappiestActivity(a[i]);
    }

    // 結果出力
    cout << result << endl;
    // 計算量O(n)
}
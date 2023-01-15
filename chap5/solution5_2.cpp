#include <iostream>
#include <vector>
using namespace std;

//int main() {
//    // 入力
//    int N, W;
//    cin >> N >> W;
//    vector<int> a(N);
//    for(int i = 0; i < N; ++i) cin >> a[i];
//
//    // DP
//    vector<vector<bool> > dp(N+1, vector<bool>(W+1, false));
//    dp[0][0] = true;
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j <= W; j++) {
//            // a[i]を選ばない場合
//            if (dp[i][j]) dp[i+1][j] = true;
//
//            // a[i]を選ぶ場合
//            if(j >= a[i] && dp[i][j - a[i]]) dp[i + 1][ j ] = true;
//        }
//    }
//
//    if (dp[N][W]) cout << "Yes" << endl;
//    else cout << "No" << endl;
//}

template<class T> void chmax(T&a, T b) {
    if (a < b) {
        a = b;
    }
}

int main() {
    // 入力
    int N, W;
    cin >> N >> W;
    vector<int> a(N);

    for(int i = 0; i < N; ++i ) {
        cin >> a[i];
    }

    // DPテーブル定義
    vector<vector<long long> >  dp( N + 1, vector<long long>(W + 1, 0));
    dp[0][0] = 0;

    // DPループ
    for(int i = 0; i <= N; ++i) { // iが整数の全てを探索するまで探索
        for(int j = 0; j <= W; ++j) { // wが総和に達するまで探索
            long long newInt = a[i];
            if (j - newInt >= 0) { // 新しい整数が総和よりも小さければ
                // いまテーブルにあるi+1番目の整数をwを超えないように選んだ数の最大和よりも、
                // 新しい整数を加える前の最大和に、新しい整数を加えた数が大きければ、
                // 後者でテーブルのセルを置き換える
                chmax(dp[i + 1][j], dp[i][j - newInt] + newInt);
            }
            // いまテーブルにあるi+1番目までの整数をwを超えないように選んだ数の最大和よりも
            // テーブルのi番目までの整数をwを超えないように選んだ数の最大値のほうが大きければ
            // 後者でテーブルのセルを置き換える
            chmax(dp[i + 1][j], dp[i][j]);
        }
    }

    //　最適値の出力
    bool canMatch = dp[N][W] == W;
    printf("canMatch: %b", canMatch);
    cout << canMatch << endl;
}
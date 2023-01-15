#include <iostream>
#include <vector>
using namespace std;

//
template<class T> void chmax(T&a, T b) {
    if (a < b) {
        a = b;
    }
}

//　ナップザック問題
int main() {
    // 入力
    int N; long long W;
    cin >> N >> W;
    vector<long long> weight(N), value(N);
    for(int i = 0; i <= W; ++i ) cin >> weight[i] >> value[i];

    // DPテーブル定義
    vector<vector<long long> >  dp(N+1, vector<long long>(W + 1, 0));
    dp[0][0] = 0;

    // DPループ
    for(int i = 0; i <= N; ++i) { // 品物の探索
        for(int w = 0; w <= W; ++w) { // 重さの探索
            // i番目の品物を選ぶ場合
            if (w - weight[i] >= 0) { // その品物の重さが許容可能だったら
                chmax(dp[i + 1][w], dp[i][w - weight[i]] + value[i]); // 選んだ場合の価値のほうが大きければ、価値の最大値を更新する
            }

            // i番目の品物を選ばない場合
            chmax(dp[i + 1][w], dp[i][w]); // 重さも価値も変化しない
        }
    }

    //　最適値の出力
    cout << dp[N][W] << endl;
}
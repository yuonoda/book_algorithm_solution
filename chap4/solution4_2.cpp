#include <iostream>
#include <vector>
using namespace std;

vector<long long> memo;

// 任意の項のトリボナっち数を求める関数
int CalcTribonacci(int i) {
    // 0か1のときは0
    if (i == 0 || i == 1) return 0;

    // 2のときは1
    if (i == 2) return 1;

    // メモに存在すれば、それを返す
    if (memo[i] != -1) return memo[i];

    // それ以外のときは、
    // 一つ前+２つ前+３つ前
    memo[i] = CalcTribonacci(i - 1) + CalcTribonacci(i - 2) + CalcTribonacci(i - 3);
    return memo[i];
}

int main() {
    // 入力を受け取る
    int N;
    cin >> N;

    memo.assign(N + 1, -1);
//    for(int i = 0; i < memo.size(); i++) {
//        printf("%d\n", memo[i]);
//    }

    int result = CalcTribonacci(N);

    // 結果出力
    cout << result << endl;
    // 計算量O(n)
}
#include <iostream>
#include <vector>
using namespace std;

// 任意の項のトリボナっち数を求める関数
int CalcTribonacci(int i) {
    // 0か1のときは0
    if (i == 0 || i == 1) {
        return 0;
    }

    // 2のときは1
    if (i == 2) {
        return 1;
    }

    // それ以外のときは、
    // 一つ前+２つ前+３つ前
    int result = CalcTribonacci(i - 1) + CalcTribonacci(i - 2) + CalcTribonacci(i - 3);
    return result;
}

int main() {
    // 入力を受け取る
    int N;
    cin >> N;

    int result = CalcTribonacci(N);

    // 結果出力
    cout << result << endl;
}
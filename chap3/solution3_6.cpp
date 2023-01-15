#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 入力を受け取る
	int K, N;
    cin >> K >> N;

    // 線形探索
    int result = 0;
    // xを0からKまでループ
    for(int x = 0; x <= K; ++x) {
        // yを0からKまでループ
        for(int y = 0; y <= K; ++y) {
            // Nからx+yを引くとゼロになるときにインクリメント
            int z = N - (x + y);
            if (0 <= z && z <= K) {
                ++result;
            }
        }
    }

    // 結果出力
    cout << result << endl;
}
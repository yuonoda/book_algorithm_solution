#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 入力を受け取る
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; ++i) cin >> a[i];

    // 線形探索
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < N; ++i) {
        if (a[i] < min) {
            min = a[i];
            continue;
        }
        if (a[i] > max) {
            max = a[i];
            continue;
        }
    }
    int result = max - min;

    // 結果出力
    cout << result << endl;
}
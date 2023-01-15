#include <iostream>
#include <vector>
using namespace std;

int CountDivisionsByTwo(vector<int> ints, int N) {
    int count = 0;
    while(true) {
        for (int i = 0; i < N; ++i) {
            if (ints[i] % 2 != 0){
                return count;
            }
            ints[i] = ints[i] / 2;
        }
        ++count;
    }
}

int main() {
    // 入力を受け取る
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; ++i) cin >> a[i];

    // 線形探索
    int result = CountDivisionsByTwo(a, N);

    // 結果出力
    cout << result << endl;
}
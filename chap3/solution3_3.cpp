#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; ++i) cin >> a[i];

    int min = a[0] < a[1] ? a[0]:  a[1];
    int semiMin = a[0] < a[1]? a[1] : a[0];
    for (int i = 2; i < N; ++i) {
        if (a[i] < min) {
            semiMin = min;
            min = a[i];
            continue;
        }
        if (a[i] < semiMin) {
            semiMin = a[i];
            continue;
        }
    }

    // 結果出力
    cout << semiMin << endl;
}
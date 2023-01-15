#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main() {
	int N,v;
	cin >> N >> v;
	vector<int> a(N);
	for (int i = 0; i < N; ++i) cin >> a[i];

    int counter = 0;
    for (int i = 0; i < N; ++i) {
        printf("%d\n", a[i]);
        if (a[i] == v) {
            ++counter;
        }
    }

    // 結果出力
    cout << counter << endl;
}
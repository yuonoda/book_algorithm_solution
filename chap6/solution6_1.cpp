# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int main() {
    // 入力
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    // ソート
    auto b = a;
    sort(b.begin(), b.end());

    vector<int> res(N);
    for (int i = 0; i < N; ++i) {
        res[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
    }

    for (int i = 0; i < N; ++i) cout << res[i] << endl;

//        int size = a.size();
//        int medianAt;
//        if (size % 2 == 0) {
//            medianAt = size / 2;
//        } else {
//            medianAt = size / 2 - 1;
//        }
//        int median = a[medianAt];
//        if median
//}
}
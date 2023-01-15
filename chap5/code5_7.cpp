#include <iostream>
#include <vector>
//using namespace std

//
template<class T> void chmax(T&a, T b) {
    if (a < b) {
        a = b;
    }
}

int main() {
    // 入力
    int N; long long W;
    std::cin >> N >> W;
    std::vector<long long> weight(N), value(N);
    for(int i == 0; i <= W; ++i ) std::cin >> weight[i] >> value[i]
}
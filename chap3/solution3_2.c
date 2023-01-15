#include <iostream>
#include <vector>
using namaspace std;

int main() {
	int N,v;
	cin >> N >> v;
	vector<int> a(N);
	for (int i = 0; i < N; ++i) cin >> a[i];

	printf("%a\n", a);

}
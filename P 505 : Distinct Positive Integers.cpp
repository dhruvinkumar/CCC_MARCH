#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> sorted_a(a);
    std::sort(sorted_a.begin(), sorted_a.end());
    long long cnt = 0;
    for (int i = 0; i < n; i++) {
        int j = std::lower_bound(sorted_a.begin(), sorted_a.end(), a[i]) - sorted_a.begin();
        cnt += j;
        sorted_a.erase(sorted_a.begin() + j);
    }
    cout << cnt << endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int>& time, int n, int m, int mid) {
    int days = 1;
    int currTime = 0;

    for (int i = 0; i < n; i++) {
        if (time[i] > mid) {
            return false;  // If any chapter requires more time than mid, it's not possible
        }
        if (currTime + time[i] > mid) {
            days++;
            currTime = 0;
        }
        currTime += time[i];
    }

    return days <= m;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> time(n);
        for (int i = 0; i < n; i++) {
            cin >> time[i];
        }

        int low = 1, high = 1e9, result = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isPossible(time, n, m, mid)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << result << endl;
    }

    return 0;
}

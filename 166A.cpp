#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool sortFunction(pair<int, int> p1, pair<int, int> p2) {
    if (p1.first > p2.first) {
        return true;
    } else if (p1.first == p2.first) {
        return p1.second < p2.second;
    } else {
        return false;
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> arr;

    for (int i = 0; i < n; i++) {
        pair<int, int> p;
        cin >> p.first;
        cin >> p.second;
        arr.push_back(p);
    }

    sort(arr.begin(), arr.end(), sortFunction);

    int solved = arr[k - 1].first;
    int penalty = arr[k - 1].second;
    bool started = false;
    int count = 0;

    for (auto x : arr) {
        if (x.first == solved && x.second == penalty) {
            if (!started) {
                started = true;
            }
            count++;
        } else {
            if (started) {
                break;
            }
        }
    }

    cout << count << endl;
}
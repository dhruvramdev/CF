#include <bits/stdc++.h>
#define ll long long
#define TIMEIT 1
#define fastio                                                                 \
    ios::sync_with_stdio(false);                                               \
    cin.tie(NULL);

using namespace std;

void debug(vector<pair<int, int>>& vec) {
    cout << "DEBUG VECTOR" << endl;
    for (auto& e : vec) {
        cout << e.first << " " << e.second << endl;
    }
}

int main() {

#ifdef TIMEIT
    clock_t startTime = clock();
#endif

    int n;
    cin >> n;

    vector<pair<int, int>> points(n);
    int x, y;
    int initialCount = 0;
    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
        if ((points[i].first == 0 && points[i].second != 0) ||
            (points[i].first != 0 && points[i].second == 0)) {
            initialCount += 4;
        } else {
            initialCount += 6;
        }
    }

    sort(points.begin(), points.end(), [&](pair<int, int> a, pair<int, int> b) {
        return (abs(a.first) + abs(a.second)) < (abs(b.first) + abs(b.second));
    });

    // debug(points);
    int count = 0;
    cout << initialCount << endl;
    int diffx, diffy;
    char x1, x2, y1, y2;
    for (int i = 0; i < n; i++) {
        x = points[i].first;
        y = points[i].second;

        if (x != 0) {
            x1 = x < 0 ? 'L' : 'R';
            printf("1 %d %c\n", abs(x), x1);
        }
        if (y != 0) {
            y1 = y < 0 ? 'D' : 'U';
            printf("1 %d %c\n", abs(y), y1);
        }

        cout << 2 << endl;

        if (x != 0) {
            x2 = x < 0 ? 'R' : 'L';
            printf("1 %d %c\n", abs(x), x2);
        }
        if (y != 0) {
            y2 = y < 0 ? 'U' : 'D';
            printf("1 %d %c\n", abs(y), y2);
        }

        cout << 3 << endl;
    }

// cout << count << endl;
#ifdef TIMEIT
    cerr << endl
         << setprecision(20)
         << double(clock() - startTime) / (double)CLOCKS_PER_SEC << " seconds."
         << endl;
#endif
}
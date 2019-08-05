#include <bits/stdc++.h>
using namespace std;

#define ll long long
// #define TIMEIT 1

#define fastio                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);                                                                \
    cout.tie(0);

char matrix[500][500];
int visited[500][500] = {0};
// int completed[500][500] = {0};
int n, m;

void delete_nodes(pair<int, int> starting_point, int& k) {
    stack<pair<int, int>> sp_stack;
    sp_stack.push(starting_point);

    pair<int, int> sp;

    while (!sp_stack.empty()) {
        sp = sp_stack.top();

        // cout << "Current Point : " << sp.first << " " << sp.second << endl;
        // cout << "Current K : " << k << endl;
        // cout << "Visited : " << visited[sp.first][sp.second] << endl;

        if (visited[sp.first][sp.second] == 0) {
            visited[sp.first][sp.second] = 1;
        }

        if (k == 0) {
            sp_stack.pop();
            continue;
        }

        // cout << "Testing X+1" << endl;
        if (k != 0 && sp.first < n - 1 &&
            matrix[sp.first + 1][sp.second] == '.') {
            if (visited[sp.first + 1][sp.second] == 0) {
                sp_stack.push(make_pair(sp.first + 1, sp.second));
                continue;
            }
        }

        // cout << "Testing X-1" << endl;
        if (k != 0 && sp.first > 0 && matrix[sp.first - 1][sp.second] == '.') {
            if (visited[sp.first - 1][sp.second] == 0) {
                sp_stack.push(make_pair(sp.first - 1, sp.second));
                continue;
            }
        }

        // cout << "Testing Y+1" << endl;
        if (k != 0 && sp.second < m - 1 &&
            matrix[sp.first][sp.second + 1] == '.') {
            if (visited[sp.first][sp.second + 1] == 0) {
                sp_stack.push(make_pair(sp.first, sp.second + 1));
                continue;
            }
        }

        // cout << "Testing Y-1" << endl;
        if (k != 0 && sp.second > 0 && matrix[sp.first][sp.second - 1] == '.') {
            if (visited[sp.first][sp.second - 1] == 0) {
                sp_stack.push(make_pair(sp.first, sp.second - 1));
                continue;
            }
        }
        if (k > 0) {
            matrix[sp.first][sp.second] = 'X';
            k--;
        }
        sp_stack.pop();
    }
}

int main() {

#ifdef TIMEIT
    clock_t startTime = clock();
#endif

    fastio;

    int k;
    cin >> n >> m >> k;
    pair<int, int> starting_point = {0, 0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == '.') {
                starting_point = {i, j};
            }
        }
    }

    // cout << "Starting Point : " << starting_point.first << " "
        //  << starting_point.second << endl;

    delete_nodes(starting_point, k);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }

#ifdef TIMEIT
    cerr << endl
         << setprecision(20)
         << double(clock() - startTime) / (double)CLOCKS_PER_SEC << " seconds."
         << endl;
#endif
}
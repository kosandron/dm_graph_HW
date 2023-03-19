#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> g;
vector<vector<int>> mst;
vector<int> u;
vector<int> an;

int INF = 10000;
int y = 0;
int z  = 0;

void dfs(int v) {
    u[v] = 1;
    for (int i = 0; i < mst[v].size(); i++) {
        if (u[mst[v][i]] == 0) {
            y++;
            dfs(mst[v][i]);
        }
        if (v == z) {
            an[v] = max(an[v], y);
            y = 0;
        }
    }
    if (v == z) {
        cout << an[v];
    }
    u[v] = 2;
}

int main() {
    g.resize(44);

    g[0].push_back(1);
    g[0].push_back(2);
    g[0].push_back(3);

    g[1].push_back(0);
    g[1].push_back(2);

    g[2].push_back(0);
    g[2].push_back(1);
    g[2].push_back(3);

    g[3].push_back(0);
    g[3].push_back(2);
    g[3].push_back(4);
    g[3].push_back(5);
    g[3].push_back(6);
    g[3].push_back(7);
    g[3].push_back(8);
    g[3].push_back(9);
    g[3].push_back(15);

    g[4].push_back(3);
    g[4].push_back(5);

    g[5].push_back(3);
    g[5].push_back(4);
    g[5].push_back(6);
    g[5].push_back(7);

    g[6].push_back(3);
    g[6].push_back(5);
    g[6].push_back(7);
    g[6].push_back(8);

    g[7].push_back(3);
    g[7].push_back(5);
    g[7].push_back(6);
    g[7].push_back(8);
    g[7].push_back(9);

    g[8].push_back(3);
    g[8].push_back(7);
    g[8].push_back(6);
    g[8].push_back(9);
    g[8].push_back(10);
    g[8].push_back(28);
    g[8].push_back(29);

    g[9].push_back(3);
    g[9].push_back(7);
    g[9].push_back(8);
    g[9].push_back(10);
    g[9].push_back(11);
    g[9].push_back(12);
    g[9].push_back(24);

    g[10].push_back(8);
    g[10].push_back(9);
    g[10].push_back(24);
    g[10].push_back(27);
    g[10].push_back(28);

    int q = 11;
    g[q].push_back(9);
    g[q].push_back(12);

    q++;//12
    g[q].push_back(9);
    g[q].push_back(11);
    g[q].push_back(13);
    g[q].push_back(14);
    g[q].push_back(24);

    q++;//13
    g[q].push_back(12);
    g[q].push_back(14);
    g[q].push_back(19);
    g[q].push_back(21);
    g[q].push_back(22);
    g[q].push_back(23);
    g[q].push_back(24);
    g[q].push_back(25);

    q++;//14
    g[q].push_back(12);
    g[q].push_back(13);
    g[q].push_back(17);
    g[q].push_back(18);
    g[q].push_back(19);

    q++;
    g[q].push_back(3);
    g[q].push_back(16);
    g[q].push_back(17);

    q++;//16
    g[q].push_back(15);
    g[q].push_back(17);

    q++;
    g[q].push_back(14);
    g[q].push_back(15);
    g[q].push_back(16);
    g[q].push_back(18);

    q++;//18
    g[q].push_back(14);
    g[q].push_back(17);
    g[q].push_back(19);
    g[q].push_back(20);

    q++;
    g[q].push_back(13);
    g[q].push_back(14);
    g[q].push_back(18);
    g[q].push_back(19);
    g[q].push_back(20);

    q++;
    g[q].push_back(18);
    g[q].push_back(19);
    g[q].push_back(21);
    g[q].push_back(22);

    q++;
    g[q].push_back(13);
    g[q].push_back(19);
    g[q].push_back(20);
    g[q].push_back(22);

    q++;
    g[q].push_back(13);
    g[q].push_back(20);
    g[q].push_back(21);
    g[q].push_back(23);
    g[q].push_back(25);

    q++;//23
    g[q].push_back(13);
    g[q].push_back(22);
    g[q].push_back(25);

    q++;
    g[q].push_back(9);
    g[q].push_back(10);
    g[q].push_back(12);
    g[q].push_back(13);
    g[q].push_back(25);
    g[q].push_back(26);
    g[q].push_back(27);

    q++;
    g[q].push_back(13);
    g[q].push_back(22);
    g[q].push_back(23);
    g[q].push_back(24);
    g[q].push_back(26);

    q++;//26
    g[q].push_back(24);
    g[q].push_back(25);
    g[q].push_back(27);
    g[q].push_back(32);

    q++;
    g[q].push_back(10);
    g[q].push_back(24);
    g[q].push_back(26);
    g[q].push_back(28);
    g[q].push_back(29);
    g[q].push_back(32);
    g[q].push_back(35);
    g[q].push_back(36);

    q++;
    g[q].push_back(8);
    g[q].push_back(10);
    g[q].push_back(27);
    g[q].push_back(29);

    q++;//29
    g[q].push_back(8);
    g[q].push_back(27);
    g[q].push_back(28);
    g[q].push_back(30);
    g[q].push_back(31);
    g[q].push_back(36);
    g[q].push_back(37);
    g[q].push_back(38);
    g[q].push_back(39);

    q++;
    g[q].push_back(29);

    q++;
    g[q].push_back(29);
    g[q].push_back(38);

    q++;//32
    g[q].push_back(26);
    g[q].push_back(27);
    g[q].push_back(33);
    g[q].push_back(34);
    g[q].push_back(36);
    g[q].push_back(39);

    q++;
    g[q].push_back(32);

    q++;
    g[q].push_back(32);

    q++;//35
    g[q].push_back(27);
    g[q].push_back(36);

    q++;
    g[q].push_back(27);
    g[q].push_back(29);
    g[q].push_back(32);
    g[q].push_back(35);
    g[q].push_back(39);

    q++;
    g[q].push_back(29);
    g[q].push_back(38);
    g[q].push_back(39);

    q++;//38
    g[q].push_back(29);
    g[q].push_back(31);
    g[q].push_back(37);
    g[q].push_back(39);

    q++;
    g[q].push_back(29);
    g[q].push_back(32);
    g[q].push_back(36);
    g[q].push_back(37);
    g[q].push_back(38);
    g[q].push_back(40);
    g[q].push_back(41);
    g[q].push_back(42);

    q++;
    g[q].push_back(39);

    q++;
    g[q].push_back(39);
    g[q].push_back(42);

    q++;//42
    g[q].push_back(39);
    g[q].push_back(41);
    g[q].push_back(43);

    q++;
    g[q].push_back(42);

    int ans = 0;
    for (int i = 0; i < 44; i++) {
        ans += g[i].size();
    }
    cout << ans << '\n';

    int n = 44;
    int d[44][44];
    for(int i = 0; i < 44; i++) {
        for (int j = 0; j < 44; j++) {
            if (i != j) {
                d[i][j] = INF;
            } else {
                d[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < g[i].size(); j++) {
            d[i][g[i][j]] = 1;
        }
    }

    for (int k = 0; k < n; ++k)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

    int r = INF;
    vector <int> extentrisitet(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            extentrisitet[i] = max(extentrisitet[i], d[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        if (extentrisitet[i] < r) {
            r = extentrisitet[i];
            cout << i << '\n';
        }
    }
    cout << "Radius: "<< r << '\n';
    for (int i = 0; i < n; i++) {
        if (extentrisitet[i] == r) {
            cout << i << " ";
        }
    }
    cout << '\n';

    int diam = 0;
    for (int i = 0; i < n; i++) {
        if (extentrisitet[i] > diam) {
            diam = extentrisitet[i];
            cout << i << '\n';
        }
    }
    cout << "Diametr: "<< diam << '\n';

    std::ifstream f("abc.txt");
    char s;
    int graph[44][44];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            f >> s;
            cout << s.substr(0, s.size() - 1);
            graph[i][j] = stoi(s.substr(0, s.size() - 1));
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << graph[i][j] << " ";
        }
        cout << '\n';
    }

    const int INF = 1000000000; // значение "бесконечность"

    mst.resize(44);
    int t = 0;
// алгоритм Прима 
    vector<bool> used (n);
    vector<int> min_e (n, INF), sel_e (n, -1);
    min_e[0] = 0;
    for (int i = 0; i < n; ++i) {
        int v = -1;
        for (int j = 0; j < n; ++j)
            if (!used[j] && (v == -1 || min_e[j] < min_e[v]))
                v = j;
        if (min_e[v] == INF) {
            cout << "No MST!";
            exit(0);
        }

        used[v] = true;
        if (sel_e[v] != -1) {
            cout << v << " -- " << sel_e[v] << endl;
            mst[v].push_back(sel_e[v]);
            mst[sel_e[v]].push_back(v);
            t++;
        }

        for (int to = 0; to < n; ++to)
            if (graph[v][to] < min_e[to]) {
                min_e[to] = graph[v][to];
                sel_e[to] = v;
            }
    }
    
    return 0;
}

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define MAXN 1005

int mg[MAXN][MAXN]; // Matrix
vector<int> g[MAXN]; // Lista

// DFS
vector<bool> visited(MAXN, false);

void dfs(int u){
  visited[u] = true;
  for(int i = 0; i < g[u].size(); ++i){
    int next = g[u][i];
    if(!visited[next]) dfs(next);
  }
}

// BFS
vector<int> d(MAXN, -1), p(MAXN, -1);
void bfs(int s){
  d[s] = 0;
  queue<int> q;
  q.push(s);
  while(!q.empty()){
    int curr = q.front();
    q.pop();
    for (int i = 0; i < g[curr].size(); ++i){
      int next = g[curr][i];
      if (d[next] == -1){
        d[next] = d[curr] + 1;
        p[next] = curr;
        q.push(next);
      }
    }
  }
}

int main(){
  int n, m, x, y;
  cin >> n >> m;

  for(int i = 0; i < m; ++i){
    cin >> x >> y;
    // x--; y--;
    g[x].push_back(y);
  }

  dfs(1);
  bfs(1);

  for(int i = 1; i <= n; ++i) cout << i << ": " << visited[i] << endl;
  for(int i = 1; i <= n; ++i) cout << i << ": " << d[i] << endl;

  return 0;
}

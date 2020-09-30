#include <bits/stdc++.h>

using namespace std;
#define MAXN 100000

int cont = 0;
vector<long int> g[MAXN]; // Lista

dfs( vector<bool> &v, int u, int n){
  v[u] = true;
  for(int i = 0; i < g[u].size(); ++i){
    int t = g[u][i];
    cout << "hola" ;
    if(!v[t]) {
        cout << u << " " << t << "\n";
        v[t] = true;
        dfs(v, t, n);
    }
  }

  for(int i = 0; i<n; ++i){
    if(!v[i]) {
      v[i] = true;
      g[u].push_back(i);
      g[i].push_back(u);
      cont ++;
    }
  }
}

int main(){

  int n, p;
  cin >> n >> p;
  vector<bool> v(n, false);

  while(p--){
    int x, y;
    cin >> x >> y;
    x--, y--;
    g[x].push_back(y);
    g[y].push_back(x);
  }

  for(int i=0; i<n; i++){
    if(!v[i]){
      // v[i] = true;
      // vector<bool> help = v;
      dfs(v, i, n);
      // v = help;
    }
  }

  cout << cont << "\n";

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define MAXN 100000

vector<int> g[MAXN];
int v[MAXN];
int cont = 0;
#define el '\n'

void dfs(int u, int num, set<int> &s, bool f){
    v[u] = num;
    for(int i = 0; i < g[u].size(); ++i){
        int next = g[u][i];
        if(!v[next]){
        		dfs(next, num, s, f);
        }else if(v[next] != num && f==true){
        		if(s.count(v[next]) == 0){
            		--cont;
              	s.insert(v[next]);
            }
        }
    }
}

int main(){
    int c;
    cin >> c;
    while(c--){
        int d, p;
        cin >> d >> p;
        vector<bool> visi(d, false);
        while(p--){
            int x, y;
            cin >> x >> y;
            x--, y--;
            g[x].push_back(y);
            visi[y] = true;
        }
        for(int i=0; i < visi.size(); ++i){
            if (visi[i] == false){
                    cont ++;
                    set<int> s;
                    dfs(i, i+1, s, 0);
            }
        }
        set<int> s;
        for(int i=0; i < d; ++i){
            if (v[i] == false){
                    cont ++;
              			dfs(i, i+1, s, 1);
            }
        }

        cout << cont << "\n";
        for(int i=0; i < d; ++i){
            g[i].clear();
            v[i] = 0;
        }
        cont = 0;
    }
}

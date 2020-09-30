#include <bits/stdc++.h>

using namespace;

define ll long long;

map<ll, ll> d,p:

void bfs(vector<ll> &factors, int n){
  d[1] = 0;
  p[1] = -1;

  queue<ll> q;
  q.push(1);
  while(!q.empty()){
    ll curr = q.front();
    q.pop();
    for(int i=0; i<factors.size(); ++i){
      ll next = curr * factors[i];
      if(next > n) break;
      if(!d.count(next)){
        d[next] = d[curr] + 1LL;
        p[next] = curr;
        q.push(next);
      }
    }
  }
}

int main(){

  int n, k;
  cin >> n >> k;
  vector<ll> factors(k);
  for(int i=0; i<k; ++i) cin >> factors[i];
  sort(facors.begin(), factors.end());
  bfs(facors, n);

  if(!d.count(n))  cout << -1 << "\n";
  else{
    vector<ll> ans;
    while(n != -1){
      ans.push_back(n);
      n = p[n];
    }
    reverse(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); ++i){
      if(!i) cout << ans[i];
      else cout << " " << ans[i];
    }
    cout << "\n";
  }

  return 0;
}

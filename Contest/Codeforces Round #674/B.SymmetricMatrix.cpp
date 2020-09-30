#include <bits/stdc++.h>

using namespace std;

int main(){

  int k;
  cin >> k;
  while(k--){
    int n, m;
    cin >> n >> m;
    int a[n][2][2];
    for(int i=0; i<n; i++){
      for(int j=0; j<2; j++){
        int x,y;
        cin >> x >> y;
        a[i][j][0] = x;
        a[i][j][1] = y;
      }
    }
    bool ok = false;
    for(int i = 0; i < n; i++){
      if (ok || a[i][0][1] == a[i][1][0]){ ok = true; }
      else { ok = false; }
    }
    if(ok && m%2 == 0){ cout << "YES" << "\n"; }
    else { cout << "NO" << "\n"; }
  }

  return 0;
}

#include <bits/stdc++.h>

using namespace std;

string solve(int a[], int n){
    for(int i = 0; i < n; i++){
        if(a[a[a[i]]]==i) return "YES";
    }
    return "NO";
}

int main(){

  int n, x; cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> x;
    x--;
    a[i] = x;
  }
  cout << solve(a, n);

  return 0;
}

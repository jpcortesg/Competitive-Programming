#include <bits/stdc++.h>

using namespace std;

#define SL '\n'
#define IN cin
#define OU cout


int main(){

  int cases; cin >> cases;
  while(cases--){
    int pl, sn, ro, board[100], i, s, e;
    for(i = 1; i <= 100; ++i) board[i-1] = i;
    cin >> pl >> sn >> ro;
    for(i = 0; i < sn; ++i){ cin >> s >> e; board[s-1] = (e*1000)-1; }
    int pla[pl];
    for(i=0; i < pl; ++i) pla[i] = 0;
    i = 0;
    bool win = false;
    while(ro--){
      int t; cin >> t;
      if(win) continue;
      pla[i] += t;
      if(board[pla[i]] >= 1000) pla[i] = board[pla[i]]/1000;
      if(pla[i] >= 99) win = true;
      i++;
      if(i+1 > pl) i = 0;
    }
    for(i = 0; i < pl; ++i) OU << "Position of player " <<  i+1 << " is " << board[pla[i]] << "." <<  SL;
  }
  return 0;
}

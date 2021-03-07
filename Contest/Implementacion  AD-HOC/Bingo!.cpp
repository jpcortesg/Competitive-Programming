#include <stdio.h>
#include<algorithm>
#include<cstring>


const int MAXN = 105;
int v[MAXN]; int k[MAXN];

int main(){
  int n, b;
  while(scanf("%d%d", &n, &b)&&n&&b){
    memset(v, 0, sizeof(v));
    memset(k, 0, sizeof(v));
    for(int i = 1; i <= b; ++i) { int h; scanf("%d", &h); v[i] = h; }
    for(int i = 1; i <= b; ++i){
      for(int j = i+1; j <= b; ++j) k[abs(v[i]-v[j])]++;
    }
    int fl = 1;
    for(int i = 1; i <= n; ++i){
      if(!k[i]){
        printf("%s", "N\n"); fl = 0;
        break;
      }
    }
    if(fl) printf("%s", "Y\n");
  }
}

#include <iostream>
using namespace std;
#define SL '\n'
#define IN cin
#define OU cout

int main()
{
    int n, m, sum = 0, maxi, paresn = 0, imparesn = 0, paresm = 0, imparesm = 0, ans;
    IN >> n >> m;
    int chests[n], keys[m];
    for(int i = 0; i < n; ++i) IN >> chests[i];
    for(int i = 0; i < m; ++i) IN >> keys[i];
    maxi = max(n, m);
    for(int i = 0; i < maxi; ++i){
        if(i < n){
            if(chests[i]%2 == 0) paresn += 1;
            else imparesn += 1;
        }
        if (i < m){
            if(keys[i]%2 == 0) paresm += 1;
            else imparesm += 1;
        }
    }
    ans = min(paresn, imparesm) + min(paresm, imparesn);
    OU << ans;
}

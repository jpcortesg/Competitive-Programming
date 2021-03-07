#include <stdio.h>

int a[1000005];

int main(){
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    for(int i=0; i<m; i++){
        int h;
        scanf("%d", &h);
        a[h] = 1;
    }
    int pos = 1;
    for(int i=0; i<k; i++){
        int u, v;
        scanf("%d%d", &u, &v);
        if(u == pos && (!a[u])) pos = v;
        else if(v == pos && (!a[v])) pos = u;
    }
    printf("%d", pos);
    return 0;
}

#define MAXN 6
#define ll long long
#define D(x) cout << #x << " " << x << endl
#define MINV -100000

int main(){
  int mat[MAXN][MAXN]; // O(1)
  for (int i = 0, i < MAXN, i++){ //  O(n * n) n ** 2
    for(int j = 0, j < MAXN, j++){ // O(n)
      cin >> mat[i][j] // O(1)
    }
  }

  ll maxi = MINV, sum = 0 // O(1)
  for (int x = 0, x <= MAXN - 3,  i++){//  O(n * n) n ** 2
    for(int j = 0, j <= MAXN, j++){ // O(n)
      sum = (mat[x][i] + mat[x][i + 1] + mat[x][i + 2])

    }
  }
}

map <string, int> m;
map["hola"] = 10
map["como"] = 20
map["hola"] = 15
cout << map["hola"] << " " << map["como"] << endl;

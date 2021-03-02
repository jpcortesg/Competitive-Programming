#include <iostream>
using namespace std;

int main()
{
int t;
cin >> t;
int a = 1;
while(t--)
{
    int n;
    int suma = 1;
    cin >> n;
    int run[n];
    for(int i = 0; i < n; i++){
        cin >> run[i];
        if (run[i] > suma)
            suma = run[i];
    }

    cout << "Case " << a << ":" << " " << suma << '\n' ;
    a += 1;
}
return 0;
}

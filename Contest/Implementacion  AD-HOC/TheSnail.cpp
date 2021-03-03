#include <bits/stdc++.h>

using namespace std;

#define SL '\n'
#define IN cin
#define OU cout

int main(){
  double al, dd, no, fa;
  while (IN >> al >> dd >> no >> fa && al != 0){
    int days = 0;
    double ala = 0.0;
    fa = fa*dd/100;
    while(true){
      days++;
      if(dd > 0){
        ala += dd;
        dd -= fa;
      }
      if (ala > al) break;
      ala -= no;
      if(ala < 0) break;
    }
    if(ala<0) cout << "failure on day " << days << endl;
    else if(ala>al) cout << "success on day " << days << endl;
  }
  return 0;
}

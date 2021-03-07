// #include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

const int MAXN = 10000+10;
const char* rev = "A###3##HIL#JM#O###2TUVWXY51SE#Z##8#";

char s[MAXN];

char transform(char ch){
  return 'A'<=ch && ch<='Z'?rev[ch-'A']:rev[ch-'0'+25];
}

int main(){
  while(cin>>s){
    int len=strlen(s);
    bool palind=true;
    bool mirr=true;
    for(int i=0; i<len; ++i){
      if(s[i]!=s[len-1-i]) palind=false;
      if(s[i]!=transform(s[len-1-i])) mirr=false;
    }
    if(palind&&mirr)cout<<s<<" -- is a mirrored palindrome.\n\n";
    else if(!palind&&mirr) cout<<s<<" -- is a mirrored string.\n\n";
    else if(palind&&!mirr) cout<<s<<" -- is a regular palindrome.\n\n";
    else cout<<s<<" -- is not a palindrome.\n\n";
  }

  return 0;
}

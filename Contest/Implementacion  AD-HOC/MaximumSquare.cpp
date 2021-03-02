#include <bits/stdc++.h>

using namespace std;

#define SL '\n'
#define IN cin
#define OU cout

int main()
{
  int tc;
  IN >> tc;
  while (tc--)
  {
    int n, arr[1000], cnt[1000];
    memset(cnt, 0, sizeof(cnt));

    IN >> n;
    for (int i = 1; i <= n; i++)
    {
      IN >> arr[i];
      cnt[arr[i]]++;
    }
    int c = INT_MIN, ans = INT_MIN;

    sort(arr + 1, arr + n + 1);
    for (int i = 1; i <= arr[n]; i++)
    {
      c = 0;
      for (int j = n; j >= 1; j--)
      {
        if (cnt[arr[j]] && arr[j] >= i)
        {
          c++;
        }
        else
          break;
      }
      if (c >= i)
      {
        ans = max(ans, i);
      }
    }
    OU << ans << SL;
  }
}
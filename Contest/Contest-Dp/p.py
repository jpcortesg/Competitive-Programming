nDays = int(input())
sqc = input().split()
inf = 1000000

dp = [[0 for x in range(3)] for x in range(nDays+1)]

dp[0][0] = 0
dp[0][1] = 0
dp[0][2] = 0

for i in range(nDays+1):
    if i == 0: continue
    dp[i][0] = 1 + min(dp[i-1][0], min(dp[i-1][1], dp[i-1][2]))
    dp[i][1] = min(dp[i-1][0], dp[i-1][2]) if sqc[i-1] == '1' or sqc[i-1] == '3' else inf
    dp[i][2] = min(dp[i-1][0], dp[i-1][1]) if sqc[i-1] == '2' or sqc[i-1] == '3' else inf

print(min(dp[nDays][0], min(dp[nDays][1], dp[nDays][2])))

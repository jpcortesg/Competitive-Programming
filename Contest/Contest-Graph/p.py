cont = 0

def dfs(v, u, g, n):
    for i in range(len(g[u])):
        next = g[u][i]
        if not v[next]:
            v[next] = True
            g = dfs(v, next, g, n)

    for i in range(n):
        if not v[i]:
            g[u].append(i)
            g[i].append(u)
            print(i, u)

    return g

n, p = map(int, input().split())
g = [[] for i in range(n)];
visited = [False for i in range(n)]

for i in range(p):
    x, y = map(int, input().split())
    g[x].append(y)
    g[y].append(x)

print(g)

for i in range(n):
    visited[i] = True
    # help = visited[:]
    g = dfs(visited, i, g, n)
    # visited = help[:]

print(g)

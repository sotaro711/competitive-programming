# 幅優先探索
from collections import deque


N, M = map(int, input().split())
# edges: 辺の情報をまとめたもの
edges = [list(map(int, input().split())) for _ in range(M)]

# 頂点1からxまでの最短距離長をdist[x] = ?に初期化
# キューに頂点１を追加し、dist[1] = 0にする
# キューが空になるまで以下を繰り返す
#   キューの先頭要素posを取得し、それを削除する
#   posと隣接する全ての未確定頂点toに対し、「dist[to] = dist[pos] + 1 に変更した後、キューにtoを追加する」という操作を行う

# 隣接リストを作成
G = [ list() for _ in range(N+1) ]
# print(G)
for a, b in edges:
    G[a].append(b)
    G[b].append(a)
# print(G)

# 幅優先探索の初期化
dist = [-1] * (N+1)
dist[1] = 0
Q = deque()
Q.append(1)
# print("dist: ", dist)
# print("Q: ", Q)

# 幅優先探索
while len(Q) >= 1:
    pos = Q.popleft()
    for nex in G[pos]:
        if dist[nex] == -1:
            dist[nex] = dist[pos] + 1
            Q.append(nex)

# print(dist)
for i in range(1, N+1):
    print(dist[i])
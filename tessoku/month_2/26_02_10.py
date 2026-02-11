# import sys

# sys.setrecursionlimit(120000)

# N, M = map(int, input().split())
# edges = [ list(map(int, input().split())) for _ in range(M) ] 
# # print(edges)

# # 深さ優先探索
# # pos: 現在位置
# # visited[x]: は頂点xが青色かどうかを示す真偽地
# # 
# def dfs(pos, G, visited):
#     visited[pos] = True
#     for i in G[pos]:
#         if visited[i] == False:
#             dfs(i, G, visited)


# # 隣接リストの作成
# G = [ list() for _ in range(N + 1) ]
# for a, b in edges:
#     G[a].append(b)
#     G[b].append(a)
# # print(G)

# visited = [False] * (N+1)
# dfs(1, G, visited)

# answer = True
# for i in range(1, N+1):
#     if visited[i] == False:
#         answer = False

# if answer == True:
#     print("The graph is connected.")
# else:
#     print("The graph is not connected.")

# はば優先探索
N, M = map(int, input().split())
edges = [ list(map(int, input().split())) for _ in range(M) ]
print(edges)


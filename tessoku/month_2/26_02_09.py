# from collections import deque
# import heapq


# Q = int(input())
# queries = [ input().split() for _ in range(Q) ]

# # deque()は末尾と最初の要素にアクセスするのが早い
# T = []
# for q in queries:
#     if q[0] == '1':
#         heapq.heappush(T, int(q[1]))
#     if q[0] == '2':
#         # T[0]は優先度付きキューの最小値となっている
#         print(T[0])
#     if q[0] == '3':
#         heapq.heappop(T)

# Q = int(input())
# queries = [ input().split() for _ in range(Q) ]

# Map = {}
# for q in queries:
#     if q[0] == '1':
#         Map[q[1]] = q[2]
#     if q[0] == '2':
#         print(Map[q[1]])

N, M = map(int, input().split())
# A = [None] * (M+1)
# B = [None] * (M+1)
# for i in range(1, M+1):
#     A[i], B[i] = map(int, input().split())
# print(A, B)
edges = [ list(map(int, input().split())) for _ in range(M) ]
# print(edges)

# 隣接リストの作成
# G[i]は頂点iに対する隣接する頂点が入ります
# 頂点には番号がついていて、そこに隣接するリストを作成するのでインデックスを合わせたN+1でok
G = [ list() for _ in range(N+1) ]
for a, b in edges:
    G[a].append(b)
    G[b].append(a)
# print(G)

# 出力
for i in range(1, N+1):
    # print(str(i) + ":" + "{" + str(G[i]) + "}")
    output = ''
    output += str(i)
    output += ': {'
    # 区切り文字.join(文字列の集まり)
    output += ','.join(map(str, G[i]))
    output += '}'
    print(output)
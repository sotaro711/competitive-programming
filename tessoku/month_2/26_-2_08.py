# from collections import deque


# Q = int(input())

# # クエリ１：xという題名の本を机の一番上本を机の一番上に積む机の一番上に積む
# # 2：一番上に積まれている本の題名を答える
# # 3：一番上に積まれている本上上に積まれている本を机から取り出す
# # Qは先入先出

# S = deque()
# # リスト内包表記
# querues = [ input().split() for _ in range(Q) ]
# for q in querues:
#     if q[0] == "1":
#         S.append(q[1])
#     if q[0] == "2":
#         print(S[-1])
#     if q[0] == "3":
#         S.pop()

# from collections import deque


# Q = int(input())
# queries = [ input().split() for _ in range(Q) ]
# # print(queries)
# S = deque()

# for q in queries:
#     if q[0] == "1":
#         S.append(q[1])
#     if q[0] == "2":
#         print(S[0])
#     if q[0] == "3":
#         S.popleft()

# import sys


# N, S = map(int, input().split())
# A = list(map(int, input().split()))

# dp = [[None] * (S+1) for _ in range(N+1)]

# # i=0の時
# dp[0][0] = True
# for j in range(1, S+1):
#     dp[0][j] = False

# # i=1以上の時
# # Sにする方法は
# for i in range(1, N+1):
#     for j in range(0, S+1):
#         # 作りたいカード(j)がA[i]で作れない時
#         if j < A[i-1]:
#             # 作りたいカードがA[i-1]で作られている場合
#             if dp[i-1][j] == True:
#                 dp[i][j] = True
#             else:
#                 dp[i][j] = False
    
#         #　作りたいカード(j)がA[i]で作られる可能性がある時
#         # Aは[2,2,3]でA[3-1]=A[2]=3
#         # dp[2][4]=Trueより4+3で7になるからok
#         if j >= A[i-1]:
#             if dp[i-1][j] == True or dp[i-1][j-A[i-1]]:
#                 dp[i][j] = True
#             else:
#                 dp[i][j] = False

# if dp[N][S] == True:
#     print("Yes")
# else:
#     print("No")

# dp[N][S]の時はどのカードを使いましたか？
# カードが作れない場合
# if dp[N][S] == False:
#     print("-1")
#     sys.exit()

# # カードが作れる場合
# # 答えを復元
# # Answerにjを作るのに使った数字を格納
# Answer = []
# Plase = S
# for i in reversed(range(1, N+1)):
#     if dp[i-1][Plase] == True:
#         Plase = Plase - 0
#     # カードdp[i-1][Place]=Falseなのにdp[i][Plase]=Trueとなった
#     # => dp[i][Plase]を使った
#     else:
#         Plase = Plase - A[i-1]
#         Answer.append(i)
# # print(Answer)
# Answer.reverse()
# # print(Answer)

# print(len(Answer))
# Answer2 = [str(i) for i in Answer]
# print(" ".join(Answer2))



# ナップザック問題
# N, W = map(int, input().split())
# w = [None] * (N+1)
# v = [None] * (N+1)
# for i in range(1, N+1):
#     w[i], v[i] = map(int, input().split())
# print(w, v)

# # N = 1の時
# dp = [[ -10*15 ] * (W+1) for _ in range(N+1)]
# dp[0][0] = 0

# for i in range(1, N+1):
#     for j in range(0, W+1):
#         # 品物iが重すぎてWにはいらない場合
#         if j < w[i]:
#             dp[i][j] = dp[i-1][j]
#         # 品物が入る可能性がある時
#         if j >= w[i]:
#             # 品物i-1の時点で合計がjで、品物iを選ばない
#             # 品物i-1の時点で合計がj-w[i]で、品物iを選ぶとき
#             # どちら大きい方を選ぶ
#             dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i])

# print(max(dp[N]))

N, W = map(int, input().split())
w = [None] * (N+1)
v = [None] * (N+1)
for i in range(1, N+1):
    w[i], v[i] = map(int, input().split())

dp = [[ -10**15 ] * (W+1) for i in range(N+1)]
print(dp)

dp[0][0] = 0

for i in range(1, N+1):
    for j in range(0, W+1):
        # 品物A[i]が重くてjにはいらない場合
        if j < w[i]:
            dp[i][j] = dp[i-1][j]
        # 入る可能性がある時
        if j >= w[i]:
            # 前の時点での合計が重さのjでiを選ばない時
            # 前の時点で合計がj-w[i]でiを選ぶ
            # 大きい方を選ぶ
            dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i])

print(max(dp[N]))


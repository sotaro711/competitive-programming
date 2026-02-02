# N = int(input())

# for x in [9,8,7,6,5,4,3,2,1,0]:
#     wari = 2**x
#     # デフォルトはprint(値, end='\n')となっている
#     print((N // wari) % 2, end='')

# print("")

# N, K = map(int, input().split())

# ans = 0
# for i in range(1, N+1):
#     for j in range(1, N+1):
#         # for k in range(1, N+1):
#         #     if i + j + k == K:
#         #         ans += 1
#         # 三重ループO(n**3)でTLE確定
#         # i, jを固定した瞬間に、条件を満たすkは一つしか存在しない
#         # 2枚のカードが決まれば、残りの1枚も決まる
#         k = K - i - j
#         if 1 <= k < N+1:
#             ans += 1

# print(ans)


# 10日開催、5この質問
# N日目の来場者数A人
# 
N, Q = map(int, input().split())
A = list(map(int, input().split()))
L = []
R = []
for _ in range(Q):
    l, r = map(int, input().split())
    L.append(l)
    R.append(r)

# 累積和を計算
sum = [None] * (len(A)+1)
sum[0] = 0
sum[1] = A[0]
for i in range(2, len(A)+1):
    sum[i] = A[i-1] + sum[i-1]
# print(sum)

for i in range(0, Q):
    print(sum[R[i]] - sum[L[i]-1])

# print(A)
# print(L, R)



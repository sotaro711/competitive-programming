# 答えがx以下かを以下かを判定し、YesであればTrue, NoであればFalseを返す
# def check(x, K, N, A):
#     sum = 0
#     # 各機械はxで何個作れるか
#     for i in range(N):
#         sum += x // A[i]
#     if sum >= K:
#         return True
#     return False

    
# N, K = map(int, input().split())
# A = list(map(int, input().split()))

# left = 0
# right = 10 ** 9

# while left < right:
#     mid = (left + right) // 2
#     Answer = check(mid, K, N, A)

#     if Answer == True:
#         right = mid
#     elif Answer == False:
#         left = mid + 1

# print(left)

# 単調増加関数なので二分探索ができる
N = int(input())
def f(x):
    return x*x*x + x

# Nを二分探索する
# 連続値の方程式を整数で解こうとしまっていた
left = 0.0
right = 100.0
# 無限ループしてしまう
# while left < right:
#     mid = (left + right) / 2
#     val = f(mid)
#     if val > N:
#         right = mid
#     else:
#         left = mid
# 区間幅が100 / 2**nで、n = 20の時1に近いので誤差が収まる

for _ in range(20):
    mid = (left + right) / 2
    val = f(mid)
    if val > N:
        right = mid
    else:
        left = mid


print(mid)



# D日に渡ってイベント開催
# N人出席
# 参加者iはLi日目からRi日目まで
# 前日比の配列を作る
# 累積和を求める => その日いる人数となる

# D = int(input())
# N = int(input())
# L = []
# R = []
# for _ in range(N):
#     l, r = map(int, input().split())
#     L.append(l)
#     R.append(r)
# # print(L, R)

# # 比の配列
# hi = [0] * (D+2)
# for i in range(N):
#     hi[L[i]] += 1
#     hi[R[i]+1] -= 1
# # print(hi)

# # 累積和
# Answer = [None] * (D+1)
# Answer[0] = 0
# for i in range(1, D+1):
#     Answer[i] = Answer[i-1] + hi[i]
# # print(Answer)

# for i in range(1, D+1):
    # print(Answer[i])

# N, X = map(int, input().split())
# A = list(map(int, input().split()))


# left = 0
# right = N-1
# while left <= right:
#     mid = (left + right) // 2
#     # print(mid)
#     if A[mid] == X:
#         print(mid+1)
#         break
#     if X < A[mid]:
#         right = mid - 1
#     if X > A[mid]:
#         left = mid + 1

N = int(input())
A = list(map(int, input().split()))
Q = int(input())
X = []
for _ in range(Q):
    x = int(input())
    X.append(x)

print("A", A)
print("X", X)

def sort(arr):
    for i in range(1, N):
        exchange(arr, i)
    return arr

def exchange(arr,i):
    tmp = arr[i]
    for j in range(i-1, -1, -1):
        if arr[j] > tmp:
            arr[j+1] = arr[j]
        else:
            arr[j+1] = tmp
            break
    else:
        arr[0] = tmp

sorted_arr = sort(A)

# AにはXより小さい数字が何個ありますか？
for i in X:
    left = 0
    right = len(sorted_arr)
    while left < right:
        mid = (left + right) // 2
        if sorted_arr[mid] < i:
            left = mid + 1
        else:
            right = mid
    print(left)
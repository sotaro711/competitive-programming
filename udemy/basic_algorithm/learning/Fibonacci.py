# 1, 1, 2, 3, 5, 8, 13, 21, ...
# 前の項を足して次の数字にする

def fibonacci(n):
    ans = [0] * (n + 1)
    ans[1] = 1
    ans[2] = 1
    for i in range(2, n):
        ans[i+1] += ans[i] + ans[i-1]
    print(ans[-1])

fibonacci(35)

# ans = [0, 1, 1, 0, 0]
# ans

# 再帰関数：関数の中で異聞自身を呼び出す

def factorial(n):
    if n == 1:
        return 1
    return n * factorial(n-1)

# print(factorial(4))

# 分割統治法
# 与えられた問題を小さな部分問題に分割（divide）
# 部分問題を再帰的に解く (solve)
# 得られた部分問題の解を統合して解く (conquer)

def fib(n):
    if n == 0 or n == 1:
        return 1
    return fib(n-1) + fib(n-2)

for i in range(35):
    print(fib(i))

# フィボナッチはfib(n-1)とfib(n-2)に分解
# return fib(n-1) + fib(n-2) この部分で再帰的に統合
# 分割統治法で解くことができる

# 同じ問題を複数回計算しているので無駄が多い=>計算に時間がかかる

print(fib(35))
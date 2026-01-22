# 1, 1, 2, 3, 5, 8, 13, ...

# def fib_memo(n):
#     memo = [None] * (n + 1)

#     def _fib(n):
#         if n == 0 or n == 1:
#             return 1
#         if memo[n] != None:
#             return memo[n]
#         memo[n] = _fib(n-1) + _fib(n-2)
#         return memo[n]

#     return _fib(n)

# for i in range(35):
    # print(fib_memo(i)) 

def fib_dp(n):
    memo = [None] * n
    memo[0] = 1
    memo[1] = 1
    for i in range(2, n):
        memo[i] = memo[i-1] + memo[i -2]
    return memo

for i in fib_dp(35):
    print(i)


# 分割等理法
# 大きな問題を解くのに必要な小問題をトップダウンに求めていく
#　同じ問題を繰り返しといてしまう可能がある
# 大きな問題を解くのに全く必要のない小問題を解く必要がない


# 動的計画法
# 小問題をボトムアップに解いていき、保存、再利用して大きな問題を解決す 
# 同じ問題を２度解くことはない
# 大問題を解くのに全く関係のない小問題を記録してしまう可能性がある
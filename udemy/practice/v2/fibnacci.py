def fib(n):
    arr = []
    # arr[0] = 1
    # arr[1] = 1
    if n == 0 or n == 1:
        return 1
    # for i in range(2, n):
        # arr.append(arr[i-2] + arr[i-1])
    return fib(n-1) + fib(n-2)

ans = fib(35)
for i in range(35):
    ans = fib(i)
    print(ans)
# arr = []
# # arr[0] = 1
# # arr[1] = 1
# arr.append(1)
# arr.append(1)

# def fib(arr, n):
#     for i in range(2, n+1):
#         # arr[i] = fib(i-1) + fib(i-2)
#         arr.append(arr[i-1] + arr[i-2])
#     return arr[n]

# ans = fib(arr, 35)
# print(ans)

def fib(n):
    if n == 0 or n == 1:
        return 1
    return fib(n-1) + fib(n - 2)

for i in range(35):
    print(fib(i))



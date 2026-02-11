# N, X = map(int, input().split())
# A = list(map(int, input().split()))
# # print("A", A)

# for i in A:
#     if i == X:
#         print("Yes")
#         break
# else:
#     print("No")
# input(),split() : 文字列を空白で分割して、文字列のリストを作る


    # １枚ずつ選んで足した数がKになる組みが存在するならYes, それ以外はNo
    # ループが回るたびにNoが出てしまう
    # 

    # def add(arr1, arr2):
    #     for i in arr1:
    #         if check(arr2, i):
    #             return True
    #     return False


    # def check(arr2, i):
    #     for j in arr2:
    #         if i + j == K:
    #             print("Yes")
    #             # breakではなくreturnを使うと？
    #             return True
    #     return False


    # if add(P, Q):
    #     print("Yes")
    # else:
    #     print("No")

def all_search():
    N, K = map(int, input().split())
    P = list(map(int, input().split()))
    Q = list(map(int,input().split()))

    for i in P:
        for j in Q:
            if i + j == K:
                print("Yes")
                return
    print("No")

all_search()

# 疑似コードで問題解決を考える 
# => プログラミング言語で疑似コードを表現する方法ココードを表現する方法を考え表表現する方法を考える

# 計算量 => 時間計算量、領域計算量 (最悪の計算量を見積もる)

# O表記法
# O(n) => 入力データサイズと計算量が比例

# array = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
# array.sort() 
# print(array)



# 整列したいリストを引数に取る
# 左から一個ずつ比較、小さかったら左へ、大きかったら右へ,答えの配列に格納していく配列に格納していく

# 最小値を見つけて先頭と交換
# def sort(a):
#     ans = []
#     print(len(a))
#     for i in range(len(a)):  
#         min_value = min(a)
#         ans.append(min_value)
#         a.pop(min_value)
#     print(ans)

# ①未ソート部分から最小の要素の位置minを特定する
# 2. minの位置にある要素と未ソート部分の先頭要素を交換する

def sort(arr):
    for i in range(0, len(arr)-1):
        select_min(arr, i)

def select_min(arr, i):
    # 最小要素の位置を特定
    min = i
    for j in range(i + 1, len(arr)):
        if arr[min] > arr[j]:
            min = j
    arr[i], arr[min] = arr[min], arr[i]
org_list =  [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]

sort(org_list)
print(org_list)

# 未ソート部分の最小値を見つけるために, 
# 内側：i+1, i+2,..., n-1 => n-i-1回
# これをi = 0からn-2まで足す
# 1/2n^2 => O(n^2)


# カウンタ配列から得られる位置に要素を移動していくソート
# カウンタ配列の累積和を求め、カウンタ配列を更新
# 更新することによって得られる新たなカウンタ配列は、配列Aの移動先を表している

org_list = [17, 11, 11, 5, 14, 9, 6, 19, 4, 10, 1, 19, 13, 5, 0, 2, 13, 18, 7, 8] 

# カウンタ配列作成
def bucket_sort(arr):
    arrc = [0] * (max(arr)+1)
    #  カウンタ配列を求める
    for i in arr:
        arrc[i] += 1
    print("カウンタ配列", arrc)
    # 累積和を求める
    for j in range(1, len(arrc)):
         arrc[j] = arrc[j] + arrc[j-1]
    print("累積和", arrc)
    # ソート先配列を一つずつ代入
    arrs = [0] * len(arr)
    for i in reversed(arr):
        arrs[arrc[i]-1] = i
        arrc[i] -= 1
    return arrs

print(bucket_sort(org_list))

# 計算量
# n + n = O(n)
# 使用条件
# 配列の値が整数値　=> カウンタ配列の位置と対応させるため
# 配列の値の最大値が大きすぎない
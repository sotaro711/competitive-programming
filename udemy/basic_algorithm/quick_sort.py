# クイックソート
# ピボットを決定
# ピボットとそれ以外に分割
# ピボットを基準に、ピボット以上の要素とピボット未満の要素に分割

# ソート対象の配列をピボットを基準に２つの部分配列に分割（divide）
# 前方の部分配列に対してクイックソートを行う（solve）
# 広報の部分配列に対してクイックソートを行う（solve）
# 整列済み部分配列とピボットを連結して返す（Conquer）

org_list =  [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8] 

# def make_pivot(arr):
#     # ピボットとピボット以外に分割
#     pivot = org_list[0]
#     return arr[0], arr[0:]

# def use_pivot(arrf, arrb):
#     for i in range(1, len(arrb)):
#         if arrf[0] > arrf[i]:

def quick_sort(arr):
    if len(arr) < 2:
        return arr
    p = arr[0]
    arrf, arrb = divide(p, arr[1:])
    return quick_sort(arrf) + [p] + quick_sort(arrb)

# ピボットを基準に分割
def divide(p, arr):
    left = []
    right = []
    for i in arr:
        if i < p:
            left.append(i)
        else:
            right.append(i)
    return left, right

print(quick_sort(org_list))
print(org_list)

# 計算量
# O(n^2)(最悪なケース)
# O(nlogn)(平均的なケース)
# 最も高速なソートアルゴリズム
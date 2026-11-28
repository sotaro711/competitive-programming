# カウント配列を作る
# カウンタ配列の累積和をとった配列を作る
# 求めたい配列の後ろからソートしていく
# 累積和の配列のindexのにぶち込んで、累積和を一個減らす
# 繰り返す
def bucket_sort(arr):
    count = make_count(arr)
    prefix = make_prefix_sum(count)

    ans = [0] * len(arr)
    for i in range(len(arr)-1, -1, -1):
        ans[prefix[arr[i]]-1] = arr[i]
        prefix[arr[i]] -= 1

    print("答え: ", ans)
    
def make_count(arr):
    max = 0
    for i in arr:
        if max < i:
            max = i
    count = [0] * (max+1)

    for i in arr:
        count[i] += 1
    print("カウンタ配列: ", count)
    return count

def make_prefix_sum(arr):
    prefix = []
    prefix.append(arr[0])
    for j in range(1, len(arr)):
        prefix.append(arr[j] + prefix[j-1])
    print("累積和: ", prefix)
    return prefix


org_list =  [17, 11, 11, 5, 14, 9, 6, 19, 4, 10, 1, 19, 13, 5, 0, 2, 13, 18, 7, 8]
sample = [1,4,2,0,3,2,2,4]

bucket_sort(org_list)

# カウンタ配列性すう
# 配列の最大値によって長さがきまるので大きすぎない
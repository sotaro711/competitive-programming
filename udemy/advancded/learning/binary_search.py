# import random
# key = random.randint(1, 10)
# print(str(key) + "が含まれるかチェック")

# #解答①はこの下に記入
# org_list =  [1, 2, 5, 8, 10]

# # def search(arr):
# #     for i in range(0, len(arr)):
# #         if key == arr[i]:
# #             return i
# #     return None

# # print(search(org_list))

# # def binary_search(arr):
# #     left = 0
# #     right = len(arr)
# #     while left < right:
# #         mid = (left + right) // 2
# #         if arr[mid] == key:
# #             return mid
# #         elif arr[mid] > key:
# #             right = mid
# #         else:
# #             left = mid + 1
# #     return None

# # print(binary_search(org_list))

# def binary_search(arr):
#     left = 0
#     right = len(arr)
#     mid = (left + right) // 2
#     while left < right:
#         if arr[mid] == key:
#             return mid
#         elif arr[mid] > key:
#             right = mid
#         else:
#             left = mid + 1
#     return None

# list = [1, 2, 5, 8, 10]
# print(binary_search(list))

# ソート済みのみ使える
# 一定のルールでデータが格納されていると、そのルールを利用することで、問題の解決が容易に行える
# アルゴリズムの効率が良くなる
# データ構造とアルゴリズムの関係生

# 二分探索木
# どの接点も弧を二つ以下接点も弧を二つ以下しか持たない：二分木
# どの接点においても
# 左の子孫の値 <= 親の値 <= 右の子孫の値
# 二分探索ができる！

# タプルで表現
# (((1)7(9))12(()14(16)))
# Nodeクラス value / left / right
# データを挿入できるまで以下をくり返す
# 挿入するべき範囲に接点がある場合
# 接点と挿入するデータを比較する
# 接点の方が大きければ、挿入するべき範囲を右にずらす
# 接点の方が小さければ、挿入するべき範囲を左にずらす
# 挿入するべき範囲に接点がな位場合
# 挿入したいデータの値を持つ接点を新たに作って完了

class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

# このBinarySearchTreeクラスに、接点を挿入するinsert()メソッドを定義
# インスタンス.insert(5)とすると、その二分探索木に5が挿入されるような目挿入されるようなメソッドであるとする
# rootは一番上
class BinarySearchTree:
    # 初期化
    def __init__(self, root):
        self.root = Node(root)

    def insert(self, key):
        node = self.root
        while True:
            if node.value > key:
                if node.left is None:
                    node.left = Node(key)
                    return 
                node = node.left
            elif node.value <= key:
                if node.right is None:
                    node.right = Node(key)
                    return
                node = node.right
    
    def inorder(self, node):
        if node is None:
            return 
        else:
            self.inorder(node.left)
            print(node.value)
            self.inorder(node.right)

    # データを探索できるまで処理を繰り返す
    # 接点と探索するデータを比較する
    # 接点と等しければYesと出力して探索を終了
    # 接点の方が大きければ探索範囲を左に、小さければ右に
    # 探索範囲に接点がなければNoを出力

    def search(self, key):
        node = self.root
        while True:
            if node.value == key:
                print("yes")
                return
            elif node.value > key:
                node = node.left
            else:
                node = node.right
            if node is None:
                print("no")
                return
            
    # 削除メソッド
    # 探索を行い、削除対象の接点を見つける
    # 削除対象の接点の子が0個の場合
    #   削除対象の接点を削除する
    # 削除対象の接点が1個の場合
    #   削除対象の接点の場所を、削除対象の接点の部分木で置き換える
    # 削除対象の接点の子が２個の場合
    #   削除対象の節点のみぎの部分木の最小値mを削除して、削除対象の節点をmで上書きする

    def delete(self, key):
        node = self.root

        while True:
            if node is None:
                print("削除対象の接点がありません")
                return
            
        # 削除対象の接点が見つかった時の処理
        if node.value == key:
            # 子を持たない場合
            if node.left is None and node.right is None:
                # 接点が左の子なら
                if flag == "left": 
                    parent.left = None
                # 接点が右の子なら
                else:
                    parent.right = None
            
            # 子を一つ持ち、それが右の子の場合
            elif node.left is None:
                

        # 削除対象の節点の探索と親子の更新
        parent = node
        if node.value > key:
            node = node.left
            flag = "left"
        else:
            node = node.right
            flag = "right"


t = BinarySearchTree(7)
t.insert(3)
t.insert(9)
t.insert(1)
t.insert(5)
t.search(5)
t.search(8)
t.search(1)

# 中間順巡回　=> 昇順に表示
# 左の部分着をinorderで中間順巡回
# 根を出力
# 右の部分木をinorder中間順巡回

# import random
# key = random.randint(1, 10)
# print(str(key) + "が含まれているかチェック")

# 線形探索
# def search(arr):
#     for i in range(0, len(arr)):
#         if arr[i] == key:
#             return i
#     return None
        
     
# list =  [1, 2, 5, 8, 10] 
# print(search(list))

# 二分探索
# midを作って探索範囲を絞る

# def binary_search(arr):
#     left = 0
#     right = len(arr)
#     while left < right:
#         mid = (left + right) // 2
#         if arr[mid] == key:
#             return mid
#         elif arr[mid] > key:
#             right = mid
#         else:
#             left = mid + 1
#     return None

# list =  [1, 2, 5, 8, 10] 
# print(binary_search(list))

# ソート済みなので使えた
# 左の子の値 <= 親の値 <= 右の子の値

class Node:
    # 初期化関数
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

class BinarySearchTree:
    def __init__(self, root):
        self.root = Node(root)

    # 挿入
    # 挿入できるまで繰り返す
    # 挿入できる接点がある場合
    # 節点と挿入するデータを比較する
    #   節点の方が大きければ挿入する範囲を右に移す
    #   節点の方が小さければ、挿入する範囲を左に移す
    # 挿入するべき範囲に接点がない場合
    #   挿入したいデータの値を持つ接点を新たに作って完了
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

    # 中間順巡回
    # 再帰的な処理
    # 左の部分木を中間順巡回する
    # 根を出力
    # 右の部分木を中間順巡回
    def inorder(self, node):
        if node is None:
            return
        else:
            self.inorder(node.left)
            print(node.value)
            self.inorder(node.right)

    # search
    # データを探索できるまで以下の処理を繰り返す
    # 節点探索するデータを比較する
    #   節点と等しければyesと出力
    #   データが接点より小さかったら左へ
    #   データが接点より大きかったら右へ
    # 探索範囲に節点がなければnoと出力

    def search(self, key):
        node = self.root
        while True:
            if node.value == key:
                print("yes")
                # while Trueなのでreturnしないと無限に回り続ける
                return
            elif node.value > key:
                node = node.left
            else:
                node = node.right
            if node is None:
                print("no")
               # while Trueなのでreturnしないと無限に回り続ける 
                return  
            
    def delete_min(self, node):
        parent = node
        # 右の部分木
        tmp = node.right
        count = 0
        # 右の部分木の最小値を探す
        while tmp.left is not None:
            parent = tmp
            tmp = tmp.left
            count += 1
            # 右の部分木の内容によって削除方法の場合分け
            # 削除対象の右の子が最小値なら
            if count == 0:
                parent.right = tmp.right
            else:
                parent.left = tmp.right
            # 最小値のtmpを返す
            return tmp 
    
    # 削除
    # 探索を行い、削除対象の節点を見つける
    # 削除対象の節点の子が0この場合
    #   削除対象の節点を削除する
    # 削除対象の接点の子が１個の場合
    #   削除対象の接点の場所を、削除対象の接点の部分着で置き換える
    # 削除対象の接点の子が２個の場合
    #   削除対象の接点の右の部分木の最小値mを削除して、削除対象の節点をmで上書きする

    def delete(self, key):
        node = self.root

        while True:
            if node is None:
                print("削除対象の接点がありません")
                return
            
            # 削除対象の接点が見つかった時
            if node.value == key:
                # 子を持たない場合
                if node.left is None and node.right is None:
                    # 接点が左の子なら
                    if flag == "left":
                        parent.left = None
                    # 右の子なら
                    else:
                        parent.right = None
                
                # 子を一つ持ち、それが右の子の場合
                elif node.left is None:
                    if flag == "left":
                        parent.left = node.right
                    else:
                        parent.right = node.right
                
                # 子を一つ持ち、それが左の子である場合
                elif node.right is None:
                    if flag == "left":
                        parent.left = node.right
                    else:
                        parent.right = node.left
                
                # 子を二つ持つ場合
                else:
                    tmp = self.delete_min(node)
                    if flag == "left":
                        parent.left = tmp
                    else:
                        parent.right = tmp
                    # 削除対象の節点を右の部分木の最小値と置き換える
                    tmp.left = node.left
                    tmp.right = node.right





        # 削除対象の接点の探索と親子の接点の更新
        # 親のインスタンス情報
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
t.inorder(t.root)
t.search(1)
t.search(2342)
t.search(5)
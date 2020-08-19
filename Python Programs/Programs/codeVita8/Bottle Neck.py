class Node:

    def __init__(self, data):
        self.count = 1
        self.left = None
        self.right = None
        self.data = data

    def insert(self, data):
        if self.data:
            if data < self.data:
                if self.left is None:
                    self.left = Node(data)
                else:
                    self.left.insert(data)
            elif data > self.data:
                if self.right is None:
                    self.right = Node(data)
                else:
                    self.right.insert(data)
            else:
                self.count = self.count + 1
        else:
            self.data = data


tempList = []


def order(that):
    if that:
        order(that.left)
        if that.count > 0:
            tempList.append(that.data)
            that.count = that.count - 1
        order(that.right)


numberOfBottles = int(input())

bottlesNeckRadius = [int(x) for x in input().split(" ")]

root = None

for i in range(numberOfBottles):
    if i == 0:
        root = Node(bottlesNeckRadius[i])
    else:
        root.insert(bottlesNeckRadius[i])

answer = []
for _ in range(numberOfBottles):
    tempList.clear()
    order(root)
    if len(tempList) <= 0:
        break
    answer.append(tempList[len(tempList)-1])

print(len(answer))
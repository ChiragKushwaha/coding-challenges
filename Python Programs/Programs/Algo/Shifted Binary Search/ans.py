# O(log(n)) time | O(log(n)) space
def shiftedBinarySearch(array, target):
    return shiftedBinarySearchHelper(array, target, 0, len(array) - 1)

def shiftedBinarySearchHelper(array, target, left, right):
    if left > right:
        return -1
    middle = (left + right) // 2
    potentialMatch = array[middle]
    leftNum = array[left]
    rightNum = array[right]
    if target == potentialMatch:
        return middle
    elif leftNum <= potentialMatch:
        if potentialMatch > target >= leftNum:
            return shiftedBinarySearchHelper(array, target, left, middle - 1)
        else:
            return shiftedBinarySearchHelper(array, target, middle + 1, right)
    else:
        if potentialMatch < target <= rightNum:
            return shiftedBinarySearchHelper(array, target, middle + 1, right)
        else:
            return shiftedBinarySearchHelper(array, target, left, middle - 1)


# O(log(n)) time | O(1) space
def shiftedBinarySearch(array, target):
    return shiftedBinarySearchHelper(array, target, 0, len(array) - 1)

def shiftedBinarySearchHelper(array, target, left, right):
    while left <= right:
        middle = (left + right) // 2
        potentialMatch = array[middle]
        leftNum = array[left]
        rightNum = array[right]
        if target == potentialMatch:
            return middle
        elif leftNum <= potentialMatch:
            if potentialMatch > target >= leftNum:
                right = middle - 1
            else:
                left = middle + 1
        else:
            if potentialMatch < target <= rightNum:
                left = middle + 1
            else:
                right = middle - 1

    return -1

# O(B+S) time | O(B+S) space
def smallestSubstringContaining(bigString, smallString):
    targetCharCounts = getCharCounts(smallString)
    subStringBounds = getSubStringBounds(bigString, targetCharCounts)
    return getStringFromBounds(bigString, subStringBounds)

def getSubStringBounds(string, targetCharCounts):
    subStringBounds = [0, float("inf")]
    subStringCharCounts = {}
    numUniqueChars = len(targetCharCounts.keys())
    numUniqueCharsDone = 0
    leftIdx = 0
    rightIdx = 0
    while rightIdx < len(string):
        rightChar = string[rightIdx]
        if rightChar not in targetCharCounts:
            rightIdx += 1
            continue
        increaseCharCount(rightChar, subStringCharCounts)
        if subStringCharCounts[rightChar] == targetCharCounts[rightChar]:
            numUniqueCharsDone += 1
        while numUniqueCharsDone == numUniqueChars and leftIdx <= rightIdx:
            subStringBounds = getCloserBounds(leftIdx, rightIdx, subStringBounds[0], subStringBounds[1])
            leftChar = string[leftIdx]
            if leftChar not in targetCharCounts:
                leftIdx += 1
                continue
            if subStringCharCounts[leftChar] == targetCharCounts[leftChar]:
                numUniqueCharsDone -= 1
            decreaseCharCount(leftChar, subStringCharCounts)
            leftIdx += 1
        rightIdx += 1
    return subStringBounds

def getStringFromBounds(string, bounds):
    start, end = bounds
    if end == float("inf"):
        return ""
    return string[start: end+1]

def getCloserBounds(idx1, idx2, idx3, idx4):
    return [idx1, idx2] if idx2 - idx1 < idx4 - idx3 else [idx3, idx4]

def getCharCounts(string):
    charCounts = {}
    for char in string:
        incraseCharCount(char, charCounts)
    return charCounts

def increaseCharCount(char, charCounts):
    if char not in charCounts:
        charCounts[char] = 1
    charCounts[char] += 1

def decreaseCharCount(char, charCounts):
    charCounts[char] -= 1

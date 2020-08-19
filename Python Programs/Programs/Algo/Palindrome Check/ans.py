# O(n^2) time | O(n) space
# def isPalindrome(string):
#     reverseString = ""
#     for i in reversed(range(len(string))):
#         reverseString += string[i]
#     return string == reverseString

# O(n^2) time | O(n) space
# def isPalindrome(string):
#     reverseChars = []
#     for i in reversed(range(len(string))):
#         reverseChars.append(string[i])
#     return string == "".join(reverseChars)

# O(n) time | O(n) space
# def isPalindrome(string, i = 0):
#     j = len(string) - 1 - i
#     return True if i >= j else string[i] == string[j] and isPalindrome(string, i+1)

# Tail recursion solution
# same time complexity as above space complexity may or may not be O(1)
# def isPalindrome(string, i=0):
#     j = len(string) - 1 - i
#     if i >= j:
#         return True
#     if string[i] != string[j]:
#         return False
#     return isPalindrome(string, i + 1)

# O(n) time | O(1) space
def isPalindrome(string):
    leftIdx = 0
    rightIdx = len(string) - 1
    while leftIdx < rightIdx:
        if string[leftIdx] != string[rightIdx]:
            return False
        leftIdx += 1
        rightIdx -= 1
    return True


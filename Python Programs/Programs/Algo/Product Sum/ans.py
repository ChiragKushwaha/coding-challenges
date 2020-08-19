# O(n) time | O(d) space
# d -> depth of the call stack
def productSum(array, multiplier=1):
    sum = 0
    for element in array:
        if type(element) is list:
            sum = productSum(element, multiplier+1)
        else:
            sum += element
    return sum*multiplier

# O(n) time | O(n) space
def waterArea(heights):
    maxes = [0 for _ in heights]
    lefMax = 0
    for i in range(len(heights)):
        height = heights[i]
        maxes[i] = lefMax
        lefMax = max(lefMax, height)
    rightMax = 0
    for i in reversed(range(len(heights))):
        height = heights[i]
        minHeight = min(rightMax, maxes[i])
        if height < minHeight:
            maxes[i] = minHeight - height
        else:
            maxes[i] = 0
        rightMax = max(rightMax, height)
    return sum(maxes)

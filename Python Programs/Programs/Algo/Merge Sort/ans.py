# O(nLog(n)) time | O(nLog(n)) space
# def mergeSort(array):
#     if len(array) == 1:
#         return array
#     middleIdx = len(array)//2
#     leftHalf = array[:middleIdx]
#     rightHalf = array[middleIdx:]
#     return mergeSortedArrays(mergeSort(leftHalf), mergeSort(rightHalf))
#
# def mergeSortedArrays(leftHalf, rightHalf):
#     sortedArray = [None]*(len(leftHalf) + len(rightHalf))
#     k = i = j = 0
#     while i < len(leftHalf) and j < len(rightHalf):
#         if leftHalf[i] <= rightHalf[j]:
#             sortedArray[k] = leftHalf[i]
#             i += 1
#         else:
#             sortedArray[k] = rightHalf[j]
#             j += 1
#         k += 1
#     while i < len(leftHalf):
#         sortedArray[k] = leftHalf[i]
#         i += 1
#         k += 1
#     while j < len(rightHalf):
#         sortedArray[k] = rightHalf[j]
#         j += 1
#         k += 1
#     return sortedArray

# O(nLog(n)) time | O(n) space
def mergeSort(array):
    if len(array) <= 1:
        return array
    auxillaryArray = array[:]
    mergeSortHelper(array, 0, len(array) - 1, auxillaryArray)
    return array

def mergeSortHelper(mainArray, startIdx, endIdx, auxillaryArray):
    if startIdx == endIdx:
        return
    middleIdx = (startIdx + endIdx) // 2
    mergeSortHelper(auxillaryArray, startIdx, middleIdx, mainArray)
    mergeSortHelper(auxillaryArray, middleIdx + 1, endIdx, mainArray)
    doMerge(mainArray, startIdx, middleIdx, endIdx, auxillaryArray)

def doMerge(mainArray, startIdx, middleIdx, endIdx, auxillaryArray):
    k = startIdx
    i = startIdx
    j = middleIdx + 1
    while i <= middleIdx and j <= endIdx:
        if auxillaryArray[i] <= auxillaryArray[j]:
            mainArray[k] = auxillaryArray[i]
            i += 1
        else:
            mainArray[k] = auxillaryArray[j]
            j += 1
        k += 1
    while i <= middleIdx:
        mainArray[k] = auxillaryArray[i]
        i += 1
        k += 1
    while j <= endIdx:
        mainArray[k] = auxillaryArray[j]
        j += 1
        k += 1


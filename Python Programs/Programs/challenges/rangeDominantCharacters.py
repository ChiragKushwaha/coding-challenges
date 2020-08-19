stringInput = input()
mapInputString = {}
checkIfPresent = {}
for i in range(1, len(stringInput)+1):
    if stringInput[i-1] in checkIfPresent.keys():
        mapInputString[i] = checkIfPresent[stringInput[i-1]] + 1
        checkIfPresent[stringInput[i-1]] = checkIfPresent[stringInput[i-1]] + 1
    else:
        mapInputString[i] = 1
        checkIfPresent[stringInput[i - 1]] = 1
inputMatrix = []
# for i in range(2):
#     a = []
#     for j in range(C):
#          a.append(int(input()))
#     matrix.append(a)
print(checkIfPresent)
print(mapInputString)

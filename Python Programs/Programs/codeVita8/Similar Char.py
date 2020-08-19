lengthOfString = int(input())

inputString = input()

countOccurances = {}
for i in range(0, lengthOfString):
    if inputString[i] in inputString[:i]:
        pos = inputString[:i].rindex(inputString[i])
        countOccurances[i] = countOccurances[pos] + 1
    else:
        countOccurances[i] = 0
numberOfQueries = int(input())

queries = []

for _ in range(numberOfQueries):
    queries.append(int(input()))

for q in queries:
    print(countOccurances[q-1])
noOfTestCases = int(input())
for i in range(noOfTestCases):
    number, position = map(int, input().split(" "))
    print(position*2)

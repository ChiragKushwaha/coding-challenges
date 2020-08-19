inputString = input()
inputString = [i for i in inputString]
noOfTimes = int(input())
constC = int(input())
length = len(inputString)
for i in range(noOfTimes):
    inputString[(i+constC) % length], inputString[i % length]=inputString[i % length], inputString[(i+constC) % length]
print(''.join(inputString))
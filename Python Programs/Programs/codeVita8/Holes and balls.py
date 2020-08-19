numberOfHoles = int(input())
diameterOfHoles = [int(x) for x in input().split(" ")]
diameterOfHolesDict = {}
count = 1
for diameter in diameterOfHoles:
    diameterOfHolesDict[diameter] = count
    count = count + 1
# print(diameterOfHolesDict)
numberOfBalls = int(input())
diameterOfBalls = [int(x) for x in input().split(" ")]
diameterOfBallsDict = {}
indexHoles = list(diameterOfHolesDict)
for diameter in diameterOfBalls:
    diameterOfBallsDict[diameter] = 0
# print(diameterOfBallsDict)
for ball in diameterOfBallsDict.keys():
    for hole in diameterOfHolesDict.keys():
        if ball <= hole and diameterOfHolesDict.get(hole) != 0 and diameterOfBallsDict.get(ball) == 0:
            diameterOfBallsDict.update({ball: indexHoles.index(hole)+1})
            diameterOfHolesDict.update({hole: diameterOfHolesDict.get(hole)-1})
            # print("hole",diameterOfHolesDict)
answerList = [x for x in diameterOfBallsDict.values()]
for ans in answerList:
    print(ans, end=" ")





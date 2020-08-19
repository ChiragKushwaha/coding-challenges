numberOfParticipants = int(input())
totalTimeInSeconds = int(input())
dataOfParticipants = []
for _ in range(0, numberOfParticipants):
    participant = [int(s) for s in input().split(" ")]
    dataOfParticipants.append(participant)
twoSecondsTrack = [[] for _ in range(numberOfParticipants)]

for pos in range(1, totalTimeInSeconds-1, 2):
    for i in range(0, numberOfParticipants):
        everyTwoSeconds = (dataOfParticipants[i][pos-1]+dataOfParticipants[i][pos])*dataOfParticipants[i][8]
        if len(twoSecondsTrack[i]) > 0:
            length = len(twoSecondsTrack[i])
            twoSecondsTrack[i].append(everyTwoSeconds + twoSecondsTrack[i][length-1])
        else:
            twoSecondsTrack[i].append(everyTwoSeconds)


maxTrack = []
for pos in range(1, totalTimeInSeconds - 1, 2):
    temp = []
    for i in range(0, numberOfParticipants):
        temp.append(twoSecondsTrack[i][pos//2])
    maxTrack.append(max(temp))

winner = [0]*numberOfParticipants
pos = 0
for maxC in maxTrack:
    for i in range(0, numberOfParticipants):
        if twoSecondsTrack[i][pos] == maxC:
            winner[i] = winner[i]+1
    pos = pos + 1

print(winner.index(max(winner)) + 1)
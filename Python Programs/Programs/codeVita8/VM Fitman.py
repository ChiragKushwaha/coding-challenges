import math
initialCost = 100

coresInEachServer = int(input())

amountOfMemoryInGB = int(input())

noOfApplications = int(input())

information = []

for i in range(0, noOfApplications):
    cpuRequirementsInPercentage = float(input())
    memoryRequirementsInMb = int(input())
    information.append([cpuRequirementsInPercentage, memoryRequirementsInMb])

reservedCpuInPercentage = float(input())
reservedMemoryInMb = int(input())
for i in range(0, noOfApplications):
    information[i][0] = (information[i][0]/coresInEachServer + reservedCpuInPercentage)
    information[i][1] = (information[i][1]*coresInEachServer + reservedMemoryInMb)
minimum = 1000000000000
for i in range(0, noOfApplications):
    costPerHour = initialCost + (1.5/10000)*(math.pow(information[i][0], 3)) + 0.5*(information[i][1])
    if costPerHour < minimum:
        minimum = round(costPerHour)
print(minimum)
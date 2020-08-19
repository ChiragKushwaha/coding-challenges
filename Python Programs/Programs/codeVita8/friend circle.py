n = int(input())

inputFacts = input()

factsList = inputFacts.split(";")

inputQuestions = input()

questionsList = inputQuestions.split(";")

outputDict = {}

for fact in factsList:
    outputDict[fact[0]] = fact[1:]
print(outputDict)

questionsDict = {}
for que in questionsListList:
    questionsDict[fact[0]] = que[1:]

print(questionsDict)
def compressedString(message):
    count = 1
    ans = ""
    if len(message) == 1:
        return message
    else:
        for i in range(len(message)-1):
            if message[i] == message[i+1]:
                count += 1
                if i+1 == len(message)-1:
                    if count > 1:
                        ans += (message[i] + str(count))
                        count = 1
                    else:
                        ans += message[i]
            else:
                if count > 1:
                    ans += (message[i]+str(count))
                    count = 1
                else:
                    ans += message[i]
            if i == len(message)-2 and message[i] != message[i+1]:
                ans += message[i+1]

    return ans


message = input()
print(compressedString(message))
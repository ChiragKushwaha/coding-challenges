A = [int(x) for x in input().split()]
B = int(input())
count = 0
flag = False
for i in range(len(A)):
    for j in range(i,len(A)):
        check = 2*A[i] + A[j]
        if check >= B and not flag:
            if i == j:
                flag = True
                break
            count += len(A)-j
            break
    if flag:
        count += (len(A)-i)*(len(A)-i+1)//2
        break
print(count)
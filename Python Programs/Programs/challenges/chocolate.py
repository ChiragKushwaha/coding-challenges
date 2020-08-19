t = int(input())
arr = {}
for i in range(t):
    p, c = input().split(' ')
    arr[int(p)]=c
count =0
for i in sorted(arr.keys(),  reverse=True):
    count +=1
    if count <=2:
        print(arr[i])


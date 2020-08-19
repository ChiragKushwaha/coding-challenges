n=int(input())
arr=[]
flag =True
for i in range(n):
    l = [int(x) for x in input().split(' ')]
    arr.append(l)
    if i < n-1 :
        if not(sum(l) == 1 and l[i]==1 ) :
            flag = False
if(flag):
    print("IDENTITY")
else :
    print(" NOT IDENTITY")
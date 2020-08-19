# def triangle(o, n, ans, check):
#     # print(ans)
#     for i in range(1, n+1):
#         # print(ans[i-1])
#         for j in range(1, i*2):
#             if i == 1 or i == n or j == 1 or j == i*2-1:
#                 # print(1, end="")
#                 ans[o+i-1][o+j-1] = 1
#             else:
#                 # print(0, end="")
#                 ans[o+i-1][o+j-1] = 0
#         # print()
#     if check > 0:
#         triangle(o+2, n-4, ans, check-4)
#         # print(ans)
#     return
#
#
# t = int(input())
# for _ in range(t):
#     n = int(input())
#     ans = [[-1]*(n*2-1) for _ in range(n)]
#     # print(ans)
#     triangle(0, n, ans, n-4)
#     l=1
#     for a in ans:
#         print(" " * (n - l), end=" ")
#         for k in a:
#             if k != -1:
#                 print(k,end=" ")
#         print()
#         l += 1

string = "abacd"
for length in range(2, len(string) + 1):
    for i in range(0, len(string) - length + 1):
        j = i + length - 1
        print(length, i, j)
    print("--------------")

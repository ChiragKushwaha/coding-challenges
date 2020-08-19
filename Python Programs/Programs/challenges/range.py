# the numbers divisible by 3 or 5 between 0 - 10 are - 3, 5, 6, 10. product is 900.

# what is the product if the range is 500

n = 15
prod = 1
sub=1
for i in range(1,n+1):

    if i%3 == 0 or i%5 == 0:
        print(i)
        sub = sub * i

print(sub)
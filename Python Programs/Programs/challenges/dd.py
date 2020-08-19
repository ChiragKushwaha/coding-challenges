str = input()

for e in str:
    if 'A' <= e <= 'Z':
        str = str.replace(e, '')
    if e =='a' or e == 'e' or e=='i' or e=='i' or e=='o' or e=='u' :
        str = str.replace(e, '#')

print(str)
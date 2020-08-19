
ones = {0: 'Zero', 1: 'One', 2: 'Two', 3: 'Three', 4: 'Four', 5: 'Five', 6: 'Six',
        7: 'Seven', 8: 'Eight', 9: 'Nine'}
tens = {10: 'Ten', 11: 'Eleven', 12: 'Twelve', 13: 'Thirteen', 14: 'Fourteen',
        15: 'Fifteen', 16: 'Sixteen', 17: 'Seventeen', 18:'Eighteen', 19: 'Nineteen', 20: 'Twenty',30: 'Thirty',
        40: 'Forty', 50: 'Fifty', 60: 'Sixty', 70: 'Seventy', 80: 'Eighty', 90: 'Ninety'}


def one(s):
    return ones[int(s)]


def ten(s):
    if int(s) == 0:
        return ''
    elif 10 <= int(s) <= 19:
        return tens[int(s)]
    else:
        o = one(s[1])
        t = tens[int(s[0]+'0')]
        return t + " " + o


def hundred(s):
    if int(s):
        h = one(s[0]) + " Hundred"
        t = ten(n[1:])
        return h + " " + t
    return ''


def thousand(s):
    if int(s):
        th = s[0: -3]
        if len(th) == 1:
            th = one(th) + " Thousand"
        else:
            th = ten(th) + " Thousand"
        h = hundred(s[-3:])
        return th + " " + h
    return ''


def spell(s):
    if len(s) == 1:
        return one(s)
    elif len(s) == 2:
        return ten(s)
    elif len(s) == 3:
        return hundred(s)
    elif 4 <= len(s) <= 5:
        return thousand(s)
    else:
        return "Sorry i don't Know!!"


if __name__ == "__main__":
    n = input()
    print(spell(n))


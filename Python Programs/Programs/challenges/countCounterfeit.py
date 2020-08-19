def countCounterfeit(serialNumbers):
    total = 0
    for serialNumber in serialNumbers:
        if 10 <= len(serialNumber) <= 12:

            print(1, serialNumber)
            if serialNumber[:3].isalpha() and serialNumber[:3].isupper() \
                    and (serialNumber[0] != serialNumber[1] != serialNumber[2]) \
                    and (serialNumber[0] != serialNumber[2] != serialNumber[3]):
                print(2, serialNumber)
                if serialNumber[3:7].isnumeric() and 1900 <= int(serialNumber[3:7]) <= 2019:
                    print(3, serialNumber, int(serialNumber[3:7]))
                    currency = serialNumber[7: len(serialNumber) - 1]
                    if currency.isnumeric() and currency in ['10', '20', '50', '100', '200', '500', '1000']:
                        print(4, serialNumber, currency)
                        currency = int(currency)
                        if serialNumber[len(serialNumber)-1].isalpha() \
                                and serialNumber[len(serialNumber)-1].isupper():
                            print(5, serialNumber)
                            total += currency

    return total

# 5
# # A201550B
# # ABB19991000Z
# # XYZ200019Z
# # ERF200220
# # SCD203010T

serialNumber_count = int(input())
serialNumber =[]
for _ in range(serialNumber_count):
    serialNumber_item = input()
    serialNumber.append(serialNumber_item)
print(countCounterfeit(serialNumber))

lst = []
while True:
    num = input()
    if num == '0':
        break
    if num == num[::-1]:
        lst.append('yes')
    else:
        lst.append('no')

for bool in lst:
    print(bool)
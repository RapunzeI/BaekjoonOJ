T=eval(input())

lst = [True] * 10001
max = int(10000 ** 0.5)
for i in range(2, max + 1):
    if lst[i] == True:
        for k in range(i + i, 10001, i):
            lst[k] = False

for i in range(T):
    n = eval(input())
    a = n // 2
    b = a
    while lst[a] != True or lst[b] != True:
        a-=1
        b=n-a
    print(a, b)

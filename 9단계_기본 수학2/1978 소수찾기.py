N=eval(input())

b = True
cnt = 0
primeNum = map(int, input().split())
primeNum=list(primeNum)
for i in range(N):
    for j in range(2, primeNum[i]):
        if primeNum[i] % j == 0:
            b=False
            break
    if b ==True and primeNum[i] > 1:
        cnt+=1
    b = True
print(cnt)
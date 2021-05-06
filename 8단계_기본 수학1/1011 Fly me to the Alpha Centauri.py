T=int(input())

for i in range(T):
    x, y = map(int, input().split())
    distance = y - x
    i=1
    twiceCnt=0
    route=0
    cnt=0
    while distance>route:
        route+=i
        twiceCnt+=1
        if twiceCnt%2==0:
            i+=1
        cnt+=1
    print(cnt)
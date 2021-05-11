from math import sqrt
T = int(input())
for i in range(T):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    distanceBTWCenters = sqrt((x1 - x2)**2 + (y1 - y2)**2)
    if x1 == x2 and y1 == y2 and r1 == r2:
        print(-1)
    elif distanceBTWCenters > r1 + r2:
        print(0)
    elif distanceBTWCenters + min(r1, r2) == max(r1, r2):
        print(1)
    elif distanceBTWCenters + min(r1, r2) < max(r1, r2):
        print(0)
    elif distanceBTWCenters == r1 + r2:
        print(1)
    elif distanceBTWCenters < r1 + r2:
        print(2)
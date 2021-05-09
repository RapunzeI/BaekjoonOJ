point1 = list(map(int, input().split()))
point2 = list(map(int, input().split()))
point3 = list(map(int, input().split()))
point4 = [0, 0]

if point1[0] == point2[0]:
    point4[0] = point3[0]
elif point1[0] == point3[0]:
    point4[0] = point2[0]
elif point2[0] == point3[0]:
    point4[0] = point1[0]

if point1[1] == point2[1]:
    point4[1] = point3[1]
elif point1[1] == point3[1]:
    point4[1] = point2[1]
elif point2[1] == point3[1]:
    point4[1] = point1[1]

print(point4[0], point4[1])
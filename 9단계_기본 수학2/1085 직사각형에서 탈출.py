x, y, width, height = map(int, input().split())

minValue = 0
minWidth = width - x
minHeight = height - y

#직사각형을 크기가 같은 네 조각으로 자름
quad1 = (x**2 + y**2)**0.5 #왼쪽 아래
quad2 = ((width-x)**2 + y**2)**0.5 #오른쪽 아래
quad3 = (x**2 + (height-y)**2)**0.5 #왼쪽 위
quad4 = ((width-x)**2 + (height-y)**2)**0.5 #오른쪽 위

quad = [quad1, quad2, quad3, quad4]
minQuad = min(quad)

if minQuad == quad1:
    if x >= y:
        minValue = y
    else:
        minValue = x
elif minQuad == quad2:
    if minWidth >= y:
        minValue = y
    else:
        minValue = minWidth
elif minQuad == quad3:
    if x >= minHeight:
        minValue = minHeight
    else:
        minValue = x
elif minQuad == quad4:
    if minWidth >= minHeight:
        minValue = minHeight
    else:
        minValue = minWidth

print(minValue)
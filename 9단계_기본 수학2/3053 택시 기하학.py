import math
r = int(input())

euclidGmtry = math.pi * r**2
taxiGmtry = (2 * (r / math.sqrt(2)))**2

print(round(euclidGmtry, 6))
print(round(taxiGmtry, 6))
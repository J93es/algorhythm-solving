import sys
input = sys.stdin.readline

repeatNum = int(input())
coordinate = []

for repeat_ in range(repeatNum):
	coordinate.append(list(map(int, input().split(' '))))
coordinate = sorted(coordinate)

for i in range(repeatNum):
	print(coordinate[i][0], coordinate[i][1])
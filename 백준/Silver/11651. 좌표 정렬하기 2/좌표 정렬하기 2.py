import sys
input = sys.stdin.readline

coordinate = []
repeatNum = int(input())

for repeat_ in range(repeatNum):
	x, y = map(int, input().split(' '))
	coordinate.append([y, x])

coordinate.sort()

for i in range(repeatNum):
	print(coordinate[i][1], coordinate[i][0])
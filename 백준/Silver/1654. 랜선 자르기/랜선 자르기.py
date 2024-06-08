import sys
input = sys.stdin.readline

lenLst = []
haveNum, needNum = map(int, input().split(' '))

for repeat_ in range(haveNum):
	lenLst.append(int(input()))

lenLst.sort()
start = 1
end = sum(lenLst) // needNum

while start <= end:
	cnt = 0
	mid = (start + end) // 2
	for i in range(haveNum):
		cnt += lenLst[i] // mid
	if cnt >= needNum:
		start = mid + 1
	else:
		end = mid - 1

print(end)
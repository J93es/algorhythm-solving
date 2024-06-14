def isTarget(num):
	if '666' in str(num):
		return bool(True)
	else:
		return bool(False)

num = 665
cnt = 0

targetCnt = int(input())
while cnt < targetCnt:
	if isTarget(num):
		cnt += 1
	num += 1

print(num - 1)
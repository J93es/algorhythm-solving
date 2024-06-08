from sys import stdin
input = stdin.readline



poketmonCnt, examCnt = map(int, input().split())
poketmonDict = dict()
poketmonDictRev = dict()

for idx in range(poketmonCnt):
	tmpStr = input().replace("\n", "")
	poketmonDict[idx] = tmpStr
	poketmonDictRev[tmpStr] = idx

for repeat_ in range(examCnt):
	tmpIn = input()
	if '0' <= tmpIn[0] <= '9':
		print(poketmonDict[int(tmpIn) - 1])
	else:
		print(poketmonDictRev[str(tmpIn).replace("\n", "")] + 1)
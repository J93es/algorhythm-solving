from sys import stdin
input = stdin.readline



pwCnt, findCnt = map(int, input().split())
pwDict = dict()

for idx in range(pwCnt):
	site, pw = input().replace("\n", "").split()
	pwDict[site] = pw

for repeat_ in range(findCnt):
	print(pwDict[input().replace("\n", "")])
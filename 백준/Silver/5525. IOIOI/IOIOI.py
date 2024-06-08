from sys import stdin
input = stdin.readline



def lenIOI(curIdx, string, stringLen):
	len = 0
	baseCmp = 'I'

	while curIdx < stringLen and baseCmp == string[curIdx]:
		len += 1
		curIdx += 1
		if baseCmp == 'O':
			baseCmp = 'I'
		else:
			baseCmp = 'O'

	if len % 2 == 0:
		len -= 1

	if len < 3:
		return 0
	else:
		return len



N = int(input())
stringLen = int(input())
string = str(input())
curIdx = 0
answer = 0
lenLst = []

while curIdx < stringLen:
	len = lenIOI(curIdx, string, stringLen)
	if len > 0:
		curIdx += len
		lenLst.append(len)
	else:
		curIdx += 1

for len in lenLst:
	tmp = len // 2 - N + 1
	if tmp > 0:
		answer += len // 2 - N + 1
print(answer)
import sys
input = sys.stdin.readline



def	nextIdx(len, curIdx, interval):
	if len <= curIdx:
		return (interval - 1) % len
	else:
		return (curIdx + interval - 1) % len




N, K = map(int, input().split(' '))
lst = [i for i in range(1, N + 1)]
answer = []
idx = 0
curLstLen = len(lst)

while curLstLen > 0:
	idx = nextIdx(curLstLen, idx, K)
	answer.append(str(lst[idx]))
	del lst[idx]
	curLstLen = len(lst)

print('<' + ", ".join(answer) + '>')
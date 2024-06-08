from sys import stdin
input = stdin.readline



coinCnt, targetMoney = map(int, input().split())
coinLst = []
answer = 0

for repeat_ in range(coinCnt):
	coinLst.append(int(input()))

coinLst.sort(reverse=True)

for money in coinLst:
	if targetMoney >= money:
		answer += targetMoney // money
		targetMoney %= money
	if targetMoney <= 0:
		break

print(answer)
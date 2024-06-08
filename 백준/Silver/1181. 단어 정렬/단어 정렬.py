wordsCnt = int(input())
answer = ''
answerLst = [[] for i in range(51)]

for i in range(wordsCnt):
	tmp = str(input())
	answerLst[len(tmp)].append(tmp)

for i in range(51):
	answerLst[i] = list(set(answerLst[i]))
	answerLst[i].sort()

for lst in answerLst:
	if lst != []:
		answer = answer + "\n".join(lst) + '\n'

print(answer.strip())
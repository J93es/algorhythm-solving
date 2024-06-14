repeatCnt = int(input())
for i in range(repeatCnt):
	targetNum = int(input())
	if targetNum < 0:
		continue
	elif targetNum == 0:
		print(1, 0)
	elif targetNum == 1:
		print(0, 1)
	else:
		zeroCntLst = []
		zeroCntLst.append(1)
		zeroCntLst.append(0)

		firstCntLst = []
		firstCntLst.append(0)
		firstCntLst.append(1)

		idx = 2
		while idx <= targetNum:
			zeroCntLst.append(zeroCntLst[idx - 2] + zeroCntLst[idx - 1])
			firstCntLst.append(firstCntLst[idx - 2] + firstCntLst[idx - 1])
			idx += 1
		print(zeroCntLst[idx - 1], firstCntLst[idx - 1])
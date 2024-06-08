from sys import stdin
input = stdin.readline



def makeNetworkLst(cpuCnt, networkCnt):
	networkLst = [[i] for i in range(cpuCnt + 1)]

	for repeat_ in range(networkCnt):
		network1, network2 = map(int, input().split())
		networkLst[network1].append(network2)
		networkLst[network2].append(network1)

	return networkLst


def makevirusLst(virusLst, targetIdx, networkLst):
	if targetIdx in virusLst:
		return

	virusLst.append(targetIdx)
	for i in networkLst[targetIdx]:
		makevirusLst(virusLst, i, networkLst)



cpuCnt = int(input())
networkCnt = int(input())

virusLst = []
networkLst = makeNetworkLst(cpuCnt, networkCnt)
makevirusLst(virusLst, 1, networkLst)

print(len(set(virusLst)) - 1)
Words = ['hallo', 'klempner', 'das', 'ist', 'fantastisch', 'fluggegecheimen']

Symbols = 257*[0]

AllSymbols = 0

Probability = 1

for i in range(len(Words)):
	AllSymbols += len(Words[i])

for i in range(len(Words)):
	for j in range(len(Words[i])):
		word = Words[i][j]
		Symbols[ord(word)] += 1

StopWord = input()

for i in range(len(StopWord)):
	for j in range(257):
		if (j == ord(StopWord[i])):
			Probability *= (Symbols[j]/AllSymbols)

print(Probability)

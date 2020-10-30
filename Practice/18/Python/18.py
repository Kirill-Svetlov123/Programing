Words = ['hallo', 'klempner', 'das', 'ist', 'fantastisch', 'fluggegecheimen']

Symbols = 257*[0]

AllSymbols = 0

for i in range(len(Words)):
	AllSymbols += len(Words[i])

for i in range(len(Words)):
	for j in range(len(Words[i])):
		word = Words[i][j]
		Symbols[ord(word)] += 1

StopWord = input()

for i in range(len(StopWord)):
	if (ord(StopWord[i]) == Symbols)
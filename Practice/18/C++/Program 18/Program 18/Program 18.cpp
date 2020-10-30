#include <iostream>
#include <vector>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");

    string StopWord;
    double AllSymbols = 0;

    const vector <string> Words = { "hallo", "klempner", "das", "ist", "fantastisch", "fluggegecheimen" };

    vector <int> Symbols(257);

    for (int i = 0; i < Words.size(); i++)
    {
        string s = Words[i];
        AllSymbols += s.length();
        for (int j = 0; j < s.length(); j++)
        {
            int word = int(s[j]);
            Symbols[word] += 1;
        }
    }

    cout << "Введите стоп-слово: ";
    cin >> StopWord;

    double probability = 1;

    for (int i = 0; i < StopWord.length(); i++)
    {
        probability *= Symbols[int(StopWord[i])] / AllSymbols;
    }

    cout << probability;
}

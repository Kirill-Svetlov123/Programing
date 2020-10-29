#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");

	int k = 0, n = 37, max = -1, red = 0, black = 0, a;

	vector <int> NeVipali;
	NeVipali.resize(n);

	vector <int> ChastoVstrech(37);

	const string Probability = "z101010101001010101101010101001010101";

	for (int i = 0; i < n; i++)
	{
		NeVipali[i] = i;
	}


	while (k < 12)
	{
		cin >> a;

		if (a < 0 and a > -37) break;

		else if (a > 36 or a < -36) cout << "Введено не верное число!";

		else
		{

			for (int i = 0; i < 37; i++)
			{
				if (i == a)
				{
					ChastoVstrech[i]++;
				}
			}

			for (int i = 0; i < 37; i++)
			{
				if (ChastoVstrech[i] > max)
				{
					max = ChastoVstrech[i];
				}
			}

			for (int i = 0; i < 37; i++)
			{
				if (ChastoVstrech[i] == max)
				{
					cout << i << ' ';
				}
			}
			cout << '\n';

			for (int i = 0; i < n; i++)
			{

				if (NeVipali[i] == a)
				{
					NeVipali.erase(NeVipali.begin() + i);
					n--;
					break;
				}

			}


			for (int i = 0; i < n; i++)
			{
				cout << NeVipali[i] << ' ';
			}
			cout << '\n';

			for (int i = 0; i < 37; i++)
			{
				if (i == a and Probability[i] == '1') red++;
				else if (i == a and Probability[i] == '0') black++;
			}
			cout << red << ' ' << black << endl << endl;

		}
		k++;
	}
}
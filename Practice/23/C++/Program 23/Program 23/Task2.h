#ifndef Task_2
#define Task_2

double Task2(double x)
{
	double k = 1;
	double g;
	double sinx = 0;
	for (double i = 0; i < 5; i++)
	{
		g = 2 * i + 1;
		for (double j = 1; j <= g; j++)
		{
			k *= j;
		}
		sinx += pow(-1, i) * (pow(x, 2 * i + 1)) / k;
		k = 1;
	}
	return (sinx);
}

#endif
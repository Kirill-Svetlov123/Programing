#pragma once

int Task1(int n)
{
	int a = 1;
	for (int i = 1; i <= n; i++)
	{
		a *= i;
	}
	return a;
}
#include <bits/stdc++.h>

using namespace std;

template <class T>
T pollard_rho (T n, unsigned iterations_count = 100000)
{
	T
		b0 = rand() % n,
		b1 = b0,
		g;
	mulmod (b1, b1, n);
	if (++b1 == n)
		b1 = 0;
	g = gcd (abs (b1 - b0), n);
	for (unsigned count=0; count<iterations_count && (g == 1 || g == n); count++)
	{
		mulmod (b0, b0, n);
		if (++b0 == n)
			b0 = 0;
		mulmod (b1, b1, n);
		++b1;
		mulmod (b1, b1, n);
		if (++b1 == n)
			b1 = 0;
		g = gcd (abs (b1 - b0), n);
	}
	return g;
}

template <class T, class T2>
void factorize (const T & n, std::map<T,unsigned> & result, T2 unused)
{
	if (n == 1)
		;
	else
		// проверяем, не простое ли число
		if (isprime (n))
			++result[n];
		else
			// если число достаточно маленькое, то его разлагаем простым перебором
			if (n < 1000*1000)
			{
				T div = prime_div_trivial (n, 1000);
				++result[div];
				factorize (n / div, result, unused);
			}
			else
			{
				// число большое, запускаем на нем алгоритмы факторизации
				T div;
				// сначала идут быстрые алгоритмы Полларда
				div = pollard_monte_carlo (n);
				if (div == 1)
					div = pollard_rho (n);
				if (div == 1)
					div = pollard_p_1 (n);
				if (div == 1)
					div = pollard_bent (n);
				// придётся запускать 100%-ый алгоритм Ферма
				if (div == 1)
					div = ferma (n, unused);
				// рекурсивно обрабатываем найденные множители
				factorize (div, result, unused);
				factorize (n / div, result, unused);
			}
}


int main(){


    return 0;
}

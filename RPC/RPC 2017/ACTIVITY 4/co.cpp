#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

ulli phi (ulli n) {
	ulli result = n;
	for (int i=2; i*i<=n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	return result;
}

int main(){
  printf("%llu\n",phi(8));
return 0;
}

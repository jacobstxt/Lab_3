#include "Comb.h"


int factorial(int n) {
	int res = 1;
	for (int i = 2; i <= n; i++) {
		res *= i;
	}
	return res;
}

int A(int n, int k) {
	if (k > n) { return 0; }
	return factorial(n) / factorial(n - k);
}

int _A(int n, int k) {
	return pow(n, k);
}


int C(int n, int k) {
	if (k > n) { return 0; }
	return factorial(n) / (factorial(k)* factorial(n-k));
}

int _C(int n, int k) {
	return factorial(n + k - 1) / (factorial(k) * (factorial(n - 1)));
}



//алгоритм генерації наступної перестановки у лексикографічному порядку

int GenPerm(int* A, int n) {
	int i;
	for (i = n-2; i >= 0; i--) {
		if (A[i] < A[i + 1]) {
			break;
		}
	}

	if (i < 0) { return 0; }

	int j = n - 1;
	while (A[j] <= A[i]) 
	{ 
		j--;
	}
	my_swap(A[i], A[j]);
	sort_bubble(A,n,i+1,n);

	return 1;
}


//алгоритм генерації наступного сполучення у лексикографічному порядку

int GenComb(int* A, int n, int k) {
	int i = k - 1;
	while (i >= 0 && A[i] == n - k + i + 1) {
		i--;
	}

	if (i < 0) return 0;


	A[i]++;

	for (int j = i + 1; j < k; j++) {
		A[j] = A[j - 1] + 1;
	}

	return 1;
}


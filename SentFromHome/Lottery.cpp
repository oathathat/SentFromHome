#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 0, b = 0, m, n, i, j, k[20], p[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d", &k[i]);
	}
	if (n >= 1 && n <= 50000 && m >= 1 && m <= 20) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if (p[i] % 1000 == k[j]) {
					a++;
				}
			}
		}
	}
	for (i = 0; i < m; i++) {
		if (k[i] == k[i - 1]) {
			printf("ERROR");
			break;
		}
		else {
			if (i == m - 1)
				printf("%d", a);
		}

	}



	return 0;
}
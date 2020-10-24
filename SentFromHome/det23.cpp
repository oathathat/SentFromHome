#include<stdio.h>
#define _CRT_SECIRE_NO_WARNINGS
float det2(float, float, float, float);
float det3(float, float, float, float, float, float, float, float, float);

int main() {
	float a[3][3];
	int i, j, n;
	printf("Enter dimention of matrix 2 or 3 : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%f", &a[i][j]);
		}
	}
	if (n == 2)
		printf("Det = %.4f", det2(a[0][0], a[0][1], a[1][0], a[1][1]));
	else
		printf("Det = %.4f", det3(a[0][0], a[0][1], a[0][2], a[1][0], a[1][1], a[1][2], a[2][0], a[2][1], a[2][2]));

}

float det2(float a, float b, float c, float d) {
	return (a * d) - (b * c);
}
float det3(float a, float b, float c,
	float d, float e, float f,
	float g, float h, float i) {
	return (a * e * i) + (b * f * g) + (c * d * h) - (g * e * c) - (h * f * a) - (i * d * b);
}
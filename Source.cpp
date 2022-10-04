#include <stdio.h>

int toDigit(int A[], int a) {				//паттерн вычесления кол-ва знаков и запись их в массив
	int i, n;
	for (i = 0, n = a; n != 0; i++, n = n / 10);
	int k = i--;
	for (n = a; n != 0; n = n / 10, i--)
		A[i] = n % 10;
	return k;
}

int main() {
	int num;
	int FIRST[4], MANY[5];
	for (num = 5000; num <= 9999; num++) {		//линейный перебор чисел
		toDigit(FIRST, num);
		toDigit(MANY, 2 * num);
		if (FIRST[0] != MANY[2]) continue; //условия
		if (FIRST[0] != MANY[4]) continue;
		if (FIRST[3] != MANY[1]) continue;
		if (FIRST[2] == FIRST[3])continue;
		if (FIRST[2] == MANY[3])continue;
		if (FIRST[2] == MANY[0])continue;
		if (FIRST[1] == MANY[3])continue;
		printf("%d+%d=%d\n", num, num, 2 * num);		//вывод
	}
	getchar();
	

}
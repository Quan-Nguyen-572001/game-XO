//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>

//과제1-1
//int main(void) {
//	unsigned int x;
//	printf("x >> ");
//	scanf_s("%d", &x);
//	x = x | (0x1 << 2);
//	printf("%d", x);
//	return 0;
//}

//과제1-2
//int main(void) {
//	unsigned int x, k;
//	printf("x k >> ");
//	scanf_s("%u%u", &x, &k);
//	unsigned int mask = 0x1 << (k - 1);
//	x = x | mask;
//	printf("%u\n", x);
//	return 0;
//}

//과제2-1
//int main(void) {
//	unsigned int x;
//	printf("x >> ");
//	scanf_s("%u", &x);
//	x = x>>1;
//	x = x >> 1;
//	printf("3rd LSB = %d", x & 0x1);
//	return 0;
//}

//과제2-2
//int main(void) {
//	unsigned int x, k;
//	printf("x k >> ");
//	scanf_s("%u%u", &x, &k);
//	unsigned int mask, lsb;
//	mask = 0x1 << (k - 1);
//	lsb = (x&mask) >> (k - 1);
//	printf("%uth LSB = %u", k, lsb);
//	return 0;
//}

//과제3
//int main(void) {
//	double price;
//	printf("실수 입력>> ");
//	scanf_s("%lf", &price);
//	printf("prudct = %f\n", price);
//	double x = price;
//	scanf_s("%lf", &price);
//	x *= price;
//	printf("prudct = %f\n", x);
//	scanf_s("%lf", &price);
//	x *= price;
//	printf("prudct = %f\n", x);
//	return 0;
//}

//과제4
//int main(void) {
//	char ch1,ch2,ch3,ch4;
//	int up_cnt = 0;
//	printf(">> ");
//	scanf("%c%c%c%c", &ch1, &ch2, &ch3, &ch4);
//	up_cnt += 'A' <= ch1 && ch1 <= 'Z';
//	up_cnt += 'A' <= ch2 && ch2 <= 'Z';
//	up_cnt += 'A' <= ch3 && ch3 <= 'Z';
//	up_cnt += 'A' <= ch4 && ch4 <= 'Z';
//	printf("no. of uppercase letters = %d", up_cnt);
//	return 0;
//}

//과제5
//int main(void) {
//	int x;
//	printf("태어난 년도 >> ");
//	scanf_s("%d", &x);
//	printf("이 손님은 술을 마실 수 있다: %d", 1956<x&&x<=2002);
//	return 0;
//}
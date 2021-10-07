//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//#include <limits.h>

//과제1
//int main(void) {
//	for (int i = 1; i <= 5; i++) {
//		printf("컴퓨터공학도와 C언어는 애증의 관계이다\n");
//	}
//	return 0;
//}

//과제2
//int main(void) {
//	int a = 1;
//	for (int i = 1; i <= 10; i++) {
//		a *= 2;
//		printf("%d ", a);
//	}
//	return 0;
//}

//과제3
//int main(void) {
//	int mul=1;
//	int x;
//	for (int i = 1; i <= 5; i++) {
//		printf("정수를 입력하세요>> ");
//		scanf_s("%d", &x);
//		mul *= x;
//		printf("곱 = %d\n", mul);
//	}
//	return 0;
//}

//과제4
//int main(void) {
//	int k,x;
//	printf("k>> ");
//	scanf_s("%d", &k);
//	for (int i = 1; i <= 5; i++) {
//		printf("\n");
//		printf("정수를 입력하세요>> ");
//		scanf_s("%d", &x);
//		if (x % k == 0) {
//			printf("%d은(는) %d의 배수입니다.\n", x, k);
//		}
//		else {
//			printf("%d은(는) %d의 배수가 아닙니다.\n", x, k);
//		}
//	}
//	return 0;
//}

//과제5
//int main(void) {
//	int k, x, result;
//	printf("k>> ");
//	scanf_s("%d", &k);
//	printf("\n");
//	result = 0;
//	for (int i = 1; i <= 5; i++) {
//		printf("양의 정수를 입력하세요>> ");
//		scanf_s("%d", &x);
//		if (x > k || x == k) {
//			result += x;
//		}
//		else {
//			result -= x;
//		}
//		printf("%d\n", result);
//	}
//	return 0;
//}

//과제6
//int main(void) {
//	int min, x;
//	min = INT_MAX;
//	for (int i = 1; i <= 5; i++) {
//		printf("정수를 입력하세요>> ");
//		scanf_s("%d", &x);
//		if (min > x) {
//			min = x;
//		}
//	}
//	printf("최솟값은 %d입니다.", min);
//	return 0;
//}

//과제7
//int main(void) {
//	int k,x, count;
//	printf("k>> ");
//	scanf_s("%d", &k);
//	count = 0;
//	for (int i = 1; i <= 5; i++) {
//		printf("정수를 입력하세요>> ");
//		scanf_s("%d", &x);
//		if (x % k == 0) {
//			count += 1;
//		}
//	}
//	printf("%d의 배수는 %d개입니다.", k, count);
//	return 0;
//}

//과제8
//int main(void) {
//	int n, x, pos_cnt, zero, neg_cnt;
//	printf("n>> ");
//	scanf_s("%d", &n);
//	printf("\n");
//	pos_cnt = 0;
//	zero = 0;
//	neg_cnt = 0;
//	for (int i = 1; i <= n; i++) {
//		printf("정수를 입력하세요>> ");
//		scanf_s("%d", &x);
//		if (x > 0) {
//			pos_cnt += 1;
//		}
//		else if (x == 0) {
//			zero += 1;
//		}
//		else if(x<0) {
//			neg_cnt += 1;
//		}
//	}
//	printf("\n");
//	printf("양의 정수: %d개\n", pos_cnt);
//	printf("0 :       %d개\n", zero);
//	printf("음의 정수: %d개", neg_cnt);
//	return 0;
//}

//과제9
//int main(void) {
//	int n, k,x;
//	printf("n k>> ");
//	scanf_s("%d%d", &n, &k);
//	printf("\n");
//	bool exist = false;
//	for (int i = 1; i <= n; i++) {
//		printf("정수를 입력하세요>> ");
//		scanf_s("%d", &x);
//		if (x % k == 0)exist = true;
//	}
//	if (exist) {
//		printf("\n");
//		printf("%d의 배수가 입력되었습니다.", k);
//	}
//	else {
//		printf("\n");
//		printf("%d의 배수는 입력되지 않았습니다.", k);
//	}
//	return 0;
//}

//과제10
//int main(void) {
//	int n, k, d;
//	printf("n k d>> ");
//	scanf_s("%d%d%d", &n, &k, &d);
//	printf("%d\n", k);
//	for (int i = 1; i <= n - 1; i++) {
//		k += d;
//		printf("%d\n", k);
//	}
//	return 0;
//}
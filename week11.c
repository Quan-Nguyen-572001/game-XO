//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>

//과제1
//int main(void) {
//	int score, check;
//	printf("시험점수 결석일수>> ");
//	scanf_s("%d%d", &score, &check);
//	if (score >= 80 || check == 0) {
//		printf("S");
//	}
//	else if (score >= 60 && check <= 5) {
//		printf("S");
//	}
//	else {
//		printf("U");
//	}
//	return 0;
//}

//과제2
//int main(void) {
//	double weight, height, bmi;
//	printf("체중(kg) 키(cm) >> ");
//	scanf_s("%lf%lf", &weight, &height);
//	bmi = weight / ((height / 100) * (height / 100));
//	printf("BMI = %.2f\n", bmi);
//	if (bmi < 20.0) {
//		printf("저체중입니다.\n");
//	}
//	else if (bmi >= 25.0) {
//		printf("과체중입니다.\n");
//	}
//	else {
//		printf("표준체중입니다. \n");
//	}
//	return 0;
//}

//과제3
//int main(void) {
//	int a, b,big_num;
//	printf("a b>> ");
//	scanf_s("%d%d", &a, &b);
//	big_num = (a >= b) ? a : b;
//	printf("%d", big_num);
//	return 0;
//}

//과제4
//int main(void) {
//	int a, b, temp;
//	printf("a b>> ");
//	scanf_s("%d%d", &a, &b);
//	if (a <= b) {
//		printf("a = %d, b = %d", a, b);
//	}
//	else {
//		temp = a;
//		a = b;
//		b = temp;
//		printf("a = %d, b = %d", a, b);
//	}
//	return 0;
//}

//과제5
//int main(void) {
//	double x;
//	printf("x>> ");
//	scanf_s("%lf", &x);
//	if (x == (int)x) {
//		printf("x IS an integer");
//	}
//	else {
//		printf("x IS NOT an integer");
//	}
//	return 0;
//}

//과제6
//int main(void) {
//	int year;
//	printf("year = ");
//	scanf_s("%d", &year);
//	if (year % 4 == 0 && year%100==0) {
//		printf("%d is NOT leaf year", year);
//	}
//	else if (year % 100 == 0 && year % 400 == 0) {
//		printf("%d is a leaf year", year);
//	}
//	else if (year % 4 == 0) {
//		printf("%d is a leaf year", year);
//	}
//	else {
//		printf("%d is NOT a leaf year", year);
//	}
//	return 0;
//}

//과제 7
//int main(void) {
//	char ch;
//	printf("input a character>> ");
//	scanf_s("%c", &ch,sizeof(ch));
//	if ('a' <= ch && ch <= 'z') {
//		ch -= 32;
//		printf("%c", ch);
//	}
//	else {
//		printf("%c", ch);
//	}
//	return 0;
//}

//과제 8
//int main(void) {
//	int a, b, c, temp;
//	printf("input 3 integers>> ");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a <= b && b <= c) {
//		printf("%d %d %d", c, b, a);
//	}
//	else if (a <= c && c <= b) {
//		printf("%d %d %d", b, c, a);
//	}
//	else if (b <= a && a <= c) {
//		printf("%d %d %d", c, a, b);
//	}
//	else if (b <= c && c <= a) {
//		printf("%d %d %d", a, c, b);
//	}
//	else if (c <= a && a <= b) {
//		printf("%d %d %d", b, a, c);
//	}
//	else if (c <= b && b <= a) {
//		printf("%d %d %d", a, b, c);
//	}
//	return 0;
//}

//과제9-1
//int main(void) {
//	int a, b, c;
//	printf("세 변의 길이>> ");
//	scanf("%d%d%d", &a, &b, &c);
//	if ((a + b >= c && a - b <= c) && (b + c >= a && c - b <= a)) {
//		if (a == b && b == c) printf("정삼각형");
//		else if (b == c || a == b) printf("이등변삼각형");
//		else printf("삼각형");
//	}
//	else {
//		printf("삼각형이 아님");
//	}
//	return 0;
//}

//과제9-2
//int main(void) {
//	int l1, l2, l3,tmp;
//	printf("세 변의 길이>> ");
//	scanf("%d%d%d", &l1, &l2, &l3);
//	if(l1 > l2) { tmp = l1; l1 = l2; l2 = tmp; }
//	if (l2 > l3) { tmp = l2; l2 = l3; l3 = tmp; }
//	printf("%d %d %d", l1, l2, l3);
//	return 0;
//}
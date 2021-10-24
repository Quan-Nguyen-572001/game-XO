//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>

//과제1
//int main(void) {
//	int a, b;
//	double result;
//	printf("정수 두 개 입력>> \n");
//	scanf("%d%d", &a, &b);
//	result = a / (double)b;
//	printf("%d 나누기 %d는 %.2lf입니다",a,b,result);
//	return 0;
//}

//과제2
//int main(void) {
//	char ch1,ch2,ch3;
//	printf("문자 세 개 입력>> \n");
//	scanf("%c%c%c",&ch1,&ch2,&ch3 );
//	printf("입력 받은 문자는 ‘%c’, ‘%c’, ‘%c’입니다.", ch1, ch2, ch3);
//	return 0;
//}

//과제3
//int main(void) {
//	char ch1, ch2, ch3;
//	printf("카드 세 장의 이름>> ");
//	scanf("%c%c%c", &ch1, &ch2, &ch3);
//	printf("%c-%c-%c\n", ch1, ch2, ch3);
//	printf("%c-%c-%c\n", ch1, ch3, ch2);
//	printf("%c-%c-%c\n", ch2, ch1, ch3);
//	printf("%c-%c-%c\n", ch2, ch3, ch1);
//	printf("%c-%c-%c\n", ch3, ch1, ch2);
//	printf("%c-%c-%c\n", ch3, ch2, ch1);
//	return 0;
//}

//과제4
//int main(void) {
//	char str1[100], str2[100], str3[100];
//	printf("제목>> ");
//	scanf("%s", &str1);
//	printf("저자>> ");
//	scanf("%s", &str2);
//	printf("출판사>> ");
//	scanf("%s", &str3);
//	printf("제목은 %s, 저자는 %s, 출판사는 %s입니다.", str1, str2, str3);
//	return 0;
//}

//과제5
//int main(void) {
//	int a;
//	char str1[100],str2[100],str3[100],str4[100];
//	printf("주소>> ");
//	scanf("%d%s%s%s%s", &a, &str1,&str2,&str3,&str4);
//	printf("주소는 ‘(%d) %s %s %s %s' 입니다", a, str1, str2, str3, str4);
//	return 0;
//}

//과제 6
//int main(void) {
//	char str1[100],str2[100], str3[100],str4[100], str5[100];
//	printf("수식을 입력하세요>> ");
//	scanf("%s%s%s%s%s", &str1, &str2, &str3, &str4, &str5);
//	int a = atoi(str1);
//	int b = atoi(str3);
//	int c = atoi(str5);
//	int result = a - b * c;
//	printf("%d - %d * %d = %d 입니다", a, b, c,result);
//	return 0;
//}
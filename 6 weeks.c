//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>

//과제1
//int main(void) {
//	char ch1 = 'A';
//	char ch2 = 'Z', ch3 = 'a', ch4 = 'z', ch5 = '0', ch6 = '9';
//	printf("문자 '%c'의 아스키코드 값은 %d\n", ch1, ch1);
//	printf("문자 '%c'의 아스키코드 값은 %d\n", ch2, ch2);
//	printf("알파벳 대문자의 아스키코드 값 범위는 %d ~ %d\n", ch1, ch2);
//	printf("\n");
//	printf("문자 '%c'의 아스키코드 값은 %d\n",ch3,ch3);
//	printf("문자 '%c'의 아스키코드 값은 %d\n", ch4, ch4);
//	printf("알파벳 대문자의 아스키코드 값 범위는 %d ~ %d\n", ch3, ch4);
//	printf("\n");
//	printf("문자 '%c'의 아스키코드 값은 %d\n", ch5, ch5);
//	printf("문자 '%c'의 아스키코드 값은 %d\n", ch6, ch6);
//	printf("숫자의 아스키코드 값 범위는 %d ~ %d", ch5, ch6);
//	return 0;
//}

//과제2
//int main(void) {
//	char str1[100], str2[100], str3[100];
//	printf("문자열을 입력하세요>> ");
//	gets_s(str1, sizeof(str1));
//	printf("문자열을 입력하세요>> ");
//	gets_s(str2, sizeof(str2));
//	printf("문자열을 입력하세요>> ");
//	gets_s(str3, sizeof(str3));
//	printf("%s%s%s", str1, str2, str3);
//	return 0;
//}

//과제3
//int main(void) {
//	int num1, num2, num3;
//	printf("네모 동그라미 세모>> ");
//	scanf_s("%d%d%d", &num1, &num2, &num3);
//	char ch1 = num1 + 65;
//	char ch2 = num2 + 65;
//	char ch3 = num3 + 65;
//	printf("%c - %c * %c", ch1, ch2, ch3);
//	return 0;
//}

//과재4
//int main(void) {
//	char ch1, ch2, ch3;
//	printf("알파벳 대문자 세 개를 입력하세요>> ");
//	scanf_s("%c%c%c", &ch1,sizeof(ch1), &ch2,sizeof(ch2), &ch3,sizeof(ch3));
//	printf("평문: %c%c%c\n", ch1, ch2, ch3);
//	int num1 = ch1 - 65; 
//	int num2 = ch2 - 65;
//	int num3 = ch3 - 65;
//	printf("암호문: %d, %d, %d", num1, num2, num3);
//	return 0;
//}


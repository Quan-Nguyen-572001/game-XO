//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>

//1과제
//int main(void) {
//	printf("슬래시(\'/\')를 뒤집으면 백슬래시(\'\')이다.\n");
//	printf("\'\\t\'는 탭 키를 뜻한다.\n");
//	printf("문자열은 큰 따옴표(\")로 둘러싸서 표현한다.\n");
//	return 0;
//}

//2과제
//int main(void) {
//	int a;
//	printf("구두단 몇 단?(2~19)>> ");
//	scanf_s("%d", &a);
//	printf("%3d *    1 = %3d\n",a,a*1);
//	printf("%3d *    2 = %3d\n",a,a*2);
//	printf("%3d *    3 = %3d\n",a,a*3);
//	printf("%3d *    4 = %3d\n",a,a*4);
//	printf("%3d *    5 = %3d\n",a,a*5);
//	printf("%3d *    6 = %3d\n",a,a*6);
//	printf("%3d *    7 = %3d\n",a,a*7);
//	printf("%3d *    8 = %3d\n",a,a*8);
//	printf("%3d *    9 = %3d\n",a,a*9);
//	return 0;
//}

//과제3
//int main(void) {
//	int sqr, rnd, tri;
//	printf("네모 동그리미 세모 >> ");
//	scanf_s("%d%d%d", &sqr, &rnd, &tri);
//	printf("%3d + %3d * %3d = %3d\n", sqr, rnd, tri,sqr+rnd*tri);
//	printf("%#2O + %#2O * %#2O = %#2O\n", sqr, rnd, tri, sqr + rnd * tri);
//	printf("%#X + %#X * %#X = %#X", sqr, rnd, tri, sqr + rnd * tri);
//	return 0;
//}

//과제4
//int main(void) {
//	printf("weekday  tempareture(low ~ high)  rain prob.\n");
//	printf("============================================\n");
//	printf(" SUNDAY %11d ~  %d %15.1f%%\n", 9, 24, 8.5);
//	printf(" MONDAY %11d ~  %d %15.1f%%\n", 12, 21, 22.4);
//	printf("TUESDAY %11d ~  %d %15.1f%%\n", 11, 22, 67.0);
//	return 0;
//}

//과제5-1
//int main(void) {
//	unsigned int u;
//	printf("양의 정수>> ");
//	scanf("%u", &u);
//	unsigned int lsb = u & 0x1;
//	printf("LSB = %u", lsb);
//	return 0;
//}

//과제5-2
//int main(void) {
//	unsigned int u,lsb1,lsb2,lsb3,a,b;
//	printf("양의 정수>> ");
//	scanf_s("%u", &u);
//	lsb1 = u & 0x1;
//	lsb2 = u & (0x1<<1); 
//	lsb3 = u & (0x1<<2); 
//	printf("LSB1 = %u\n", lsb1);
//	printf("LSB2 = %u\n", lsb2);
//	printf("LSB3 = %u\n", lsb3);
//	return 0;
//}
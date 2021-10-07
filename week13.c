//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <math.h>

//과제1
//int main(void) {
//	for (int i = 1; i<=15; i+=2) {
//		printf("%d ", i);
//	}
//	printf("\n");
//	for (int i = 10; i >= 1; i -= 1) {
//		printf("%d ", i);
//	}
//	printf("\n");
//	for (int i = 4; i <= 32; i += 4) {
//		printf("%d ", i);
//	}
//	printf("\n");
//	for (int i = 18; i >= 0; i -= 3) {
//		printf("%d ", i);
//	}
//	printf("\n");
//	for (int i = 3; i <= 729; i *= 3) { //ghi vao vo
//		printf("%d ", i);
//	}
//	printf("\n");
//	for (int i = 80; i >= -100; i -= 30) {
//		printf("%d ", i);
//	}
//	printf("\n");
//	for (int i = 256; i >= 1; i /= 2) {
//		printf("%d ", i);
//	}
//	return 0;
//}

//과제2 (xem lai trong vo)
//int main(void) {
//	int n;
//	int a1 = 1;
//	int ai = 0;
//	printf("n = ");
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		if (i == 1) {
//			printf("A1 = %d\n", a1);
//			continue;
//		}
//		a1 += (i) * (i + 1);
//		printf("A%d = A%d + %d * %d = %d\n", i, i-1, i , i + 1, a1);
//	}
//	return 0;
//}

//과제3
//int main(void) {
//	int n;
//	bool exist_prime = false;
//	printf("n = ");
//	scanf_s("%d", &n);
//	if (n == 1) {
//		printf("%d is NOT a prime number",n);
//	}
//	else {
//		for (int i = 2; i <= sqrt(n); i++) {
//			if (n % i == 0) {
//				exist_prime = true;
//			}
//		}
//		if (exist_prime) {
//			printf("%d is NOT a prime number", n);
//		}
//		else {
//			printf("%d IS a prime number", n);
//		}
//	}
//	
//	return 0;
//}

//과제4
//int main(void) {
//	for (int i = 2; i <= 8; i += 2) {
//		printf("<구구단 %d단>\n", i);
//		
//		for (int j = 1; j <= 9; j++) {
//			printf("%d * %d = %d\n", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//과제5 (in hinh chu nhat rong)
//int main(void) {
//    int n, m;
//    printf("n m = ");
//    scanf_s("%d%d", &n, &m);
//    for (int i = 1; i <= n; i++) {
//        for (int k = 1; k <= m; k++) {
//            if (i == 1 || k == 1 || i == n || k == m) {
//                printf("*"); 
//            }
//            else {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//	return 0;
//}

//과제6-1
//int main(void) {
//	int n, m;
//	printf("n m = ");
//	scanf_s("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			printf("1");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//과제6-2
//int main(void) {
//	int n, m;
//	printf("n m = ");
//	scanf_s("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			printf("%d", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//과제6-3 (chua bt lam)
//int main(void) {
//	int n, m;
//	printf("n m = ");
//	scanf_s("%d%d", &n, &m);
//	for (int i = 1; i <= (n / 2)+1; i++) {
//		for (int j = 1; j <= m; j++) {
//			printf("%d", j);
//		}
//		printf("\n");
//	}
//	for (int i = n / 2; i <= n; i++) {
//		for (int k = m; k >= 1; k--) {
//			printf("%d", k);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//과제6-4
//int main(void) {
//	int n, m;
//	printf("n m = ");
//	scanf_s("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			printf("0%d ", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//과제7-1
//int main(void) {
//	int sub_num, score, result;
//	result = 0;
//	printf("과목 개수 = ");
//	scanf_s("%d", &sub_num);
//	for (int i = 1; i <= sub_num; i++) {
//		printf("과목%d 점수 = ", i);
//		scanf_s("%d", &score);
//		result += score;
//	}
//	printf("총점 = %d/%d\n", result, 100 * sub_num);
//	printf("평균 = %.2f/100.00", (double)result / sub_num);
//	return 0;
//}

//과제7-2
//int main(void) {
//	int sub_num, score, result,stu_num,tmp;
//	printf("학생 수 = ");
//	scanf_s("%d", &stu_num);
//	printf("과목 개수 = ");
//	scanf_s("%d", &sub_num);
//	printf("\n");
//	for (int j = 1; j <= stu_num; j++) {
//		result=0;
//		for (int i = 1; i <= sub_num; i++) {
//		printf("학생%d의 과목%d 점수 = ",j,i);
//		scanf_s("%d", &score);
//		result += score;
//		}
//		printf("총점 = %d/%d\n", result, 100 * sub_num);
//		printf("평균 = %.2f/100.00", (double)result / sub_num);
//		printf("\n");
//	}
//	return 0;
//}

//주가 문제1
//int main(void) {
//	int n,fib,fib1,fib0,fibn;
//	fib0 = 0;
//	fib1 = 1;
//	printf("n = ");
//	scanf_s("%d", &n);
//	for (int i = 2; i < n; ++i) {
//		fibn = fib0 + fib1;
//		printf("%d", fibn);
//		fib0 = fib1;
//		fib1 = fibn;
//	}
//	return 0;
//}
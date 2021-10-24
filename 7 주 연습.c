//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <Windows.h>
//#include <stdbool.h>
//#include <limits.h>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//과제1
//typedef struct {
//	char name[50];
//	int age;
//	char tel[50];
//	char add[50];
//}PROFILE;
//
//typedef struct {
//	char name[50];
//	int age;
//}TMP;
//
//void print_profie(PROFILE);
//void print_profile(PROFILE profile) {
//	printf("%s(%d), %s, %s\n", profile.name, profile.age, profile.tel, profile.add);
//}
//
//int main(void){
//	TMP tmp = { "울릉도",0 };
//	PROFILE profile_arr[4]={
//		{"홍길동",23,"012-345-6789","울릉도"},
//		{"이순신",35,"111-222-3333","서울 건천동"},
//		{"장보고",19,"222-333-4444","청해진"},
//		{"유관순",15,"333-444-5555","충남 천안"}
//	};
//	for (int i = 0; i < 4; i++) {
//		print_profile(profile_arr[i]);
//	}
//	//1-2
//	printf("주소록의 모든 거주지: ");
//	for (int i = 0; i < 4; i++) {
//		printf("%s ", profile_arr[i].add);
//	}
//	printf("\n");
//	int idx = 0;
//	for (int i = 0; i < 4; i++) {
//		if (profile_arr[i].age > tmp.age) {
//			tmp.age = profile_arr[i].age;
//			//.name = profile_arr[i].name;
//			idx = i;
//		}
//	}
//	printf("가장 나이가 많은 사람: %s(%d)", profile_arr[idx].name, tmp.age);
//	return 0;
//}

//과제2
//typedef struct {
//	int x, y;
//}POINT;
//
//int main(void) {
//	double distance[362880] = { 0 };
//	POINT points[10] = {
//		{0, 0}, {3, 3}, {12, -5}, {6, 1}, {38, -4},
//		{10, -10}, {25, -12}, {33, 21}, {-5, 7}, {-10, -10}
//	};
//	for (int k = 0; k < 362880; k++) {
//		for (int i = 0; i < 10; i++) {
//			for (int j = 0; j < 10; j++) {
//				distance[i] = sqrt(pow(points[j + 1].x - points[i].x, 2) + pow(points[j + 1].y - points[i].y, 2));
//			}
//
//		}
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <String.h>
#include <stdlib.h> 

struct Person{
	char name[20];		// 구조체 멤버1 
	int age;			// 구조체 멤버 2 
	char address[100];	// 구조체 멤버 3 
	
};

int main(){
	struct Person *p1=malloc(sizeof(struct Person));	// 메모리 할당
	
	strcpy(p1->name,"홍길동"); 
	p1->age=25;
	strcpy(p1->address,"경기도 수원시");
	
	printf("이름 : %s\n", p1->name);
	printf("나이 : %d\n", p1->age);
	printf("주소 : %s\n", p1->address); 
	
	free(p1);	// 메모리 해제
	
	return 0; 
}

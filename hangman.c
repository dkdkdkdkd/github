#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int check(char s[], char a[], char ch);
int rand_maker(char s1[], char s2[], char s3[], char s4[], char a[]);
int rand_ans(char s[], char a[]);

int main()
{
	int num;
	char solution[100];
	char s1[100] = "meet at midnight";
	char s2[100] = "Hello world";
	char s3[100] = "gnu nice cs";
	char s4[100] = "C programing is fun";

	char answer[100] = "____ __ ________";
	char ch;

	while (1)
	{
		printf("문자열을 입력하시오 : %s \n", answer);
		printf("글자를 추측하시오:");
		ch = getchar();
		if (check(solution, answer, ch) == 1)//두 문자열이 일치하면
			break;                               //정지
		getchar();

	}

	return 0;
}

int check(char s[], char a[], char ch)
{
	int i;

	for (i = 0; s[i] != '\0'; i++) {     //s[]문자 각각 조사
		if (s[i] == ch)
			a[i] = ch;                 //저장된 문자와 입력값이 일치하면 a[]에 저장
	}
	if (strcmp(s, a) == 0) return 1;// 두문자열이 같으면 1
	else return 0;                       //아니면 0 반환
}

int rand_maker(char solution[],char s1[],char s2[],char s3[],char s4[],char a[])
{
	int num,i;
	num = rand() % 4 + 1;
	
	switch (num)
	{
	case 1:
		rand_ans(s1, a);
		break;
	case 2:
		rand_ans(s2, a);
		break;
	}
}
int rand_ans(char s[], char a[])
{

}
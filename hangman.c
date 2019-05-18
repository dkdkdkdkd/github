#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int check(char s[], char a[], char ch);
void rand_maker(char s1[], char s2[], char s3[], char s4[], char a[]);
void rand_ans(char s[], char a[]);

int main()
{
	int num;
	char solution[100];                               
	char s1[100] = "meet at midnight";
	char s2[100] = "hello world";
	char s3[100] = "gnu nice cs";
	char s4[100] = "c programing is fun";                 //정답이될 문자열

	char answer[100];
	char ch;

	rand_maker(solution, s1, s2, s3, s4, answer);

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

int check(char s[], char a[], char ch)              //정답이면 해당문자 추가 함수
{
	int i;

	for (i = 0; s[i] != '\0'; i++) {     //s[]문자 각각 조사
		if (s[i] == ch)
			a[i] = ch;                 //저장된 문자와 입력값이 일치하면 a[]에 저장
	}
	if (strcmp(s, a) == 0) return 1;// 두문자열이 같으면 1
	else return 0;                       //아니면 0 반환
}

void rand_maker(char solution[],char s1[],char s2[],char s3[],char s4[],char a[]) //4개의 문자열중 하나를 무작위로 지정 
{
	int num,i;

	srand((unsigned)time(NULL));

	num = rand() % 4 + 1;
	
	switch (num)    //num값에 따라 solution[]의 값 지정
	{
	case 1:
		strcpy(solution, s1);
		break;
	case 2:
		strcpy(solution, s2);
		break;
	case 3:
		strcpy(solution, s3);
		break;
	default:
		strcpy(solution, s4);
		break;
	}
	rand_ans(solution, a);
}
void rand_ans(char s[], char a[]) // solution[]의 알파벳 부분을 '_'로 변환
{
	int i = 0;

	while (s[i]!='\0')
	{
		if (isalpha(s[i]))
			a[i] = '_';
		else
			a[i] = ' ';
		i++;
	}
	a[i] = '\0';

}
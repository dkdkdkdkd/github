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
	char s4[100] = "c programing is fun";                 //�����̵� ���ڿ�

	char answer[100];
	char ch;

	rand_maker(solution, s1, s2, s3, s4, answer);

	while (1)
	{
		printf("���ڿ��� �Է��Ͻÿ� : %s \n", answer);
		printf("���ڸ� �����Ͻÿ�:");
		ch = getchar();
		if (check(solution, answer, ch) == 1)//�� ���ڿ��� ��ġ�ϸ�
			break;                               //����
		getchar();

	}

	return 0;
}

int check(char s[], char a[], char ch)              //�����̸� �ش繮�� �߰� �Լ�
{
	int i;

	for (i = 0; s[i] != '\0'; i++) {     //s[]���� ���� ����
		if (s[i] == ch)
			a[i] = ch;                 //����� ���ڿ� �Է°��� ��ġ�ϸ� a[]�� ����
	}
	if (strcmp(s, a) == 0) return 1;// �ι��ڿ��� ������ 1
	else return 0;                       //�ƴϸ� 0 ��ȯ
}

void rand_maker(char solution[],char s1[],char s2[],char s3[],char s4[],char a[]) //4���� ���ڿ��� �ϳ��� �������� ���� 
{
	int num,i;

	srand((unsigned)time(NULL));

	num = rand() % 4 + 1;
	
	switch (num)    //num���� ���� solution[]�� �� ����
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
void rand_ans(char s[], char a[]) // solution[]�� ���ĺ� �κ��� '_'�� ��ȯ
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
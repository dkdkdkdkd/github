#include<stdio.h>
#include<string.h>

int check(char s[], char a[], char ch);
int main()
{
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;

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

int check(char s[], char a[], char ch)
{
	int i;

	for (i = 0; s[i] != '\0'; i++) {     //s[]���� ���� ����
		if (s[i] == ch)
			a[i] = ch;                 //����� ���ڿ� �Է°��� ��ġ�ϸ� a[]�� ����
	}
	if (strcmp(s, a) == 0) return 1;// �ι��ڿ��� ������ 1
	else return 0;                       //�ƴϸ� 0 ��ȯ
}
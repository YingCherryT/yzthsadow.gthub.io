#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;

////�žų˷���
int main() {
	int chen;
	int i = 1;
	int j = 1;
	for ( i = 1; i < 10; i++)
	{
		//printf("%d", i);
		for ( j = 1; j < i; j++)
		{
			chen = i * j;
			//printf("%d\n",chen);
			printf("%d * %d = %d  ", j, i, chen);
		}
		printf("\n");
	}
	return 0;
}
 


//�����û�����һ��������n�����n*n�ĳ˷���
int main() {
	int chen;
	int num;
	int i = 1;
	int j = 1; 
	printf("������һ����������\n");
	scanf("%d", &num);
	//printf("���� %d",num);
	//printf("%d %d %d", i, j,num);
	// ����û������Ƿ�Ϸ�
	if (num <= 0) {
		printf("������Ч��������һ����������\n");
		return 1; // �˳����򣬷��ش������
	}
	for (i = 1; i <= num; i++)
	{
		//printf("%d", i);
		for (j = 1; j <= i; j++)
		{
			chen = i * j;
			//printf("%d\n",chen);
			printf("%d * %d = %d  ", j, i, chen);
		}
		printf("\n");
	}
	return 0;

}
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	printf("���� �ϳ��� �Է��Ͻÿ�. :");
	scanf("%i", &i);
	
	if(i > 0)
		printf("����Դϴ�.\n");
	else if (i < 0)
		printf("�����Դϴ�.\n");
	else
		printf("0�Դϴ�.\n");
	
	return 0;
}

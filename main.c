#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	printf("���� �ϳ��� �Է��Ͻÿ�.:");
	scanf("%i", &i);
	
	if(i < 0)
		i = i*(-1);
	
	printf("���밪�� %i �Դϴ�.\n", i);
	
	return 0;
}

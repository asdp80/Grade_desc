#include <stdio.h>
int main() {
	int i = 0, n = 0, k = 0;
	int std[5];

	printf("������ �Է��ϼ��� \n");
	for (i = 0; i < 5; i++) {
		printf("�л� %d�� ���� : ", i + 1);
		scanf_s("%d", &std[i]);
	}
	for (i = 0; i < 4; i++) {
		for (n = 1; n < 5; n++) {
			if (std[i] < std[n]){
				k = std[n];
				std[n] = std[i];
				std[i] = std[n];
			}
		}
	}
	printf("���� ������ ���� : ");

	for (i = 0; i < 5; i++) {
		printf("%d�� : %d \n", i + 1, std[i]);
	}


	return 0;
}
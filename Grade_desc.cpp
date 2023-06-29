#include <stdio.h>
int main() {
	int i = 0, n = 0, k = 0;
	int std[5];

	printf("성적을 입력하세요 \n");
	for (i = 0; i < 5; i++) {
		printf("학생 %d의 성적 : ", i + 1);
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
	printf("성적 순으로 나열 : ");

	for (i = 0; i < 5; i++) {
		printf("%d등 : %d \n", i + 1, std[i]);
	}


	return 0;
}
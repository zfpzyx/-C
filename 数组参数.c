#include <stdio.h>
#define N 5
void input(double []);
void sort(double []);
void show(double []);

void main() {
	double scores[N];
	input(scores);
	show(scores);
	sort(scores);
	printf("排序后为：");
	show(scores);
}

void input(double scores[]) {
	int i;
	for (i = 0; i < N; i++) {
		printf("请输入第%d门课的成绩：", i + 1);
		scanf("%lf", &scores[i]);
	}

}

void sort(double secores[]) {
	int i, j, temp;
	for (i = 0; i < N - 1 ; i++) {
		for (j = 0; j < N - 1; j++) {
			temp = secores[j];
			secores[j] = secores[j + 1];
			secores[j + 1] = temp;

		}
	}
}

void show(double secores[]) {
	int i;
	printf("\n******************************************\n");
	printf("语文\t数学\t英语\t物理\t化学\n");
	for (i = 0; i < N; i++) {
		printf("%.2lf\t", secores[i]);
	}
	printf("\n******************************************\n");
}

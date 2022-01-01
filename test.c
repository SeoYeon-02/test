#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//백준 트리순회 문제
int n[26][2];

void preorder(int x) {
	if (x < 0)
		return ;

	printf("%c", x + 'A');
	preorder(n[x][0]);
	preorder(n[x][1]);

	return ;
}

void inorder(int x) {
	if (x < 0)
		return ;

	inorder(n[x][0]);
	printf("%c", x + 'A');
	inorder(n[x][1]);

	return ;
}

void postorder(int x) {
	if (x < 0)
		return ;

	postorder(n[x][0]);
	postorder(n[x][1]);
	printf("%c", x + 'A');

	return ;
}

int main() { //메인함수
	int num;
	int i;
	char A, B, C;

	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		scanf("\n%c \n%c \n%c", &A, &B, &C);

		n[A - 'A'][0] = B - 'A';
		n[A - 'A'][1] = C - 'A';
	}

	preorder(0);
	printf("\n");
	inorder(0);
	printf("\n");
	postorder(0);
	printf("\n");


	return 0;
}
#include <stdio.h>
#include <string.h>
#include "boggle.h"

char board[MAX][MAX + 1];
int N;
int M;
int dr[] = { -1, 1, 0, 0, -1, 1, 1, -1 };
int dc[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
char word[MAX];

void initBoard(void) {

	/* TO DO - bord�迩���� �� ���� ��� '\0' ���ڷ� �ʱ�ȭ */

}

void createBoard(void) {

	/* TO DO - data file�� �о�鿩 bord �迭 �ʱ�ȭ*/

}

void printBoard(void) {

	/* TO DO */

}

int searchWord(void) {  // DFS(����Լ�) �����Լ� 

	/* TO DO */

	return 0;
}

int DFS(int row, int col, const char *word) {

	/* TO DO */

	return 0;
}

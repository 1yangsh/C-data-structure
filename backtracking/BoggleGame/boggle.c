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

	/* TO DO - bord배여르이 각 방을 모두 '\0' 문자로 초기화 */

}

void createBoard(void) {

	/* TO DO - data file을 읽어들여 bord 배열 초기화*/

}

void printBoard(void) {

	/* TO DO */

}

int searchWord(void) {  // DFS(재귀함수) 유도함수 

	/* TO DO */

	return 0;
}

int DFS(int row, int col, const char *word) {

	/* TO DO */

	return 0;
}

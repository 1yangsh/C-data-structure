#include <stdio.h>
#include "Dijkstra.h"

int main(void) {
	freopen("data.txt", "r", stdin);

	initGraph();
	createGraph();
	printGraph();

	for (int i=0 ; i<vertex ; i++) {
		dijkstra(i);
		printf("---- %c ���� �ּ� ��� �� ��� ---------------\n", i + 'A');
		for (int j=0 ; j<vertex ; j++) {
			printf("�ּҺ�� : %c -> %c : %d\n", i + 'A', j + 'A', D[j]);
			printPath(i, j);
		}
		printDistance(i);
		printPredecessor();
	}

	return 0;
}

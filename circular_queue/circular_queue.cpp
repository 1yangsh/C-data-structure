#include <stdio.h> 
#include <malloc.h> 
#include "circularQueue.h" 

/*--------------------------------------------------------------------------------------
Function name	: createQueue - 원형큐 생성 및 초기화 함수
Parameters		: qp - 큐 구조체의 주소
				  size - 큐의 크기
Returns			: 생성 성공하면 TRUE, 실패하면 FALSE 리턴
--------------------------------------------------------------------------------------*/
BOOL createQueue(Queue * qp, int size)
{
	if (qp == NULL) {  /* qp 포인터 NULL check*/
		return FALSE;
	}
	qp->queue = (int *)calloc(size, sizeof(int)); /* queue 메모리 할당 */
	if(qp->queue != NULL) { /* queue 메모리 할당 성공 시 */
	qp->size = size;
	qp->front = 0;
	qp->rear = 0;
	return TRUE; 
	}
	else {  /* queue 메모리 할당 실패 시 */
		return FALSE;
	}
}
/*--------------------------------------------------------------------------------------
Function name	: isQueueEmpty - 큐가 비어있는가 검사
Parameters		: qp - 큐 구조체의 주소
Returns			: 완전히 비어있으면 TRUE 리턴, 비어있지 않으면 FALSE 리턴
--------------------------------------------------------------------------------------*/
BOOL isQueueEmpty(const Queue *qp)
{
	if (qp == NULL) {  /* qp포인터 NULL check*/
		return FALSE;
	}
	if(qp->front == qp->rear) {
	return TRUE;
	}
	else {
		return FALSE;
	}
}
/*--------------------------------------------------------------------------------------
Function name	: isQueueFull - 큐가 꽉차있는가 검사
Parameters		: qp - 큐 구조체의 주소
Returns			: 꽉차 있으면 TRUE 리턴, 아니면 FALSE 리턴
--------------------------------------------------------------------------------------*/
BOOL isQueueFull(const Queue *qp)
{
	if (qp == NULL) {  /* qp포인터 NULL check*/
		return FALSE;
	}
	if(qp->front == (qp->rear+1) % qp->size) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}
/*--------------------------------------------------------------------------------------
Function name	: enqueue() - 큐에 데이터 하나를 저장함
Parameters		: qp - 큐 구조체의 주소
			  	  enqueData - 큐에 저장할 데이터
Returns			: 성공적으로 저장하면 TRUE, 실패하면 FALSE 리턴
--------------------------------------------------------------------------------------*/
BOOL enqueue(Queue * qp, int enqueData)
{
	if (qp == NULL) {  /* qp포인터 NULL check*/
		return FALSE;
	}
	if(isQueueFull(qp) == TRUE) {
		return FALSE;
	}
	else {
		qp->queue[qp->rear] = enqueData;
		qp->rear = (qp->rear + 1) % qp->size;
		return TRUE;
	}
}
/*--------------------------------------------------------------------------------------
Function name	: dequeue() - 큐에서 데이터 하나를 꺼냄
Parameters		: qp - 큐 구조체의 주소
				  dequeData - 꺼낸 데이터를 저장할 기억공간의 주소
Returns			: 성공적으로 꺼내면 TRUE, 실패하면 FALSE 리턴
--------------------------------------------------------------------------------------*/
BOOL dequeue(Queue * qp, int * dequeData)
{
	if (qp == NULL) {  /* qp포인터 NULL check*/
		return FALSE;
	}
	if(isQueueEmpty(qp) == TRUE){ /* 큐가 비어있으면 dequeue 불가 */
		return FALSE;
	}
	else {
		*dequeData = qp->queue[qp->front];
		qp->front = (qp->front + 1) % qp->size;
		return TRUE;
	}
}
/*--------------------------------------------------------------------------------------
Function name	: printQueue() - 큐 내의 모든 데이터를 출력 함
Parameters		: qp - 큐 구조체의 주소
Returns			: 없음
--------------------------------------------------------------------------------------*/
void printQueue(const Queue * qp)
{
	if (qp == NULL) {  /* qp포인터 NULL check*/
		return;
	}
	/* queue내의 모든 데이터 출력 (dequeue 하면 출력되는 순서로 출력) */
	for (int i = qp->front; i != qp->rear; i = (i + 1) % qp->size)
	{
		printf("%5d\n", qp->queue[i]);
	}
	printf("\n");
}
/*--------------------------------------------------------------------------------------
Function name	: destroyQueue() - 큐 소멸 함수
Parameters		: qp - 큐 구조체의 주소
Returns			: 없음
--------------------------------------------------------------------------------------*/
void destroyQueue(Queue * qp)
{
	if (qp == NULL) {  /* qp포인터 NULL check*/
		return;
	}
	if(qp->queue != NULL){
		free(qp->queue);
	}
	qp->queue = NULL;   /* queue 멤버를 NULL pointer로 초기화 */
	qp->size = 0;       /* size멤버를 0으로 초기화 */
	qp->front = qp->rear = 0;    /* front, rear 멤버를 0으로 초기화 */
	return;

}

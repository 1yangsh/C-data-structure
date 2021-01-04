#include<stdio.h>
#include<malloc.h>
#include<memory.h>
#include<string.h>

typedef struct Person
{
	char name[20];
	char addr[20];
	int age;
} Person;


void genericSort(void *, int, size_t, int (*)(void *, void *));
void display(void *, int, size_t, void (*)(void *));
int integerCompare(void *, void *);
int doubleCompare(void *, void *);
int stringCompare(void *, void *);
void integerPrint(void *), doublePrint(void *), stringPrint(void *);
void PersonPrint(void *); // 기능 : 인자로 전달 된 내용을 출력. 형식 : [이름(나이) : 주소]
int PersonCompare(void *, void*);  //기능 : name member를 비교 후 결과 리턴.
//-------------------------------------------------------------------
int main()
{
	int iArray[10]={5,2,9,11,1,8,10,15,20,3};
	double dArray[5]={12.5, 3.12, 7.7, 20.35, 9.8};
	char sArray[7][10]={"희망", "꿈", "도전", "용기", "노력", "믿음",
						"협력"};
	Person ary[4] = {{"홍길동", "서울", 24}, {"이순신", "안양", 24}, {"신사임당", "수원", 24}, {"강감찬", "인천", 24}};
	
	//정수형데이터 정렬하여 출력하기
	genericSort(iArray, sizeof(iArray)/sizeof(iArray[0]), sizeof(iArray[0]), integerCompare);
	printf("[[정수형 데이터 정렬하여 출력하기]]\n");
	display(iArray, sizeof(iArray)/sizeof(iArray[0]), sizeof(iArray[0]), integerPrint);

    	//실수형데이터 정렬하여 출력하기
	genericSort(dArray, sizeof(dArray)/sizeof(dArray[0]), sizeof(dArray[0]), doubleCompare);
	printf("[[실수형 데이터 정렬하여 출력하기]]\n");
	display(dArray, sizeof(dArray)/sizeof(dArray[0]), sizeof(dArray[0]), doublePrint);

	//문자열형데이터 정렬하여 출력하기
	genericSort(sArray, sizeof(sArray)/sizeof(sArray[0]), sizeof(sArray[0]), stringCompare);
	printf("[[문자열형 데이터 정렬하여 출력하기]]\n");
	display(sArray, sizeof(sArray)/sizeof(sArray[0]), sizeof(sArray[0]), stringPrint);

	//구조체데이터 정렬하여 출력하기

	// TODO

	return 0;
}

//-------------------------------------------------------------------

void genericSort(void *p, int count, size_t size, 
		   int (*dataCompare)(void *, void *))
{
	int i, j;
	void *tmp;
	tmp=malloc(size);

	for(i=0; i<count-1; i++)
	{
		for(j=i+1; j<count; j++)
	{
	if(dataCompare((char *)p+i*size, (char *)p+j*size)>0)
	{
			memcpy(tmp, (char *)p+i*size, size);
			memcpy((char *)p+i*size, (char *)p+j*size, size);
			memcpy((char *)p+j*size, tmp, size);
			}
		}
	}
	free(tmp);
}
//-------------------------------------------------------------------
void display(void *p, int count, size_t size, 
              void (*dataPrint)(void *))
{
	int i;
	for(i=0; i<count; i++){
		printf("%d. ", i+1);
		dataPrint( (char *)p+i*size );
	}
}
//-------------------------------------------------------------------
int integerCompare(void *p1, void *p2)
{
	if( *(int *)p1 > *(int *)p2 ) {return 1;}
	else if(  *(int *)p1 == *(int *)p2 ) {return 0;}
	else {return -1;}
}
//-------------------------------------------------------------------
void integerPrint(void *p)
{
	printf("%d\n", *(int *)p);
}

//-------------------------------------------------------------------
int doubleCompare(void *p1, void *p2)
{
	if( *(double *)p1 > *(double *)p2 ) {return 1;}
	else if(  *(double *)p1 == *(double *)p2 ) {return 0;}
	else {return -1;}
}
//-------------------------------------------------------------------
void doublePrint(void *p)
{
	printf("%.2lf\n", *(double *)p);
}
//-------------------------------------------------------------------
int stringCompare(void *p1, void *p2)
{
	if( strcmp((char *)p1, (char *)p2)>0 ) {return 1;}
	else if(  strcmp((char *)p1, (char *)p2)==0 ) {return 0;}
	else {return -1;}
}
//-------------------------------------------------------------------
void stringPrint(void *p)
{
	printf("%s\n",(char *)p);
}

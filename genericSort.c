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
void PersonPrint(void *); // ��� : ���ڷ� ���� �� ������ ���. ���� : [�̸�(����) : �ּ�]
int PersonCompare(void *, void*);  //��� : name member�� �� �� ��� ����.
//-------------------------------------------------------------------
int main()
{
	int iArray[10]={5,2,9,11,1,8,10,15,20,3};
	double dArray[5]={12.5, 3.12, 7.7, 20.35, 9.8};
	char sArray[7][10]={"���", "��", "����", "���", "���", "����",
						"����"};
	Person ary[4] = {{"ȫ�浿", "����", 24}, {"�̼���", "�Ⱦ�", 24}, {"�Ż��Ӵ�", "����", 24}, {"������", "��õ", 24}};
	
	//������������ �����Ͽ� ����ϱ�
	genericSort(iArray, sizeof(iArray)/sizeof(iArray[0]), sizeof(iArray[0]), integerCompare);
	printf("[[������ ������ �����Ͽ� ����ϱ�]]\n");
	display(iArray, sizeof(iArray)/sizeof(iArray[0]), sizeof(iArray[0]), integerPrint);

    	//�Ǽ��������� �����Ͽ� ����ϱ�
	genericSort(dArray, sizeof(dArray)/sizeof(dArray[0]), sizeof(dArray[0]), doubleCompare);
	printf("[[�Ǽ��� ������ �����Ͽ� ����ϱ�]]\n");
	display(dArray, sizeof(dArray)/sizeof(dArray[0]), sizeof(dArray[0]), doublePrint);

	//���ڿ��������� �����Ͽ� ����ϱ�
	genericSort(sArray, sizeof(sArray)/sizeof(sArray[0]), sizeof(sArray[0]), stringCompare);
	printf("[[���ڿ��� ������ �����Ͽ� ����ϱ�]]\n");
	display(sArray, sizeof(sArray)/sizeof(sArray[0]), sizeof(sArray[0]), stringPrint);

	//����ü������ �����Ͽ� ����ϱ�

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

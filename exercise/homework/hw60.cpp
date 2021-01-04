#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH  13 /* �ֹε�Ϲ�ȣ ����*/
int availabilityCheck(char *resident_number);
int checkLengthCharacter(char *resident_number);
int checkDate(char *resident_number);  
int checkIdentification(char *resident_number);
int checkGender(char *resident_number);
int checkYear (int year);

int main()
{
    /* �׽�Ʈ�� �ֹε�Ϲ�ȣ ���� �迭*/
    char resident_number[][20]={"0402291000008", "870401102321", "00031541949179", 
		"0003154194917", "801203#201122", "7804155328845", "7804150328840", 
		"9612241068382", "9902292194322", "0230174326176", "8811391042219", 
		"8100122042213", "8112002042213", "9210101069415", "0802294012345",
"8806311069417","8807311069418" }; 
    int i, count;
    /* �˻��� �ֹε�Ϲ�ȣ�� ���� ���*/
    count = sizeof(resident_number)/ sizeof(resident_number[0]);	
    for(i=0; i<count; i++) /* �ֹε�Ϲ�ȣ ��ȿ�� �˻縦 �ݺ������� ���� ��*/
    {
	if(availabilityCheck(resident_number[i]) == TRUE)
	{
	printf("(+) �ֹι�ȣ%s��(��) ��ȿ�� ��ȣ�Դϴ�.\n", resident_number[i]);
	}
	else
	{
	    printf("(-) �ֹι�ȣ%s��(��) ��ȿ���� ���� ��ȣ�Դϴ�.\n", resident_number[i]);
	}
    }
	return 0;
}
/*----------------------------------------------------------------
  availabilityCheck()�Լ�: �ֹε�Ϲ�ȣ ��ȿ�� �˻� �Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: ��ȿ�ϸ�TRUE, ��ȿ���� ������FALSE ����
------------------------------------------------------------------*/
int availabilityCheck(char* resident_number)
{
	int res = 0;
	res = checkLengthCharacter(resident_number)
		+ checkDate(resident_number)
		+ checkIdentification(resident_number)
		+ checkGender(resident_number);
	if (res == (4 * TRUE)) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}
/*-------------------------------------------------------------------------
  checkLengthCharacter()�Լ�: �ֹε�Ϲ�ȣ ���� �� ���� ��ȿ���˻� �Լ�
  ��������: �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: �ֹε�Ϲ�ȣ�� ���̰� �°� ���ڹ��ڷθ� �����Ǿ� ������TRUE,
           ���̰� ª�ų� ���, ���� ���ڰ� �ƴ� ���ڰ� ���� ������FALSE ����
--------------------------------------------------------------------------*/
int checkLengthCharacter(char* resident_number)
{
	int i;
	if (strlen(resident_number) == RESIDENT_NUMBER_LENGTH) { // �ֹε�Ϲ�ȣ�� 13�ڸ� ���� �˻�
		for (i = 0; i < RESIDENT_NUMBER_LENGTH; i++) {
			if (resident_number[i] >= '0' && resident_number[i] <= '9') { // ���ڹ��� ���� �˻�
				;
			}
			else {
				return FALSE;
			}
		}
		return TRUE;
	}
	else {
		
		return FALSE;
	}
	
}
/*----------------------------------------------------------------
  checkDate()�Լ�: ù6�ڸ�(��,��,��)�� ��ȿ�� �˻� �Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: ��ȿ�� ��¥�̸�TRUE, ��ȿ���� ���� ��¥�̸�FALSE ����
------------------------------------------------------------------*/
int checkDate(char* resident_number)
{
	int year, month, day;
	int y;
	if (resident_number[6] == '1' || resident_number[6] == '2') {
		year = 1900 + (resident_number[0] - '0') * 10 + (resident_number[1] - '0');
	}
	else if (resident_number[6] == '3' || resident_number[6] == '4') {
		year = 2000 + (resident_number[0] - '0') * 10 + (resident_number[1] - '0');
	}
	else {
		return FALSE; // checkGender �� �����ϰ� FALSE ����
	}
	month = (resident_number[2] - '0') * 10 + (resident_number[3] - '0');
	day = (resident_number[4] - '0') * 10 + (resident_number[5] - '0');

	y = checkYear(year); // ��,��� �˻�

	/* ��ȿ�� ��¥���� �˻� */
	if ((month < 1 || month > 12) || (day < 1 || day > 31)) {
		return FALSE;
	}
	else if ((month == 2 || month == 4 || month == 6 || month == 9 || month == 11) && (day > 30)) {
		return FALSE;
	}
	else if (y == FALSE && month == 2 && day > 28) {
		return FALSE;
	}
	else if (y == TRUE && month == 2 && day > 29) {
		return FALSE;
	}
	else {
		return TRUE; // ��� ������ ��ȿ�Ҷ� TRUE ����
	}
}
/*----------------------------------------------------------------------
  checkGender()�Լ�: 7��° �ڸ��� �����ĺ���ȣ ��ȿ�� �˻��Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: �����ĺ���ȣ��'1'~'4'�̸�TRUE, �� �� ���� �����̸�FALSE ����
-----------------------------------------------------------------------*/
int checkGender(char* resident_number)
{
	if (resident_number[6] >= '1' && resident_number[6] <= '4') { // �����ĺ���ȣ �˻�
		return TRUE;
	}
	else {
		return FALSE;
	}
}
/*------------------------------------------------------------------------
  checkIdentification()�Լ�: �ֹε�Ϲ�ȣ ���ڸ�(�ν���) ��ȿ�� �˻� �Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: ��ȿ�� �ν����̸�TRUE, ��ȿ���� ���� �ν����̸� FALSE ����
-------------------------------------------------------------------------*/
int checkIdentification(char* resident_number)
{
	int i;
	int tot = 0;
	for (i = 0; i < RESIDENT_NUMBER_LENGTH-1; i++) {
		tot += (resident_number[i] - '0');
	}
	if ((tot % 10) == resident_number[RESIDENT_NUMBER_LENGTH-1] - '0') {
		return TRUE;
	}
	else {
		return FALSE;
	}
}
/*----------------------------------------------------------------
 checkYear ()�Լ�: �⵵�� ��,��� ���� �˻�
  ��������: ��,��� �˻��� �⵵
  ���ϰ�: �����̸� TRUE, ����̸�FALSE ����
------------------------------------------------------------------*/
int checkYear(int year)
{
	if (year % 4 != 0) {
		return FALSE;
	}
	else if (year % 100 != 0) {
		return TRUE;
	}
	else if (year % 400 != 0) {
		return FALSE;
	}
	else
		return TRUE;
}




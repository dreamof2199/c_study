
#include	<stdlib.h>
#include	<stdio.h>

/* 
 * ===  FUNCTION  ===============
 *         Name:  main
 *  Description:  
 * ==============================
 */
int main (void)
{
	long double US_deficit_2004 = 1.2345e+7L;
	printf ( "%lf\n",US_deficit_2004 );
	return 0;
}

C.Vim�±������б������£�prog4.3.c|14 col 2 warning| format '%lf' expects argument of type 'double', but argument 2 has type 'long double' [-Wformat]
ͬ�������������printf������ӡ%lli��ʽ��long long int�������ݣ���gcc�±���û���⣬�����û��������������һ����ô���

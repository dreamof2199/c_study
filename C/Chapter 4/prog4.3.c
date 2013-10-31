
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

C.Vim下编译运行报错如下：prog4.3.c|14 col 2 warning| format '%lf' expects argument of type 'double', but argument 2 has type 'long double' [-Wformat]
同样的问题存在于printf函数打印%lli格式的long long int类型数据，在gcc下编译没问题，大家有没有碰到过，交流一下怎么解决

#include<stdio.h>
int main()
{
	printf("%x\n", -5 & 10);
	printf("%x\n", -5 | 10);
	return 0;
}
//-5
//1000 0000 0000 0000 0000 0000 0000 0101  ԭ��
//1111 1111 1111 1111 1111 1111 1111 1010  ����
//1111 1111 1111 1111 1111 1111 1111 1011  ����

//10
//0000 0000 0000 0000 0000 0000 0000 1010  ԭ��

/* -5 & 10
 1111 1111 1111 1111 1111 1111 1111 1011
 0000 0000 0000 0000 0000 0000 0000 1010
 -----------------------------------------
 0000 0000 0000 0000 0000 0000 0000 1010
 */

 /* -5 | 10
  1111 1111 1111 1111 1111 1111 1111 1011
  0000 0000 0000 0000 0000 0000 0000 1010
  -----------------------------------------
  1111 1111 1111 1111 1111 1111 1111 1011

  ff ff ff fb
  */

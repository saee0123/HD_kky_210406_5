/*
사용자로부터 1~ 9 의 입력을 하나 받아 입력에 맞는 구구단 을 출력하세요.
*/

#include<stdio.h>

void main() {

	int _ex = 0;
	int _1(1), _2(2), _3(3), _4(4), _5(5), _6(6), _7(7), _8(8), _9(9);

	printf ("1~9의 정수값을 입력해주 : ", _ex);

	scanf_s("%d", &_ex);
	fseek(stdin, 0, SEEK_END);

	printf("%d*1=%d\n", _ex, _ex * _1);
	printf("%d*2=%d\n", _ex, _ex * _2);
	printf("%d*3=%d\n", _ex, _ex * _3);
	printf("%d*4=%d\n", _ex, _ex * _4);
	printf("%d*5=%d\n", _ex, _ex * _5);
	printf("%d*6=%d\n", _ex, _ex * _6);
	printf("%d*7=%d\n", _ex, _ex * _7);
	printf("%d*8=%d\n", _ex, _ex * _8);
	printf("%d*9=%d\n", _ex, _ex * _9);

	fgetc(stdin);
}

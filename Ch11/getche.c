#include <stdio.h>
#include <conio.h>

int main(void) {

	char ch;

	printf("���ڸ�����Է��ϰ�nter��������>\n");
	while ((ch = getchar()) != 'q')
		putchar(ch);

	printf("\n���ڸ����������ٵι����>\n");
	while ((ch = _getche()) != 'q')
		putchar(ch);

	printf("\n���ڸ��������ѹ����>\n");
	while ((ch = _getch()) != 'q')
		_putch(ch);
	printf("\n");

	return 0;
}

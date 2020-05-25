#include <stdio.h>
#include <conio.h>

int main(void) {

	char ch;

	printf("문자를계속입력하고nter를누르면>\n");
	while ((ch = getchar()) != 'q')
		putchar(ch);

	printf("\n문자를누를때마다두번출력>\n");
	while ((ch = _getche()) != 'q')
		putchar(ch);

	printf("\n문자를누르면한번출력>\n");
	while ((ch = _getch()) != 'q')
		_putch(ch);
	printf("\n");

	return 0;
}

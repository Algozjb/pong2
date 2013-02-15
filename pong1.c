#include <unistd.h>
#include <curses.h>
#include <stdio.h>

int main(int argc, const char *argv[])
{
	
	initscr();
	clear();
	int i;
	for (i = 0; i < LINES; i++) {
		move(i,i+1);
		if (i % 2 == 1) {
			standout();
			/* code */
		}
		addstr("\219\219\219\219");
		if (i % 2 == 1) {
			/* code */
			standend();
		}
		sleep(1);
		refresh();
		move(i,i+1);
		addstr("            ");
		/* code */
	}
	//move(10,20);
	//addstr("Hello WOrld");
	//move(LINES - 1,0);
	//int i = LINES;
	//printf("%d\n",i);
	//getch();
	endwin();
	return 0;
}

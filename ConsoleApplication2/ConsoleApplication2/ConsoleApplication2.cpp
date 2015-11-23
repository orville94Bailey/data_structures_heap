// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "curses.h"
#include "Map_Cell.h"
#include <time.h>
#inlcude <random>

Map_Cell* map[80][25];


int main()
{
	for (int i = 0;i < 25;i++)
	{

	}

	initscr();                    /* Start curses mode */
	printw("Hello World !!!");    /* Print Hello World */
	refresh();                    /* Print it on to the real screen */
	getch();                      /* Wait for user input */
	endwin();                     /* End curses mode */

	return 0;
}
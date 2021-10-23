#include <iostream>
#include <ncurses.h>
#include "assets.h"
#include "board.h"

int main(int argc, char *argv[]) {
    initscr();
    cbreak();

    int height, width, start_y, start_x;
    height = 10;
    width = 20;
    start_y = start_x = 10;
    
    WINDOW * win = newwin(height, width, start_y, start_x);
    refresh();

    /*
    attron(A_STANDOUT | A_UNDERLINE);
    mvprintw(15, 20, "go fuck yourself");
    attroff(A_STANDOUT | A_UNDERLINE);
    */

    box(win, 0, 0);
    mvwprintw(win, 3, 1, "go fuck yourself");
    wrefresh(win);

    getch();
    refresh();

    endwin();
    return 0;
}
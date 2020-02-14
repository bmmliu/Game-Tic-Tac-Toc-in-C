//
// Created by mfbut on 1/28/2019.
//

#ifndef SUMMER2018TICTACTOE_CURSORTRAKEDWINDOW_H
#define SUMMER2018TICTACTOE_CURSORTRAKEDWINDOW_H

#include <ncurses.h>

typedef struct CursorTrackedWindow_Struct{
  WINDOW* cursesWin;
  int cursorRow, cursorCol;
} CursorTrackedWindow;

CursorTrackedWindow newCursorTracedWindow(int numRows, int numCols, int rowStart, int colStart);
void fillWindow(CursorTrackedWindow* win, char fillChar);

int getNumRows(CursorTrackedWindow* win);
int getNumCols(CursorTrackedWindow* win);

#endif //SUMMER2018TICTACTOE_CURSORTRAKEDWINDOW_H

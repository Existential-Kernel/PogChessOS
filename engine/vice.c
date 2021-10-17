// vice.c

#include "stdio.h"
#include "defs.h"
#include "stdlib.h"


#define PERFTFEN "n1n5/PPPk4/8/8/8/8/4Kppp/5N1N w - - 0 1"

int main() {	

	AllInit();		
	
	S_BOARD board[1];
	S_MOVELIST list[1];
	
	ParseFen(START_FEN,board);
	
	char input[6];
	int Move = NOMOVE;
	while(TRUE) {
		PrintBoard(board);
		printf("Please enter a move > ");
		fgets(input, 6, stdin);
		
		if(input[0]=='q') {
			break;
		} else if(input[0]=='t') {
			TakeMove(board);			
		} else if(input[0]=='p') {
			PerftTest(4,board);			
		} else {
			Move = ParseMove(input, board);
			if(Move != NOMOVE) {
				MakeMove(board,Move);
				/* if(IsRepetition(board)) {
					printf("REP SEEN\n");
				} */
			} else {
				printf("Move Not Parsed:%s\n",input);
			}
		}	
		
		fflush(stdin);
	}
	
	return 0;
}








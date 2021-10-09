#include "stdio.h"
#include "defs.h"
#include "debug.h"
#include <unistd.h>


uint64_t GeneratePosKey(const S_BOARD *pos) {

	int sq = 0;
	uint64_t finalkey = 0;
	int piece = EMPTY;
	
	// pieces
	for (sq = 0; sq < BOARD_SQUARE_NUM; ++sq) {
		piece = pos->pieces[sq];
		if (piece!=NO_SQ && piece!=EMPTY) {
			ASSERT(piece>=wP && piece<=bK);
			finalkey ^= piecekeys[piece][sq];
		}		
	}
	
	if (pos->side == WHITE) {
		finalkey ^= sidekey;
	}
		
	if(pos->enpas != NO_SQ) {
		ASSERT(pos->enpas>=0 && pos->enpas<BOARD_SQUARE_NUM);
		finalkey ^= piecekeys[EMPTY][pos->enpas];
	}
	
	ASSERT(pos->castleperm>=0 && pos->castleperm<=15);
	
	finalkey ^= castlekeys[pos->castleperm];
	
	return finalkey;
}


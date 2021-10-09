#ifndef DEFS_H
#define DEFS_H

#include "stdlib.h"
#include <unistd.h>

typedef unsigned long long uint64_t;

#define NAME "PogChess 1.0"
#define BOARD_SQUARE_NUM 120

#define MAXGAMEMOVES 2048

enum { EMPTY, wP, wN, wB, wR, wQ, wK, bP, bN, bB, bR, bQ, bK  };
enum { FILE_A, FILE_B, FILE_C, FILE_D, FILE_E, FILE_F, FILE_G, FILE_H, FILE_NONE };
enum { RANK_1, RANK_2, RANK_3, RANK_4, RANK_5, RANK_6, RANK_7, RANK_8, RANK_NONE };

enum { WHITE, BLACK, BOTH };

enum {
  A1 = 21, B1, C1, D1, E1, F1, G1, H1,
  A2 = 31, B2, C2, D2, E2, F2, G2, H2,
  A3 = 41, B3, C3, D3, E3, F3, G3, H3,
  A4 = 51, B4, C4, D4, E4, F4, G4, H4,
  A5 = 61, B5, C5, D5, E5, F5, G5, H5,
  A6 = 71, B6, C6, D6, E6, F6, G6, H6,
  A7 = 81, B7, C7, D7, E7, F7, G7, H7,
  A8 = 91, B8, C8, D8, E8, F8, G8, H8, NO_SQ, OFFBOARD
};

enum { FALSE, TRUE };

enum { WKCA = 1, WQCA = 2, BKCA = 4, BQCA = 8 };

typedef struct {
	
	int move;
	int castleperm;
	int enpas;
	int fiftymove;
	uint64_t poskey;

} S_UNDO;

typedef struct {

	int pieces[BOARD_SQUARE_NUM];
	uint64_t pawns[3];
		
	int kingsq[2];
	
	int side;
	int enpas;
	int fiftymove;
	
	int ply;
	int hisply;
	
	int castleperm;
	
	uint64_t poskey;
	
	int piecenum[13];
	int bigpiece[3];
	int majpiece[3];
	int minpiece[3];
	
	S_UNDO history[MAXGAMEMOVES];
	
	// piece list
	int piecelist[13][10];	
	
} S_BOARD;

/* MACROS */

#define FR2SQ(f,r) ( (21 + (f) ) + ( (r) * 10 ) ) 
#define SQ64(sq120) Sq120ToSq64[sq120]
#define POP(b) PopBit(b)
#define CNT(b) CountBits(b)
#define CLRBIT(bb,sq) ((bb) &= clearmask[(sq)])
#define SETBIT(bb,sq) ((bb) |= setmask[(sq)])

/* GLOBALS */

extern int Sq120ToSq64[BOARD_SQUARE_NUM];
extern int Sq64ToSq120[64];
extern uint64_t setmask[64];
extern uint64_t clearmask[64];
extern uint64_t piecekeys[13][120];
extern uint64_t sidekey;
extern uint64_t castlekeys[16];

/* FUNCTIONS */

// init.c
extern void AllInit();

// bitboards.c
extern void PrintBitBoard(uint64_t bb);
extern int PopBit(uint64_t *bb);
extern int CountBits(uint64_t b);

// hashkeys.c
extern uint64_t GeneratePosKey(const S_BOARD *pos);

#endif
















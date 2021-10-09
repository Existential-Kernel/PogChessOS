#include <iostream>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include "defs.h"


#define RAND_64 ( \	
	(uint64_t)rand() + \
	(uint64_t)rand() << 15 + \
	(uint64_t)rand() << 30 + \
	(uint64_t)rand() << 45 + \
	((uint64_t)rand() & 0xf) << 60 \
)
					

int Sq120ToSq64[BOARD_SQUARE_NUM];
int Sq64ToSq120[64];

uint64_t setmask[64];
uint64_t clearmask[64];

uint64_t piecekeys[13][120];
uint64_t sidekey;
uint64_t castlekeys[16];

void InitHashKeys() {
	
	int index = 0;
	int index2 = 0;
	for(index = 0; index < 13; ++index) {
		for(index2 = 0; index2 < 120; ++index2) {
			piecekeys[index][index2] = RAND_64;
		}
	}
	sidekey = RAND_64;
	for(index = 0; index < 16; ++index) {
		castlekeys[index] = RAND_64;
	}

}

void InitBitMasks() {
	int index = 0;
	
	for(index = 0; index < 64; index++) {
		setmask[index] = 0ULL;
		clearmask[index] = 0ULL;
	}
	
	for(index = 0; index < 64; index++) {
		setmask[index] |= (1ULL << index);
		clearmask[index] = ~setmask[index];
	}
}

void InitSq120To64() {

	int index = 0;
	int file = FILE_A;
	int rank = RANK_1;
	int sq = A1;
	int sq64 = 0;
	for(index = 0; index < BOARD_SQUARE_NUM; ++index) {
		Sq120ToSq64[index] = 65;
	}
	
	for(index = 0; index < 64; ++index) {
		Sq64ToSq120[index] = 120;
	}
	
	for(rank = RANK_1; rank <= RANK_8; ++rank) {
		for(file = FILE_A; file <= FILE_H; ++file) {
			sq = FR2SQ(file,rank);
			Sq64ToSq120[sq64] = sq;
			Sq120ToSq64[sq] = sq64;
			sq64++;
		}
	}
}

void AllInit() {
	InitSq120To64();	
	InitBitMasks();
	InitHashKeys();
}

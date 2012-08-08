#include "../Adafruit_WS2801/Adafruit_WS2801.h"
#include "../Drawable/Drawable.h"
#include "Alphanumeric.h"

// Constructor for letter
Alphanumeric::Alphanumeric(Adafruit_WS2801& board, char* l, uint8_t yOff, uint8_t xOff, uint32_t c) : Drawable(board, yOff, xOff, getBBWidth(l), getBBHeight(l)) {
	int w = getBBWidth(l);
	int h = getBBHeight(l);
	
	switch((int) l[0]) {
		case 65:
			Drawable(board, yOff, xOff, w, h);
			spc(0, 1, c);
			spc(1, 0, c);		//  #
			spc(1, 2, c);		// # #
			spc(2, 0, c);		// ###
			spc(2, 1, c);		// # #
			spc(2, 2, c);		// # #
			spc(3, 0, c);
			spc(3, 2, c);
			spc(4, 0, c);
			spc(4, 2, c); 
			break;
		case 66:
			Drawable(board, yOff, xOff, w, h);
			spc(0, 0, c);
			spc(0, 1, c);
			spc(1, 0, c);		// ##
			spc(1, 2, c);		// # #
			spc(2, 0, c);		// ##
			spc(2, 1, c);		// # #
			spc(3, 0, c);		// ##
			spc(3, 2, c);
			spc(4, 0, c);
			spc(4, 1, c);
			break;
	}
}

Alphanumeric::~Alphanumeric(void) {

}

int Alphanumeric::getBBWidth(char* l) {
	switch((int) l[0]) {
		case 73:
			return 1;
		default:
			return 3;
	}
}


int Alphanumeric::getBBHeight(char* l) {
	return 5;
}
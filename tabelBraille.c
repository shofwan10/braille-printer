#include "tabelBraille.h"
#include "kendali.h"

char KarBraille(char ch_in)
{
// input : karakter ASCII 1 byte (8 bit)
// outpur : karakter braille 1 byte (8 bit)
/*
	P1	P2
	P3	P4
	P5	P6
	
	bilangan braille 0b00P1P2 P3P4P5P6
*/	
	switch (ch_in){
		case ' ' : return 0x00;break;
		case 'a' : return 0x20;break;
		case 'A' : return 0x20;break;
		case 'b' : return 0x28;break;
		case 'B' : return 0x28;break;
		case 'c' : return 0x30;break;
		case 'C' : return 0x30;break;
		case 'd' : return 0x34;break;
		case 'D' : return 0x34;break;
		case 'e' : return 0x24;break;
		case 'E' : return 0x24;break;
		case 'f' : return 0x38;break;
		case 'F' : return 0x38;break;
		case 'g' : return 0x3C;break;
		case 'G' : return 0x3C;break;
		case 'h' : return 0x2C;break;
		case 'H' : return 0x2C;break;
		case 'i' : return 0x18;break;
		case 'I' : return 0x18;break;
		case 'j' : return 0x1C;break;
		case 'J' : return 0x1C;break;
		case 'k' : return 0x22;break;
		case 'K' : return 0x22;break;
		case 'l' : return 0x2A;break;
		case 'L' : return 0x2A;break;
		case 'm' : return 0x32;break;
		case 'M' : return 0x32;break;
		case 'n' : return 0x36;break;
		case 'N' : return 0x36;break;
		case 'o' : return 0x26;break;
		case 'O' : return 0x26;break;
		case 'p' : return 0x3A;break;
		case 'P' : return 0x3A;break;
		case 'q' : return 0x3E;break;
		case 'Q' : return 0x3E;break;
		case 'r' : return 0x2E;break;
		case 'R' : return 0x2E;break;
		case 's' : return 0x1A;break;
		case 'S' : return 0x1A;break;
		case 't' : return 0x1E;break;
		case 'T' : return 0x1E;break;
		case 'u' : return 0x23;break;
		case 'U' : return 0x23;break;
		case 'v' : return 0x2B;break;
		case 'V' : return 0x2B;break;
		case 'w' : return 0x1D;break;
		case 'W' : return 0x1D;break;
		case 'x' : return 0x33;break;
		case 'X' : return 0x33;break;
		case 'y' : return 0x37;break;
		case 'Y' : return 0x37;break;
		case 'z' : return 0x27;break;
		case 'Z' : return 0x27;break;
		default : return 0x00;break;
	}
}

void translate(char alfabet[], char braille[])
{
	int i;
	
	for (i=iMin; i<=iMax-1; i++)
	{
		braille[i]= KarBraille(alfabet[i]);
	}
} 
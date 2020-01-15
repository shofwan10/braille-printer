#include <stdio.h>
#include <stdlib.h>

#define adatitik 1
#define tiadatitik 0
#define iMin 0
#define iMax 4

int scanbaris (int baris, char array[])
{
	//int P1,P2,P3,P4,P5,P6;
	int i=0;

	switch(baris){
		case 0:
			do{
				if (array[i]&0x30) return adatitik;
				else i++; 
			}while (i<=iMax); return tiadatitik; 
			break;
		
		case 1:
			do{
				if (array[i]&0x0C) return adatitik;
				else i++; 
			}while (i<=iMax); return tiadatitik;
			break;
		
		case 2:
			do{
				if (array[i]&0x03) return adatitik;
				else i++; 
			}while (i<=iMax); return tiadatitik;
			break;
	}
}

main(){
	char tab[5]={0x00,0x00,0x00,0x00,0x00};
	
	int i=0;
	
	do{
		if (scanbaris(i,tab)==adatitik){
			printf ("row %d, ada titik\n", i);
		}
		else if (scanbaris(i,tab)==tiadatitik){
			printf ("row %d, tidak ada titik\n", i);
		}
		i++;
	}while(i<=2);
	printf ("%x\n", tab[2]&0x30);
	printf ("%x\n", tab[2]&0x0c);
	printf ("%x\n", tab[2]&0x03);
	printf ("\nproses scan selesai..");
	
	
return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include Full 71
#include Half 72
#include Quart 73
#include Eight 74
#include Sixth 75

void operasimodestep(int FS,int HS,int QS,int ES,int SS);
void output(int mode, int step);

int main (){
	
	int FS,HS,QS,ES,SS;
	printf("masukkan jumlah FS : ");
	scanf("%d", &FS);
	printf("masukkan jumlah HS : ");
	scanf("%d", &HS);
	printf("masukkan jumlah QS : ");
	scanf("%d", &QS);
	printf("masukkan jumlah ES : ");
	scanf("%d", &ES);
	printf("masukkan jumlah SS : ");
	scanf("%d", &SS);
	operasimodestep(FS,HS,QS,ES,SS);
	return 0;
}

void operasimodestep(int FS,int HS,int QS,int ES,int SS)
{
//	int FS; int HS; int QS; int ES; int SS;
	int mode;
	
	if (SS>1)
	{
		ES = ES + (SS/2);
		SS = SS % 2;
	}
	if (ES>1)
	{
		QS = QS + (ES/2);
		ES = ES % 2;
	}
	if (QS>1)
	{
		HS = HS + (QS/2);
		QS = QS % 2;
	}
	if (HS>1)
	{
		FS = FS + (HS/2);
		HS = HS % 2;
	}
	if (FS!=0)
	{
		output(Full, FS);
	}
	if (HS!=0)
	{
		output(Half, HS);
	}
	if (QS!=0)
	{
		output(Quart, QS);
	}
	if (ES!=0)
	{
		output(Eight, ES);
	}
	if (SS!=0)
	{
		output(Sixth, SS);
	}
}

void output(int mode, int step)
{
	if (mode == Full) 
	{
	printf("mode : full step \n");
	printf("%d \n", step)
	}
	
	if (mode == Half) 
	{
	printf("mode : half step \n");
	printf("%d \n", step)
	}
	
	if (mode == Quart) 
	{
	printf("mode : Quarter step \n");
	printf("%d \n", step)
	}
	
	if (mode == Eight) 
	{
	printf("mode : One Eighth step \n");
	printf("%d \n", step)
	}
	
	if (mode == Sixth) 
	{
	printf("mode : One Sixteenth step \n");
	printf("%d \n", step)
	}
}
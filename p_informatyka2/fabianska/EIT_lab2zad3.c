#include <stdio.h>

int main()
{
	int intWrt00=0;
	int intWrt01=0;
	int intWrt02=0;
	int intWrt03=0;
	int intWrt04=0;
	int intTab[5]={0};
	
	int *pInt;
//*wl=*wl+2;
	pInt=&intWrt00;
	
	*pInt=*pInt+10;
	intWrt01=*pInt+1;
	intWrt02=*pInt+2;
	intWrt03=*pInt+3;
	intWrt04=*pInt+4;
	
	int i;
	pInt=&intTab[0];
	for(i=0;i<5;i++)
	{
		*(pInt+i)=110+i;
	}
	
	printf("%i ", intWrt00);
	printf("%i ", intWrt01);
	printf("%i ", intWrt02);
	printf("%i ", intWrt03);
	printf("%i ", intWrt04);
	
	printf("%i ", *(pInt+0));
	printf("%i ", intTab[1]);
	printf("%i ", *(pInt+2));
	printf("%i ", *(pInt+3));
	printf("%i ", *(pInt+4));
	
	
	return 0;
}


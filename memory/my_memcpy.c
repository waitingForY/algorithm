#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void* my_memcpy(void* dest,void* src,size_t n)
{
	char* pdest=(char*)dest;
	char* psrc=(char*)src;
	char* presult=pdest;
	while(n--)
	  *pdest++=*psrc++;
	return presult;
}

int main(void)
{
	char src[]="woshiwjb";
	char dest[8]={0};
	my_memcpy(dest,src,5);
	printf("%s\n",dest);
	return 0;
}

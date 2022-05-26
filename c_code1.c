#include<lpc21xx.h>
int countbit(unsigned int n)
{
int bits=0;
while(n!=0)
{
if(n&1)
bits++;
if(n&2)
bits++;
if(n&4)
bits++;
if(n&8)
bits++;
n>>=4;
}
return bits;
}
#include<stdio.h>
#include<math.h>
int main(void)
{
char H,L,Hex[16];
char S;
int k,N,j;
double Rk,Pi,Peak,RN,Angle,Sine;
FILE *out;
//=================
Peak = 127.5;
N = 128;
//=================
RN = (double) N;
Pi = 3.1415926535;
for(k=0;k < 10;k++) Hex[k] = '0' + k;
for(k=10,j=0;k < 16;k++,j++) Hex[k] = 'A' + j;
//=================
out = fopen("PICSINE.ASM","w");
for(k=0;k < N;k++){
Rk = (double) k;
Angle = (2.0 * Pi * Rk) / RN;
Sine = Peak * sin(Angle);
S = (char) Sine;
L = S & 0x0f;
H = ((S & 0xf0) >> 4) & 0x0f;
L = Hex[L];
H = Hex[H];
fprintf(out," RETLW 0x%c%c\n",H,L);
}
fclose(out);
return 0;
}

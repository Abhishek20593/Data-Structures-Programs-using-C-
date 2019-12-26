#include<stdio.h>
int main(void)
{
unsigned int k,Map[8],Power[8],N_Bits,Test,Value,N_Table,j,m;
FILE *out;
printf("Enter Number of Bits = ? ");
scanf("%d",&N_Bits);
for(k=0,m=1;k < 8;k++,m=2*m) Power[k] = m;
N_Table = 1;
k = N_Bits;
while(k > 0){
N_Table = 2 * N_Table;
k--;
}
printf("\n\n\n");
for(k=0;k < N_Bits;k++){
printf("For Input Bit = %d: What is the Output Bit Number = ? ",k);
scanf("%d",&m);
Map[k] = m;
printf("\n");
}
out = fopen("PICPERM.ASM","w");
for(k=0;k < N_Table;k++){
Value = 0;
for(m=0;m < N_Bits;m++){
Test = Power[m];
Test = Test & k;
if(Test > 0) Value = Value + Power[Map[m]];
}
Value = Value & 0x00ff;
fprintf(out," RETLW %d\n",Value);
}
fclose(out);
return 0;
}

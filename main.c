#include <stdio.h>

unsigned char memoria [154], ir=0x00, ro0=0x00, ro1=0x00, e=0x00, l=0x00, g=0x00;
unsigned int mbr=0x00, mar=0x00, imm=0x00, pc=0x00, reg[8];

void tela(){

  printf("CPU: \n");
  printf("R0: \t%x\t", reg[0]);
  printf("R1: \t%x\t", reg[1]);
  printf("R2: \t%x\t", reg[2]);
  printf("R3: \t%x\n", reg[3]);
  printf("R4: \t%x\t", reg[4]);
  printf("R5: \t%x\t", reg[5]);
  printf("R6: \t%x\t", reg[6]);
  printf("R7: \t%x\n", reg[7]);
  printf("MBR: \t%x\t", mbr);
  printf("MAR: \t%x\t", mar);
  printf("IMM: \t%x\t", imm);
  printf("PC: \t%x\n", pc);
  printf("IR: \t%x\t", ir);
  printf("RO0: \t%x\t", ro0);
  printf("RO1: \t%x\n", ro1);
  printf("E: \t%x\t", e);
  printf("L: \t%x\t", l);
  printf("G: \t%x\t\n\n", g);
  printf("Memoria:\n\n");
  
  for (int i = 0; i < 153; i++)
  {
    printf("%d: %x\t",i,memoria[i]);
  }
  
}

int main(){
  memoria[0]=0x13;
  memoria[1]=0x13;
  memoria[2]=0x13;
  memoria[3]=0x13;
  tela();
  return 0;
}
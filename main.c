//Semáforo - projetado por Guilherme Novais

#include "msp430f1121.h"

int main(void){
  WDTCTL = WDTPW + WDTHOLD;
  P1DIR = 0xFF; // Semáforo 1: verde = P1.2, amarelo = P1.1, vermelho = P1.0
  P1OUT = 0x00; // Zera as saídas para economia de energia

  P2DIR = 0xFF; // Semáforo 2: verde = P2.2, amarelo = P2.1, vermelho = P1.0
  P2OUT = 0x00; // Zera as saídas para economia de energia
  
  while(1){
    P1OUT = 0x04; // Semáforo 1: verde acende
    P2OUT = 0X01;  // Semáforo 2: vermelho acende
    __delay_cycles(15000000); // Espera 15 segundos
    
    P1OUT = 0x02; // Semáforo 1: verde apaga e amarelo acende
    __delay_cycles(5000000); // Espera 5 segundos
    
    P1OUT = 0x01; // Semáforo 1: amarelo apaga e vermelho acende
    P2OUT = 0x04;  // Semáforo 2: vermelho apaga e verde acende*/
    __delay_cycles(15000000); // Espera 15 segundos
    
    P2OUT = 0x02; // Semáforo 2: verde apaga e amarelo acende
    __delay_cycles(5000000); // Espera 5 segundos
  }
}
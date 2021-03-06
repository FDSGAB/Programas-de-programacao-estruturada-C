/*

Função recursiva que verifica quantas vezes um digito y ocorre em um
número x

*/


#include "contafreq.h"//Utilizado para avaliação do prog

int contafreq(int num, int digito) {
   if (num == 0) {
       return 0;
   }
   else {
       if (digito == (num%10)) {
           return 1 + contafreq(num/10, digito);
       }
       else {
           return 0 + contafreq(num/10,digito);
       }
   }
}

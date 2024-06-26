#include <stdio.h>

int main(void) {
  int tamanho;
  char caractere; 
  printf("Digite um inteiro e um caractere entre c,b,p,s,h ou v.\n");
  scanf("%d %c", &tamanho, &caractere);

   if (caractere == 'c')
      for (int i = 1; i <= tamanho; i++) {
         for (int j = 1; j <= tamanho; j++) {
           printf("*");
    }
    printf("\n");
  }

// Eu honestamente não lembro o meu raciocinio mais, porém, pelo o que me parece
  // Eu fiz duas variáveis dentro do for para com que cada uma seguisse as regras do
  // de casa caso.

    if (caractere == 'b'){
      for (int i = 1; i <= tamanho; i++){
        printf("*");

      }
    printf("\n"); 
    for (int i = 2; i < tamanho; i++){
    printf("*");

      for(int j=2; j < tamanho; j++){
        printf(" ");
      }
      printf("*\n");

    }
    for(int i=1 ; i<= tamanho ; i++){
      printf("*");
    }
    }

  // Separação muito foda 2
    if (caractere == 'p'){
      int i, j;
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
          if (i == 0 || i == tamanho - 1 || j == 0 || j == tamanho - 1 || i == j) {
            printf("*");
          } else {
            printf(" ");
          }
        }
        printf("\n");
      }
  }
   // Separação muito foda 3
  if (caractere == 's') {
      int i, j;
      for (i = 0; i <= tamanho; i++) {
          for (j = 0; j <= tamanho; j++) {
              if (i == 0 || i == tamanho || j == 0 || j == tamanho || j == tamanho - i) {
                  printf("*");
              } else {
                  printf(" ");
              }
          }
          printf("\n");
      }
  }
  // Separação muito foda 4
  if (caractere == 'h') {
      int i, j;
      for (i = 0; i < tamanho; i++) {
          for (j = 0; j < tamanho; j++) {
              if (i == 0 || i == tamanho - 1 || i == tamanho / 2) {
                  printf("*");
              } else {
                  if (j == 0 || j == tamanho - 1) {
                      printf("*");
                  } else {
                      printf(" ");
                  }
              }
          }
          printf("\n");
      }
    }
// Separação muito foda 5
        if (caractere == 'v'){
           int i, j;
             for (i = 0; i < tamanho; i++) {
               for (j = 0; j < tamanho; j++) {
                  if (j == 0 || j == tamanho - 1 || j == tamanho / 2) {
                     printf("*");
                  } else {
                     if (i == 0 || i == tamanho - 1) {
                          printf("*");
                     } else {
                          printf(" ");
                }
            }
        }
        printf("\n");
    }
  }




  // Separação muito foda 6
      if (caractere != 'c' && caractere != 'b' && caractere != 'p' && caractere != 's' &&           caractere != 'h' && caractere != 'v')  {
             printf("Caractere inválido.\n");
  }

}

// Korisnik treba pogodit broj koji program zamisli.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {
  srand(time(NULL));


	// Ako promjenimo broj 10 do tuda ce program zamislit broj.
  int r = rand() % 10 + 1;
  bool tocno = false;
  int pogodi;
  int brojac = 0;

  while(!tocno)
  {
    printf("Pogodi moj broj! ");
    scanf("%d", &pogodi);
    getchar();

    if (pogodi < r) {
        printf("Broj je premalen. Pokusaj ponovo.\n");
    }
    else if (pogodi > r) {
        printf("Broj je prevelik. Pokusaj ponovo.\n");
    }
    else /* ako (pogodi == r) */ {
        printf("Tocno si pogodio u %d koraka! Cestitamo!\n", brojac);
        tocno = true;
    }

    brojac++;
    if(brojac==7){
            printf("\n\n### Maximum puta si pokuso,probaj ponovo  !!!\n");
            break;
    }
  }

  return 0;
}

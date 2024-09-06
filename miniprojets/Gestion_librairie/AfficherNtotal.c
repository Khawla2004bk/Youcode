#include <header.h>

void AfficherNtotal() {
  int count = 0, s = 0;
  
  for (int i = 0; i < nb; i++) {
    if (Q[i] == 0) 
      continue;
    else {
      count++;
      s += Q[i];
    }
  }
  printf("Le nombre de livres en tock est %d", count);
  printf("La quantité total de tous les livres en tock est %d", s);
}

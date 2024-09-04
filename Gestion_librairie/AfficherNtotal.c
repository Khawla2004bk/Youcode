#include <header.h>

void AfficherNtotal() {
  int count = 0;
  
  for (int i = 0; i < nb; i++) {
    if (Q[i] == 0) 
      continue;
    else
      count++;
  }
  printf("%d", count);
}

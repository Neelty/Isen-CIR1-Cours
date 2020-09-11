#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Premier Programme, fait le 07/09/2020 */

int main(int argc, char *argv[]) {
  
  setlocale(LC_ALL, "fr-FR"); /*  Définit la langue ainsi que les caractères à utiliser dans le temrinal */
  
  double tf; /*  Definit tf en tant qu'une variable double */
  printf("Température en Fahrenheit\n"); /*  Simple print\n  */
  scanf("%lf", &tf); /* Récupère l'entrée clavier de l'utilisateur, et place la valeur 'dans' tf (type de l'entrée castée par le '%lf') */
  printf("%lf\n", (tf+459.67)*(5.0/9)); /* Print notre valeur obtenue, après notre transformation */

  return EXIT_SUCCESS; /*  On marque la fin de notre programme */

}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Premier Programme, fait le 07/09/2020 */

int main(int argc, char *argv[]) {

  double tf; /*  Definit tf en tant qu'un double */
  printf("Tempéreature fahrenheit\n"); /*  Simple print\n  */
  scanf("%lf", &tf); /* Get l'entrée clavier de l'utilisateur, et place la valeur 'dans' tf (type de l'entrée castée par le '%lf') */
  printf("%lf\n", (tf+459.67)*(5.0/9)); /* Print notre valeur obtenue, après notre transformation */

  return EXIT_SUCCESS; /*  On marque la fin de notre programme */

}

#   Projet _Printf 

<h4><u>Description </u>:</h4>

 Ce projet implémente une version simplifiée de la fonction `printf` en langage C. La fonction principale, `_printf`, est conçue pour formater et imprimer différents types de données en fonction des spécificateurs de format fournis dans la chaîne d'entrée.

_printf function is an output function that prints characters to stdout / console / command shell. _printf function returns the number of characters printed to the output file stream(stdout / console / shell).

_printf takes a formatting string and a number of optional arguments. _printf converts these arguments (char, string, int, long, float, double etc) to printable strings and the final constructed string is transferred to the stdout file stream.

The symbol “%” denotes the beginning of a format mark. The mark “%d” is replaced by the value of variable counter and the resulting string is printed. The symbol “\n” represents a new line.

# Type de données

 | SYMBOLE         | TYPE                      | Format de sortie |
 | :-------------- | :------------------------- | :------|
 | %c                     | int                         | Caractère ASCII correspondant à la valeur entière fournie| 
 |  %s                     | char *	                  | Chaîne de caractères (pointeur vers le premier caractère)|
 | %d                     | int                         | Entier décimal (base 10) |
 |   %i                      | int                         | Entier décimal (base 10), octal (base 8 avec le préfixe 0), hexadécimal (base 16 avec le préfixe 0x) |
 | %%                   | caractere %        | Affiche le caractère %|

# Requirements
    Environnement Ubuntu 20
    GCC
    Git
# Fichiers et Structure :<h5>Clic pour plus de details</h5>
-
<details>
  <summary>
  <a href="https://github.com/HB74C21/holbertonschool-printf/blob/develop/_printf.c" target="_blank">
  <i>1. (_printf.c))</i>
  </a>
  </summary>
  <p>Ce fichier contient l'implémentation de la fonction `_printf`, qui est responsable du traitement des spécificateurs de format et de l'appel des fonctions d'impression correspondantes pour imprimer les types spécifiés.</p>
 </details>
-
<details><summary>2. [main.h]()</summary>
 - Fichier d'en-tête qui inclut les prototypes de fonction et la définition de la structure `op_t`, associant les spécificateurs de format à leurs fonctions d'impression correspondantes.
 </details>
-
<details><summary>3. [print_char.c]()</summary>
 - Implémentation de la fonction `print_char`, qui gère le spécificateur `%c` pour imprimer un seul caractère.
 </details>
-
<details><summary>4. [print_string.c]()</summary>
 - Implémentation de la fonction `print_string`, qui gère le spécificateur `%s` pour imprimer une chaîne de caractères.
 </details>
-
<details><summary>5. [print_decimal.c]()</summary>
  - Implémentation de la fonction `print_decimal`, qui gère les spécificateurs `%d` et `%i` pour imprimer des entiers décimaux.
 </details>
-
<details><summary>6. [print_integer.c]()</summary>
 - Implémentation de la fonction `print_integer`, qui gère les spécificateurs `%d` et `%i` pour imprimer des entiers.
 </details>
-
<details><summary>7. [print_percent.c]()</summary>
 - Implémentation de la fonction `print_percent`, qui gère le spécificateur `%%` pour imprimer un signe pourcent.
 </details>
-
<details><summary>8. [print_positive_int.c]()</summary>
 - Implémentation de la fonction `print_positive_int`, une fonction auxiliaire pour imprimer des entiers positifs.
 </details>
-
<details><summary>9. [_putchar.c]()</summary>
 - Implémentation de la fonction `_putchar`, qui imprime un seul caractère sur la sortie standard.
 </details>


## Comment utiliser

 1. Incluez le fichier d'en-tête `main.h` dans votre code source C.
 2. Implémentez la fonction `_printf` dans votre projet.
 3. Utilisez la fonction `_printf` dans votre code en fournissant une chaîne de format et d'autres arguments au besoin.

## Commande de compilation

 Votre code sera compilé de la manière suivante :
 ```bash
 gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o my_printf

 la commande pour compiler sera ./my_printf
 ```

 <br>

***

 <br>

### Type de donnée : %c
 <details><summary> <u><i>Clic ici pour afficher/cacher l'exemple concernant le %c:</u></i></summary>
 <br>

 Pour afficher le character "A" en majuscule :

 <br>

 <u>Exemple de fichier main.c </u>:

 <br>

 ```c
 #include <stdio.h>
 #include "main.h"

 int main(void)
 {
    char character = 'A';

    _printf("%c\n", character);
    return 0;
 }
 ```

 <br>

 Affiche sur le terminal  une fois la compilation et l'execution du code: 
 
 <br>

 ```bash
 $  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o my_printf
 $ ./my_printf
 A
 $
 ```
 </details>

 <br>

***

 <br>

### Type de donnée : %s 
 <details><summary> <u><i>Clic ici pour afficher/cacher l'exemple concernant le %s:</u></i></summary>
 <br>

 Pour afficher la phrase "Hello, World!" 

 <br>

 <u>Exemple de fichier main.c</u>:

 <br>

 ```c
 #include <stdio.h>
 #include "main.h"

 int main(void)
 {
    char *str = "Hello, World!";

    _printf("String: [%s]\n", str);
    return 0;
 }
  ```
  
  <br>

 Affiche sur le terminal  une fois la compilation et l'execution du code: 

 <br>

 ```bash
 $  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o my_printf
 $ ./my_printf
 Hello, World!
 $
 ```
 </details>

 <br>

***

 <br>

### Type de donnée : %d 
 <details><summary> <u><i>Clic ici pour afficher/cacher l'exemple concernant le %d:</u></i></summary>
 <br>
 
 Pour afficher le nombre entier "-42"

 <br>

  <u>Exemple de fichier main.c </u>:

  <br>
 
  ```c
 #include <stdio.h>
 #include "main.h"

 int main(void)
 {
    int number = -42;

    _printf("-42\n", number);
    return 0;
 }
 ```

 <br>

  Affiche sur le terminal une fois la compilation et l'exécution du code :

  <br>

 ```bash
 $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o my_printf
 $ ./my_printf
 -42
 $
 ```
 </details>

 <br>

***

 <br>

### Type de donnée : %i 
 <details><summary> <u><i>Clic ici pour afficher/cacher l'exemple concernant le %i:</u></i></summary>
 <br>
 
 Pour afficher le nombre entier 255 en utilisant sa forme décimale (base 10).

 <br>

 <u>Exemple de fichier main.c </u>:

 <br>

 ```c
 #include <stdio.h>
 #include "main.h"

 int main(void)
 {
    int decimalNumber = 255;

    _printf("%i\n", decimalNumber);

    return 0;
 }
 ```

 <br>

  Affiche sur le terminal une fois la compilation et l'exécution du code :
 
 <br>
 
 ```bash
 $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o my_printf
 $ ./my_printf
 255
 $
 ```
 </details>

 <br>

***

 <br>

### Type de donnée %% :
 <details><summary> <u><i>Clic ici pour afficher/cacher l'exemple concernant le %i:</u></i></summary>
 <br>

 On veut simplement afficher le caractère `%`.

 <u>Exemple de fichier main.c </u>:

 <br>

 ```c
 #include <stdio.h>
 #include "main.h"

 int main(void)
 {
    _printf("%%\n");

    return 0;
 }
 ```

<br>

 Affiche sur le terminal une fois la compilation et l'exécution du code :

 ```bash
 $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o my_printf
 $ ./my_printf
 %
 $
 ```
 </details>

 <br>

 ***

 <br>

 ### Authors of project _printf :

 Santos Nascimento Néia  & Bouabdallah Hocine : 

 version 1.0


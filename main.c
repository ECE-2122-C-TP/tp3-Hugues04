#include <stdio.h>


int main() {
    // Exercice 1
    /*int a = 0, b = 0;
    printf ("Saisir une valeur pour a:\n");
    scanf ("%d", &a);
    printf ("Saisir une valeur pour b:\n");
    scanf ("%d", &b);
    if (a < b) {
        printf("Le plus grand des deux est %d", b);
    }
    else if (a > b) {
        printf("Le plus grand des deux est %d", a);
    }
    else
        printf ("Les deux sont egaux");*/

    // Exercice 2
   /*int l = 0, L = 0, P, A;
   printf ("Saisir une valeur pour l:\n");
   scanf ("%d", &l);
   printf ("Saisir une valeur pour L:\n");
   scanf ("%d", &L);
   P = (l+L)*2;
   A = l*L;
   printf ("Les valeurs correspondantes au perimetre et a l'aire sont %d, %d", P, A);*/

   // Exercice 3
   /*int a = 0;
   printf ("Saisir une valeur pour a:\n");
   scanf ("%d", &a);
   if (a%3 == 0) {
       printf ("L'entier est un multiple de 3:\n");
   }
       else {
       printf ("L'entier n'est pas divible par 3:\n");
   }
   if (a >= 10) {
   printf ("L'entier est superieur ou egal a 10:\n");
   }
   else {
       printf ("L'entier n'est pas superieur ou egal a 10:\n");
   }*/


   // Exercice 4
   /*int age, e;
   printf ("Saisissez votre age:\n");
   scanf ("%d", &age);
   printf ("Saisir 1 si etudiant inferieur a 27 sinon saisir 0:\n");
   scanf ("%d", &e);
   if (age < 12) {
    printf ("Vous beneficiez du tarif enfant, 4 euros");
}
    if (age >= 12, age <= 17 || e == 1) {
    printf ("Vous beneficiez du tarif jeune, 6 eureos");
}
    if (age >= 65) {
        printf("Vous beneficiez du tarif senior, 6 euros");
    }
    else {
        printf ("Vous devez payer le tarif plein, 9 euros");
    }*/

   // Exercice 5
   /*int n;
   printf ("Saisissez la valeur pour n correspondant a votre boisson:\n");
   scanf ("%d", &n);
   if (n == 1) {
       printf ("Vous avez selectionne la boisson suivante : Sprite");
   }
   if (n == 2) {
       printf ("Vous avez selectionne la boisson suivante : Hawai");
   }
   if (n == 3) {
       printf ("Vous avez sekectionne la boisson suivante : Orangina");
   }
   if (n == 10) {
       printf ("Vous avez selectionne la boisson chaude suivante : Chocolat Chaud");
   }
   if (n == 11) {
       printf ("Vous avez selectionne la boisson chaude suivante : Cafe");
   }
   if (n != 1 && n != 2 && n != 3 && n != 10 && n != 11) {
       printf ("Erreur : numero correspondant a aucune boisson:\n");
   }*/

// Exercice 6
/*float n1, n2, n3, m;
printf ("Saisissez une valeur pour la note n1 \n");
scanf ("%f", &n1);
while (n1<0 || n1>20) {
    printf ("Votre note n'est pas comprise entre 0 et 20 \n");
    scanf ("%f", &n1);
}
printf ("Saisissez une valeur la pour note n2 \n");
scanf ("%f", &n2);
while (n2<0 || n2>20) {
    printf ("Votre note n'est pas comprise entre 0 et 20 \n");
    scanf ("%f", &n2);
}
printf ("Saisissez une valeur pour la note n3 \n");
scanf ("%f", &n3);
while (n3<0 || n3>20) {
    printf ("Votre note n'est pas comprise entre 0 et 20 \n");
    scanf ("%f", &n3);
}
m = (n1 + n2 + n3) / 3;
printf ("La moyenne est de : %f", m); */


//Exercice 8
/* int a;
printf ("saisiassez une valeur pour a");
scanf ("%d", &a);
while ( a % 7 != 0 && a % 2 != 0 ) {
    printf ("La valeur saisie n'est un multiple ni de 7 ni de 2, saisissez une nouvelle valeur");
    scanf ("%d", &a);
}
printf ("Votre valeur est un multiple de 7 ou de 2"); */


//Exercice 9
/*int pierre, s = 0, i = 1, b;
printf ("Saisissez une valeur pour pierre");
scanf ("%d", &pierre);
if ( pierre == 0) {
    printf ("Vous ne pouvez pas faire d'etages");
}
else {
    while (pierre > (i * i) + s ) {
        s = s + (i *i);
        i = i + 1;
    }
    b = i - 1;
    printf ("Vous pouvez faire %d etages", b);
} */


//Exercice 7
/*int a = 1, nbclasse, nbeleve, total = 0;
printf ("Saisissez le nombre de classe");
scanf ("%d", &nbclasse);
while (a <= nbclasse) {
    printf ("Saisissez le nombre d'eleve dans la classe : %d", a);
    scanf ("%d", &nbeleve);
    total = total + nbeleve;
    a = a + 1;
}
printf ("Le nombre total d'eleve est %d", total); */


//Exercice 10
/*float a, total = 0, b = 0, m;
printf ("Saisir une valeur pour a");
scanf ("%f", &a);
while (a > 0) {
    total = total + a;
    b = b + 1;
    printf ("Saisir une nouvelle valeur pour a");
    scanf ("%f", &a);
}
m = (total / b);
printf ("La moyenne des nombres saisis est %f", m);
 // le debug sert a savoir quel est la valeur affectée a chaque variable */
    return 0;
}


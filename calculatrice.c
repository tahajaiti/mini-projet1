#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

void addition(){
    int n;
    float result = 0;


    printf("\nCombien de chiffres vas-tu saisir: "); //how many numbers
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++) { //entering numbers
        printf("Entrez une chiffre %d : ", (i+1)); 
        scanf("%d", &num[i]);
        result += num[i];
    }
    printf("\nResultat: %.2f", result);
    sleep(2);
}

void soustraction(){
    float a,b;

    printf("Entrer le premier nombre: ");
    scanf("%f", &a);

    printf("Entrer le deuxieme nombre: ");
    scanf("%f", &b);


    printf("\nResultat: %.2f", a-b);
    sleep(2);
}

void multiplication(){
    int n;
    double result = 1;


    printf("\nCombien de chiffres vas-tu saisir: "); //how many numbers
    scanf("%d", &n);

    double num[n];

    for (int i = 0; i < n; i++) { //entering numbers
        printf("Entrez une chiffre %d : ", (i+1)); 
        scanf("%lf", &num[i]);
        result *= num[i];
    }
    printf("\nResultat: %.2lf", result);
    sleep(2);
}

void division(){
    double a,b;
    double result = 0;

    do{
        printf("Entrer le premier nombre non nul(0): ");
        scanf("%lf", &a);

        printf("Entrer le deuxieme nombre non nul(0): ");
        scanf("%lf", &b);
    } while (a == 0 || b == 0);
    
    result = a/b;

    if (b != 0 || a!= 0){
        printf("\nResultat: %.2f", result);}
    else
        printf("Erreur division par zero");
    sleep(2);
}

void moyenne(){
    int n;
    double result;

    printf("\nCombien de chiffres vas-tu saisir: "); //how many numbers
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++) { //entering numbers
        printf("Entrez une chiffre %d : ", (i+1)); 
        scanf("%d", &num[i]);
        result += num[i];
    }

    printf("\nResultat: %.2lf", result/n);
    sleep(2);
}

void abss(){
    double a;

    printf("Entrer un nombre: ");
    scanf("%lf", &a);

    printf("Resultat: %.2lf", fabs(a));
}

void exponant(){
    int base, expo;
    double result = 1.0;

    printf("Entrer la base: ");
    scanf("%d", &base);
    printf("Entrer l'exposant");
    scanf("%d", &expo);

    for(int i = 0; i < expo; i++) {
        result *= base;
    } printf("%d ^ %d = %.2lf\n", base, expo, result);
    sleep(2);
}

void racine(){
    double a;
    do
    {
        printf("Entrer un nombre positif: ");
        scanf("%lf", &a);
    } while (a < 0);

    printf("Resultat: %.4lf", sqrt(a));
    sleep(2);
}

int main(){
    int choice;

    do
    {
        printf("\n|**** Calculatrice ****|\n");
        printf("|*** 1.Addition ***|\n");
        printf("|*** 2.Soustraction ***|\n");
        printf("|*** 3.Multiplication ***|\n");
        printf("|*** 4.Division ***|\n");
        printf("|*** 5.Moyenne ***|\n");
        printf("|*** 6.Valeur Absolue ***|\n");
        printf("|*** 7.Exponantion ***|\n");
        printf("|*** 8.Racing Carree ***|\n");
        printf("|*** 9.Quitter ***|\n");
        scanf("%d", &choice);

        switch (choice){
        case 1:addition();break;
        case 2:soustraction();break;
        case 3:multiplication();break;
        case 4:division();break;
        case 5:moyenne();break;
        case 6:abss();break;
        case 7:exponant();break;
        case 8:racine();break;
        default:
            break;
        }
    } while (choice != 9 || choice >10);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>


void main()
{
    int a=0, b=0, c=0, d=0;

    //Condition
    if(a==b) {
        printf("Ils sont egaux \n");
    } else {
        printf("Ils sont differents");
    }

    //Condition avec operateurs logiques
    if((a==b) && (a==c)) {
        printf("Ils sont tous egaux \n");
    } else {
        printf("Ils sont differents \n");
    }

    if((a==b) || (a==c)) {
        printf("Ils sont egaux \n");
    } else {
        printf("Ils sont tous differents \n");
    }

    //Condition else if

    if((a==b) || (a==c)) {
        printf("Ils sont egaux \n");
    } else if((a==c) && (a!=d)) {
        printf("Blabla \n");
    }

    //Boucle
    int i=0;
    int n;

    printf("Entrez votre choix\n");
    scanf("%d",&n);

    for(i=0; i<n; i++) {
        printf("A");
    }
    printf("\n");

    //Tant que
    i=0;
    while(i<5) {
        printf("Jaaj \n");
        i++;
    }

    i=0;

    do {
        printf("Jaaj \n");
        i++;
    } while(i<5);


    //Cas alternatif

    int choix=-1;

    printf("Entrez votre choix\n");
    scanf("%d",&choix);
    switch(choix){
         case 0:
            printf("Quitter\n");
            break;
        case 1:
            printf("Dormir\n");
            break;
        case 2:
            printf("Manger\n");
            break;
        case 3:
            printf("NOUNOURS\n");
            break;
        default:
            printf("DORMIR\n");
            break;
    }

    //Test ? instruction 1 : instruction 2

    a==b? printf("Egaux"): printf("Diff");

    //Instruction break;

    for(i=0;i<5;i++) {
        printf("Hello \n");
        if(i<3) {
            break;
        }
    }

    for(i=0;i<5;i++) {
        printf("Hello \n");
        if(i<3) {
            continue;
        }
        printf("JeeJ");
    }




}

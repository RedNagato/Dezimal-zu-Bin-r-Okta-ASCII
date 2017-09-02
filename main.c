//
//  main.c
//  Zahlensystem Umrechner
//
//  Created by Mithat Sen on 20.08.17.
//  Copyright © 2017 Mithat Sen. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main(){
    char eingabe;
    int zahl;
    printf("\nWählen sie (O)ktal, (H)exal oder (A)SCII >  ");
    eingabe = getchar();
    printf("\nBitte Dezimalzahl eingeben : ");
    scanf("%i", &zahl);

    switch (toupper(eingabe)){
        case 'O':
            printf("Deziaml %i = Oktal %o  \n", zahl , zahl);
            break;

        case 'H':
            printf("Dezimal %i = Hexal %x  \n", zahl,zahl);
            break;

        case 'A':
            if (zahl <=255)
                printf("ASCII-Code %i enspricht %c \n",zahl,zahl);

            else
                    printf("Das zu groß, die höchste Zahl in ASCII Code ist 255 \n\a");
            break;

    }
}

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]){
    char class[100];
    char race[100];
    int c, classNum, raceNum;
    
    while (--argc > 0 && (*++argv)[0] == '-')
        while (c = *++argv[0])
            switch (c){
                case 'b':
                    strcpy(class, "bard");
                    classNum = 1;
                    break;
                case 'c':
                    strcpy(class, "cleric");
                    break;
                case 'd':
                    strcpy(class, "druid");
                    raceNum = 1;
                    break;
                case 'e':
                    strcpy(race, "elf");
                    if (raceNum == 2)
                        strcpy(race, "half-elf");
                    break;
                case 'f':
                    strcpy(class, "fighter");
                    break;
                case 'g':
                    strcpy(race, "gnome");
                    break;
                case 'h':
                    raceNum = 2;
                    break;
                case 'm':
                    strcpy(class, "monk");
                    break;
                case 't':
                    strcpy(race, "tiefling");
                    break;
                case 'p':
                    strcpy(class, "paladin");
                    break;
                case 'r':
                    strcpy(class, "rogue");
                    classNum = 2;
                    if (raceNum == 1)
                        strcpy(race, "dragonborn");
                    break;
                case 's':
                    strcpy(class, "socrerer");
                    break;
                case 'w':
                    strcpy(class, "wizard");
                    classNum = 3;
                    break;
                case 'o':
                    if (raceNum == 2)
                        strcpy(race, "half-orc");
                    break;
                case 'u':
                    if (raceNum == 2)
                        strcpy(race, "human");
                    break;

                case 'a':
                    if (raceNum == 2)
                        strcpy(race, "halfling");
                    switch (classNum){
                        case 1:
                            strcpy(class, "barbarian");
                            break;
                        case 2:
                            strcpy(class, "ranger");
                            break;
                        case 3:
                            strcpy(class, "warlock");
                            break;
                    break;

                    }

            }
    printf("%s   %s", class, race);
    return 0;



}

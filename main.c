#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void VanIsmetlodes(char karatkerlanc[]);
void VeletlenKarakterLanc(char karakterek[], char Veletlenek[]);

int main()
{
        char Veletlenek[11];
    char ABC[] = {'a', 'b', 'c','d','e','f','g','h', 'i','j','k','l','m','n','h', 'y', 'z', '\0' } ;
    VeletlenKarakterLanc(ABC, Veletlenek);

    for(int i = 0; Veletlenek[i] != '\0'; i++){
        printf("%c \n", Veletlenek[i]);
    }

}

void VanIsmetlodes(char karakterlanc[])
{
    int i, j = 0;
    for(i = 1; /* i<=10 */ karakterlanc[i] != '\0' ; i++)
    {
        if(karakterlanc[i]==karakterlanc[i-1]) j = 1;
    }
    if (j == 1) printf("van ismetlodes");
    else printf("nincs ismetlodes");
}
void VeletlenKarakterLanc(char karakterek[], char veletlenek[]){

    int mennyiveletlen = 1;
    int Size = 0;
    for(int i = 0; karakterek[i] != '\0'; i++){ Size++; }

    for(int i = 0; karakterek[i] != '\0'; i++){
        int Veletlenedik = rand() % (Size-1)  +0;
        if(mennyiveletlen <= 10)
        {
            veletlenek[i] = karakterek[Veletlenedik];
            mennyiveletlen++;
        }
    }
    veletlenek[11] = '\0';


    return;
}

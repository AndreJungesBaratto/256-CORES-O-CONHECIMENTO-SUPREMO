#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void main(){
    system("cls");
    char cor[13];
    for(int i=0; i<256; i++){
    sprintf(cor, "\033[38;5;""%d""m", i);
    printf("%s"" cor numero %d.\e[0;0m\n", cor, i);
    }
}

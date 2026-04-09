/*
    Autor: Jean Lucas Thomazelli Silva
    Data: 14/03/2026
    Objetivo: calcular a media de 5 materias
*/
#include <stdio.h>

int main()
{
    float media_mat; 
    float media_geo; 
    float media_hist; 
    float media_port;
    float media_ingl;
    
    media_mat = (9 + 10 + 9 + 9) / 4.0;
    media_geo = (7 + 8 + 8 + 6) / 4.0;
    media_hist = (8 + 8 + 7  + 6) / 4.0;
    media_port = (6 + 6.5 + 7 + 6.3) / 4.0;
    media_ingl = (7 + 6 + 7.5 + 6) / 4.0;

    printf(" ________________________________________________\n");
    printf("|                                                |\n");
    printf("|        Minha media em Matematica e %.2f!       |\n", media_mat);
    printf("|        Minha media em Geografia e %.2f!        |\n", media_geo);
    printf("|        Minha media em Historia e %.2f!         |\n", media_hist);
    printf("|        Minha media em Português e %.2f!       |\n", media_port);
    printf("|        Minha media em Inglês e %.2f!          |\n", media_ingl);
    printf("|________________________________________________| \n");
    return 0;
}

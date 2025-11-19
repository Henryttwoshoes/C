#include <stdio.h>
 
int main() {
    int playerone, playertwo;
    // Mensagens iniciais do jogo
    printf("Escolha entre \n 1 - pedra \n 2 - tesoura \n 3 - papel \n");
    printf("Escolha do playerone: \n");
    scanf("%d", &playerone);
    printf("Escolha do playertwo: \n");
    scanf("%d", &playertwo);

    
    // Condições pra cada possibilidade do jogo
    if (playerone == playertwo){ // Empate
        printf("Empate.\n");
    }
    else if (playerone == 1 && playertwo == 3) // vitória do papel player 2
    {
        printf("Playertwo ganhou.\n");
    }
    else if (playertwo == 3 && playertwo == 1){ // vitória do papel player 1
        printf("Playerone ganhou.\n");
    }
    else if (playerone == 1 && playertwo == 2){// vitória pedra player 1
        printf("Playerone ganhou.\n");
    }
    else if (playerone == 2 && playertwo == 1) // vitória pedra player 2
    {
        printf("Playertwo ganhou.\n");
    }
    else if (playerone == 2 && playertwo == 3){// vitória tesoura player 1
        printf("Playerone ganhou.\n");
    }
    else if (playerone == 2 && playertwo == 3) // vitória pedra player 2
    {
        printf("Playertwo ganhou.\n");
    }
    else if (playerone == 2 && playertwo == 3){// vitória tesoura player 1
        printf("Playerone ganhou.\n");
    }
    else if (playerone == 2 && playertwo == 3) // vitória pedra player 2
    {
        printf("Playertwo ganhou.\n");
    }

    return 0;
}
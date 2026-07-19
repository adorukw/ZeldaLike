#include "game.h"
#include <stdio.h>

int main() {
    printf("项目启动！\n");
    Game *game = CreateGame("塞尔达拉伊克");
    game->PrintGameInfo(game);
    return 0;
}

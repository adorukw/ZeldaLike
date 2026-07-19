#include "game.h"
#include <SDL2/SDL.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    (void)argc, (void)argv;

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        fprintf(stderr, "SDL初始化失败：%s\n", SDL_GetError());
        return 1;
    }
    printf("项目启动！\n");
    Game *game = CreateGame("塞尔达拉伊克");
    game->PrintGameInfo(game);
    return 0;
}

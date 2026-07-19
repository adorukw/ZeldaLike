#include "../include/game.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void PrintGameInfoImpl(Game *self) {
    printf("游戏名：%s", self->gameName);
    return;
}

Game *CreateGame(const char *name) {
    Game *game = malloc(sizeof(Game));
    game->gameName = malloc(strlen(name) + 1);
    strcpy(game->gameName, name);

    game->PrintGameInfo = PrintGameInfoImpl;
    return game;
}

void DestroyGame(Game *self) {
    if (!self) {
        return;
    }
    free(self->gameName);
    free(self);
}

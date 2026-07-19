#ifndef GAME_H
#define GAME_H

typedef struct Game {
    char *gameName;

    void (*PrintGameInfo)(struct Game *self);
} Game;

Game* CreateGame(const char *name);
void DestroyGame(Game *self);

#endif

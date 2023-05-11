#ifndef NPC_H
#define NPC_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "input_state.h"

class Npc {
public:
    Npc(SDL_Renderer* renderer, const char* file_path, int x, int y, int w, int h);
    ~Npc();
    void render(SDL_Renderer* renderer);
    void update(InputState* input_state);

private:
    SDL_Texture* texture;
    SDL_Rect position;
    int speed_x;
    int speed_y;
    bool can_jump;
    void applyInputState(InputState* input_state);
};

#endif
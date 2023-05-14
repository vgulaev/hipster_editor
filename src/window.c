#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;

void close_button()
{
    SDL_Rect dst;
    const char *svg =
        "<svg height='24' width='24'><path d='M19 6.41 17.59 5 12 10.59 6.41 5 5 6.41 10.59 12 5 17.59 6.41 19 12 13.41 17.59 19 19 17.59 13.41 12z' fill='white'></path></svg>";

    SDL_RWops *rw = SDL_RWFromConstMem(svg, strlen(svg));
    SDL_Surface *surface = IMG_Load_RW(rw, 1);
    SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, surface);

    dst.x = 200;
    dst.y = 200;
    dst.w = 24;
    dst.h = 24;

    SDL_RenderCopy(renderer, texture, NULL, &dst);
}

void window_init()
{
    window = SDL_CreateWindow(
        "Jeu de la vie", SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        SDL_WINDOW_SHOWN | SDL_WINDOW_BORDERLESS);

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    SDL_SetRenderDrawColor(renderer, 31, 31, 31, 255);
    SDL_RenderClear(renderer);
}

void draw_rect(int x, int y, int w, int h)
{
    SDL_Rect r;
    r.x = x;
    r.y = y;
    r.w = w;
    r.h = h;

    // Set render color to blue ( rect will be rendered in this color )
    SDL_SetRenderDrawColor(renderer, 255, 0, 255, 255);

    // Render rect
    SDL_RenderFillRect(renderer, &r);
}

void quit()
{
    SDL_RenderPresent(renderer);

    // Wait for 5 sec
    SDL_Delay(5000);

    SDL_DestroyWindow(window);
    SDL_Quit();
}

void draw_window() {
  window_init();

  draw_rect(50, 50, 50, 50);
  draw_rect(100, 100, 50, 50);
  close_button();

  quit();
}

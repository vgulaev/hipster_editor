#include "window.h"

void main_main() {
  draw_window();
}

int main(int, char **) {
  main_main();
  return 0;
}

int WinMain(int, char **) {
  main_main();
  return 0;
}

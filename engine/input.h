#ifndef INPUT_H
#define INPUT_H

#include <SDL.h>
#include <engine/vector2.h>
#include <iostream>

class Input {
public:
  virtual ~Input();
  static Input *getInstance();
  void update();
  bool getKey(int keyCode);
  bool getKeyUp(int keyCode);
  bool getKeyDown(int keyCode);

  bool getMouseButton(int number);
  bool getMouseButtonDown(int number);
  bool getMouseButtonUp(int number);

  bool getMustQuit() { return mustquit; };

  Vector2 getMouseToScreen();
  bool mustquit = false;

  int window_width, window_height;

private:
  Input();
  static Input *instance;
  bool keys[282];
  bool keysUp[282];
  bool keysDown[282];

  bool keysalreadyUp[282];
  bool keysalreadyDown[282];

  bool mouseButton[20];
  bool mouseButtonUp[20];
  bool mouseButtonDown[20];

  bool mouseButtonAlreadyUp[20];
  bool mouseButtonAlreadyDown[20];

  Vector2 mousePos;
};

#endif

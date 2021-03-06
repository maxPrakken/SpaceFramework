#ifndef PLANET_H
#define PLANET_H

#include <SDL.h>
#include <engine/entity.h>
#include <engine/resourcemanager.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

class Planet : public Entity {
public:
  Planet();
  virtual ~Planet();

  float timer;
  int currentSprite;

  void update(float dt);
  // Statics
  static Planet *generatePlanet(SDL_Renderer *renderer, Vector2 size);

private:
  SDL_Renderer *renderer;
};

#endif

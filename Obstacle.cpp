#include "Obstacle.h"

Obstacle::Obstacle() : rayon(0)
{
}

Obstacle::Obstacle(Vector2f position, int rayon) : position(position), rayon(rayon)
{
}

Vector2f Obstacle::getPosition()
{
    return this->position;
}
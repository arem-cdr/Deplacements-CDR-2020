#pragma once

#include <iostream>

#include "Pathfinding.h"

class DijkstraPathfinding : public Pathfinding
{
private:
    float matrix[nbSubX][nbSubY];

public:
    DijkstraPathfinding();

    virtual void updateObstacle(vector<Obstacle> obstacles);
    virtual vector<Vector2<int>> generatePath(Vector2<int> startPos, Vector2<int> endPos);

    void transformObstacleInWeight();
    void transformObstacleInWeightGradient();
};
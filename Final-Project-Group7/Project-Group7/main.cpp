#include <stdio.h>
#include "src/LandBasedRobot/LandBasedRobot.h"
#include "src/LandBasedTracked/LandBasedTracked.h"
#include "src/LandBasedWheeled/LandBasedWheeled.h"
#include "src/Maze/Maze.h"
#include "src/API/API.h"
#include "src/Algorithm/Algorithm.h"

int main()
{
	fp::Algorithm algo;
	fp::Maze maze;
	algo.GenerateSequence(maze,0,0,'n');
}

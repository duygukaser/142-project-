
#include <iostream>
#include "Event.h"
#include "Spaceship.h"
#include "Manager.h"
#include <memory>
int main() {
    spaceshipDesign();
    std::shared_ptr<Spaceship>ship=getSelectedShip();
    RandomEventGenerator(ship);
    ScoreCalculator(ship);
    return 0;
}

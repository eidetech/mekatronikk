#include <iostream>
#include <vector>


// Klasser (datatyper) skal helst ha navn med stor forbokstav.
class WayPoint
{
public:
    double x;
    double y;
};

class Trajectory
{
public:
  void addWayPoint(WayPoint wp);
  void print();

private:
  std::vector<WayPoint> waypoints;
};


int main()
{

    WayPoint wp;
    wp.x = 3.41;
    wp.y = 0.41;

    std::cout << "x: " << wp.x << " " << "y: " << wp.y << std::endl;

    return 0;
}

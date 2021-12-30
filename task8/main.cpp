#include <iostream>

struct coordinates
{
    float longitude;
    float latitude;
    float altitude;
};

struct route
{
    struct coordinates start_point;
    struct coordinates end_point;
};


int main(int argc, char** argv)
{
    struct route route;
    struct coordinates coord1;
    coord1.longitude = 23.98;
    coord1.latitude = 49.55;
    coord1.altitude = 264.17;
    struct coordinates coord2;
    coord2.longitude = 23.97;
    coord2.latitude = 49.51;
    coord2.altitude = 274.38;


    route.start_point = coord1;
    route.end_point = coord2;
    
    std::cout << "Destination coordinates: " << std::endl;
    std::cout << "longitude: " << coord2.longitude << std::endl;
    std::cout << "latitude: " << coord2.latitude << std::endl;
    std::cout << "altitude: " << coord2.altitude << std::endl;

    return 0;
}
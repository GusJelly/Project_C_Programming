#ifndef BIKE_MANAGEMENT_H
#define BIKE_MANAGEMENT_H

// Code goes below this line:

typedef struct Bike {
    char* brand;
    char* model;
    char* color;
    char* weight;
    char* type;  // The type can be any common bike type (mountain, city, ...)
    int size;
    float price;
} Bike;

typedef struct MountainBike {
    Bike bike;
    int suspension_travel;
} MountainBike;

typedef struct CityBike {
    Bike bike;
    int basket_capacity;
} CityBike;

typedef struct RoadBike {
    Bike bike;
    int number_of_gears;
} RoadBike;

#endif

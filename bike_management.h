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
    int suspension_travel;  // Suspension travel specific to mountain bikes
} MountainBike;

typedef struct CityBike {
    Bike bike;
    int basket_capacity;  // Basket capacity specific to city bikes
} CityBike;

typedef struct RoadBike {
    Bike bike;
    int number_of_gears;  // Number of gears specific to road bikes
} RoadBike;

#endif

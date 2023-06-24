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

#endif

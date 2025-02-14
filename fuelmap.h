#ifndef FUELMAP_H
#define FUELMAP_H

#define MAP_ENTRIES 225 // 15 x 15

typedef struct {
    float engineRPM;
    float engineLoad;
    float AFRatio;
} FuelMapEntry;

FuelMapEntry* loadFuelMap(char *filename);

#endif
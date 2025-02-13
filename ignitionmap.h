#ifndef IGNITIONMAP_H
#define IGNITIONMAP_H

#define MAP_ENTRIES 225 // 15 x 15

typedef struct {
    float engineRPM;
    float engineLoad;
    float ignitionTiming;
} IgnitionMapEntry;

IgnitionMapEntry* loadIgnitionMap(char *filename);

#endif
#include "fuelmap.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FuelMapEntry* loadFuelMap(char *filename) {

    FuelMapEntry *map = malloc(MAP_ENTRIES * sizeof(FuelMapEntry));

    FILE *file = fopen(filename, "r");

    char line[256];
    int index = 0;
    while (fgets(line, sizeof(line), file) != NULL && index < MAP_ENTRIES) {
        // Remove newline if present
        line[strcspn(line, "\n")] = '\0';

        // Tokenize the line assuming format: value1,value2,value3
        char *token = strtok(line, ",");
        if (token != NULL)
            map[index].engineRPM = atof(token);

        token = strtok(NULL, ",");
        if (token != NULL)
            map[index].engineLoad = atof(token);

        token = strtok(NULL, ",");
        if (token != NULL)
            map[index].AFRatio = atof(token);
        
        index++;
    }

    fclose(file);

    return map;
}
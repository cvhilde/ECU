#include "comms.h"
#include "fuel.h"
#include "fuelmap.h"
#include "ignition.h"
#include "ignitionmap.h"
#include "sensors.h"
#include "timing.h"
#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    // Initialize
    IgnitionMapEntry *ignitonMap = loadIgnitionMap("/home/cvhil/personal/ECU/csvFiles/ignitionMap.csv");
    FuelMapEntry *fuelMap = loadFuelMap("/home/cvhil/personal/ECU/csvFiles/fuelMap.csv");


    while(1) {
        // Logic loop
    }



    free(ignitonMap);
    return 0;
}
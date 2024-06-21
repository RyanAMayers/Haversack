#include <iostream>
#include <math.h>
#include <time.h>
#include <chrono>

// Base random value generator. Seeded by timestamp.
int randValue(int range) {
    // Re-seeds itself every run based on time and a random value it generates.
    // Probably not necessary to re-seed every time, but this should be random
    // enough and better than the timestamp in seconds. Maybe I should set up
    // an init function that seeds it once, but this is okay enough for testing.
    // Based on this post:
    //https://stackoverflow.com/questions/11943525/seeding-a-random-number-generator-c
    srand(rand() ^ time(NULL));
    return rand() % range + 1;
}

// Roll a d20!
int d20() {
    return randValue(20);
}

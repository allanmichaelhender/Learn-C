#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section
struct Race {
  int numberOfLaps;
  int currentLap;
  char* firstPlaceDriverName;
  char* firstPlaceRaceCarColor;
};

struct RaceCar {
  char* driverName;
  char* raceCarColor;
  int totalLapTime;
  };

// Print functions section
void printIntro() {
  printf("Welcome to our main event digital race fans!\nI hope everybody has their snacks because we are about to begin!\n\n");
};

void printCountDown() {
  printf("Racers Ready! In...\n5\n4\n3\n2\n1\nRace!\n\n");
};

void printFirstPlaceAfterLap(struct Race race) {
  printf("After lap number %i\nFirst place is: %s in the %s race car!\n\n", race.currentLap, race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
};

void printCongratulation(struct Race race) {
  printf("Let's all congratulate %s in the %s race car for an amazing performance.\nIt truly was a great race and everybody have a goodnight!\n\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
};

// Logic functions section
int calculateTimeToCompleteLap() {
  int speed = (rand() % 3) + 1;
  int acceleration = (rand() % 3) + 1;
  int nerves = (rand() % 3) + 1;

  return speed + acceleration + nerves;
};

void updateRaceCar(struct RaceCar* raceCar) {
  raceCar->totalLapTime += calculateTimeToCompleteLap();
};

void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2) {

  if (raceCar1->totalLapTime <= raceCar2->totalLapTime){  race->firstPlaceDriverName = (*raceCar1).driverName;
  race->firstPlaceRaceCarColor = (*raceCar1).raceCarColor;
  } else {
  race->firstPlaceDriverName = (*raceCar2).driverName;
  race->firstPlaceRaceCarColor = (*raceCar2).raceCarColor;
  };
  // printf("%s\n", (*race).firstPlaceDriverName);
};

void startRace(struct RaceCar* raceCar1, struct RaceCar* raceCar2) {
  struct Race race = {5, 1, "", ""};

  for (int i=1; i <= race.numberOfLaps; i++) {
    updateRaceCar(raceCar1);
    // printf("%i\n", raceCar1->totalLapTime);
    updateRaceCar(raceCar2);
    // printf("%i\n", raceCar2->totalLapTime);
    updateFirstPlace(&race, raceCar1, raceCar2);
    printFirstPlaceAfterLap(race);  
    race.currentLap += 1;
    };
  printCongratulation(race);
};

int main() {
	srand(time(0));
  struct RaceCar raceCar1 = {"a", "red", 0};
  struct RaceCar raceCar2 = {"b", "blue", 0};
  printIntro();
  printCountDown();
  startRace(&raceCar1, &raceCar2);

  
};
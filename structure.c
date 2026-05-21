#include <stdio.h>

struct TIME {
    int hour;
    int minute;
};

struct TRAIN_INFO {
    int trainNo;
    char trainName[30];
    char startStation[30];
    char endStation[30];
    struct TIME departure;
    struct TIME arrival;
};

int main() {
    struct TRAIN_INFO t;

    printf("Enter Train Number: ");
    scanf("%d", &t.trainNo);

    printf("Enter Train Name: ");
    scanf("%s", t.trainName);

    printf("Enter Starting Station: ");
    scanf("%s", t.startStation);

    printf("Enter Ending Station: ");
    scanf("%s", t.endStation);

    printf("Enter Departure Time (HH MM): ");
    scanf("%d%d", &t.departure.hour,
                  &t.departure.minute);

    printf("Enter Arrival Time (HH MM): ");
    scanf("%d%d", &t.arrival.hour,
                  &t.arrival.minute);

    printf("\nTRAIN DETAILS\n");

    printf("Train Number : %d\n", t.trainNo);
    printf("Train Name : %s\n", t.trainName);
    printf("Starting Station : %s\n", t.startStation);
    printf("Ending Station : %s\n", t.endStation);

    printf("Departure Time : %02d:%02d\n",
            t.departure.hour,
            t.departure.minute);

    printf("Arrival Time : %02d:%02d\n",
            t.arrival.hour,
            t.arrival.minute);

    return 0;
}
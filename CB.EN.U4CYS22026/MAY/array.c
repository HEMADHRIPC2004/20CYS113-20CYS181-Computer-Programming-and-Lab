#include <stdio.h>

#define NUM_STUDENTS 72
#define MAX_NAME_LENGTH 50

int main() {
    char names[NUM_STUDENTS][MAX_NAME_LENGTH];
    int i;

    // Read in the names
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter name %d: ", i+1);
        scanf("%s", names[i]);
    }

    // Print out the names
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Name %d: %s\n", i+1, names[i]);
    }

    return 0;
}

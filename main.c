#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// include your .h files here

/**
 * Main program
 */
int main(int argc, char* argv[]) {

    char* fileNameCities = NULL;
    char* fileNameDistances = NULL;
    char* cityFrom = NULL;
    char* cityTo = NULL;

    // This code is provided to read the command line arguments
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-c") == 0) {
            if (i + 1 < argc) {
                fileNameCities = argv[++i];
            } else {
                printf("Missing argument for -c\n");
                return 1;
            }
        } else if (strcmp(argv[i], "-d") == 0) {
            if (i + 1 < argc) {
                fileNameDistances = argv[++i];
            } else {
                printf("Missing argument for -d\n");
                return 1;
            }
        } else if (strcmp(argv[i], "-f") == 0) {
            if (i + 1 < argc) {
                cityFrom = argv[++i];
            } else {
                printf("Missing argument for -f\n");
                return 1;
            }
        } else if (strcmp(argv[i], "-t") == 0) {
            if (i + 1 < argc) {
                cityTo = argv[++i];
            } else {
                printf("Missing argument for -t\n");
                return 1;
            }
        } else {
            printf("Unknown argument: %s\n", argv[i]);
            return 1;
        }
    }

    if (!fileNameCities || !fileNameDistances || !cityFrom || !cityTo) {
        printf("Usage: %s -c <cities_file> -d <distances_file> -f <city_from> -t <city_to>\n", argv[0]);
        return 1;
    }

    // your code here

    return 0;
}

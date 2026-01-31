#include <config.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "foo.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
#ifdef HAVE_RECTANGLE_AREA
        fprintf(stderr, "Usage: %s <width> <height> <perimeter|area>\n", argv[0]);
#else
        fprintf(stderr, "Usage: %s <width> <height> <perimeter>\n", argv[0]);
#endif
        return 1;
    }

    double width = atof(argv[1]);
    double height = atof(argv[2]);
    char *operation = argv[3];

    if (strcmp(operation, "perimeter") == 0) {
        double result = rectangle_perimeter(width, height);
        printf("Perimeter: %.2f\n", result);
    } else if (strcmp(operation, "area") == 0) {
#ifdef HAVE_RECTANGLE_AREA
        double result = rectangle_area(width, height);
        printf("Area: %.2f\n", result);
#else
        fprintf(stderr, "Error: area operation requires libFoo 1.1 or later\n");
        return 1;
#endif
    } else {
#ifdef HAVE_RECTANGLE_AREA
        fprintf(stderr, "Invalid operation: %s (use 'perimeter' or 'area')\n", operation);
#else
        fprintf(stderr, "Invalid operation: %s (use 'perimeter')\n", operation);
#endif
        return 1;
    }

    return 0;
}

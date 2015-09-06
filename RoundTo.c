/**
 * Round to calculation
 * This is a simple function that help to calculate the aligned width/height size.
 *
 * Input like:
 *
 * <width> <height> <width_alignment> <height_alignment>
 *
 * Output:
 *
 * aligned_width aligned_height
 *
 * example:
 *
 * Input:
 *
 * 174 144 64 32
 *
 * Output:
 *
 * aligned_width = 192 aligned_height = 160
 *
 **/

#include <stdio.h>

int main(int argc, char *argv[]) {

    // Aligned Width&height
    int aligned_width, aligned_height;

    if (argc < 5) {
        printf("Invaild Input!!!\n");
        printf("Input should be:\n");
        printf("<width> <height> <width_alignment> <height_alignment>\n");
        return 0;
    }

    aligned_width = (atoi(argv[1]) + (atoi(argv[3]) - 1)) & (~(atoi(argv[3]) - 1));
    aligned_height = (atoi(argv[2]) + (atoi(argv[4]) - 1)) & (~(atoi(argv[4]) - 1));

    printf("aligned_width = %d aligned_height = %d \n", aligned_width, aligned_height);

    return 0;
}

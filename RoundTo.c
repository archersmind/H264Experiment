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

int main(void) {

    // Original Width& height
    int ori_width, ori_height;

    // Alignment
    int width_alignment, height_alignment;
    
    // Aligned Width&height
    int aligned_width, aligned_height;

    printf ("Please input the parameters as: ori_width ori_height width_alignment height_alignment \n");
    scanf("%d%d%d%d", &ori_width, &ori_height, &width_alignment, &height_alignment);

    aligned_height = (ori_height + (height_alignment - 1)) & (~(height_alignment - 1));
    aligned_width = (ori_width + (width_alignment - 1)) & (~(width_alignment - 1));

    printf("aligned_width = %d aligned_height = %d \n", aligned_width, aligned_height);

    return 0;

}

#include <stdio.h>
#include "matvec.h"

void matvec(Array matrix, int result[num_rows]) {

    for (int i = 0; i < num_rows; i++)
    {
        result[i] = 0;
    }
    
    for (int i = 0; i < COLUMN_SIZE; i++)
    {
        for (int j = 0; j < num_rows; j++)
        {
           result[i] += matrix[i][j] * v[j]; //doing the multiplication   
        } 
    }
    
}




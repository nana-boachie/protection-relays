#ifndef OVERCURRENT_CALCULATOR_H
#define OVERCURRENT_CALCULATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


double calculate_triptime(int curve_type);
int select_curve_type(int user_input);




#endif// OVERCURRENT_CALCULATOR_H
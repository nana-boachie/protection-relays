#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "overcurrent_calculator.h"

//select curve type
int select_curve_type(int user_input) {
	int curve_type;
	printf("Select the curve type:\n");
	printf("1. IEEE Moderate Inverse\n");
	printf("2. IEEE Very Inverse\n");
	printf("3. IEEE Inverse\n");
	printf("4. IEC Standard Inverse\n");
	printf("5. IEC Very Inverse\n");
	printf("6. IEC Extremely Inverse\n");
	printf("Enter your choice (1-6): ");
	if (scanf_s("%i", &curve_type) != 1) { // Check return value of scanf_s
		printf("Invalid input. Please enter a valid integer.\n");
		return -1; // Return an error code for invalid input
	}
	return curve_type;
}

double calculate_triptime(int curve_type) {
	if (curve_type == 1) { // IEEE Moderate Inverse
		return 0.14;  
	}
	else if (curve_type == 2) { // IEEE Very Inverse
		return 0.12;  
	}
	else if (curve_type == 3) { // IEEE Inverse
		return 0.10;
	}
	else if (curve_type == 4) { // IEC Standard Inverse
		return 0.14; 
	}
	else if (curve_type == 5) { // IEC Very Inverse
		return 0.12;
	}
	else if (curve_type == 6) { // IEEE Extremely Inverse
		return 0.10; 
	}
	else {
		printf("Invalid curve type for IEC standards.\n");
		return -2; // Invalid curve type
	}
}
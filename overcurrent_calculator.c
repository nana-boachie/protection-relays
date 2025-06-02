


//function for calculating triptime for overcurrent protection IEC curves

	float trip_time; // Trip time in seconds
void calculate_trip_time_overcurrent_iec(curve_type) {
	if (curve_type) {
		float current; // Current in Amperes
		float setting; // Setting in Amperes
	
		printf("Enter the current in Amperes: ");
		scanf("%f", &current);
		printf("Enter the setting in Amperes: ");
		scanf("%f", &setting);
		switch (curve_type) {
			case 1: // Standard Inverse
				trip_time = 0.14 * pow((current / setting), 2);
				break;
			case 2: // Very Inverse
				trip_time = 0.08 * pow((current / setting), 3);
				break;
			case 3: // Extremely Inverse
				trip_time = 0.04 * pow((current / setting), 4);
				break;
			case 4: // Long Time Inverse
				trip_time = 0.2 * pow((current / setting), 1.5);
				break;
			default:
				trip_time = -1; // Invalid curve type
				break;
		}
	} else {
		trip_time = -1; // Curve type not set
	}
}
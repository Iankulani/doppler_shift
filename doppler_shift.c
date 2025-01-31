#include <stdio.h>

#define SPEED_OF_LIGHT 299792458  // Speed of light in meters per second (m/s)

void calculateDopplerShift(float velocity, float transmittedFrequency) {
    // Calculate Doppler shift using the Doppler formula
    float dopplerShift = (2 * velocity / SPEED_OF_LIGHT) * transmittedFrequency;
    
    // Print the result
    printf("Doppler Shift (frequency change) is: %.6f Hz\n", dopplerShift);
}

int main() {
    float velocity, transmittedFrequency;

    // Prompt the user for the transmitted frequency of the radar signal
    printf("Enter the transmitted frequency (Hz) of the Radar system: ");
    scanf("%f", &transmittedFrequency);

    // Prompt the user for the relative velocity of the target
    printf("Enter the relative velocity (m/s) of the target (positive if moving towards, negative if moving away): ");
    scanf("%f", &velocity);

    // Calculate and display the Doppler shift
    calculateDopplerShift(velocity, transmittedFrequency);

    return 0;
}

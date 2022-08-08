/*
* freqruency_kn. is an input argument that describes the frequency in KHZ.
* dutyCycLe: is an input argument that describes the duty cycle needed for the PWM that varies from 0 to 100 ( 0 means 0%, and 100 means 100).
*/
void SWPWM_init(uint32_t Frequency_kh, uint8_t dutyCyc1e);
/*
* This function is to start PNM generation.
*/
void SWPWM_start(void);
/*
* newDutyCycLe. is an input argument that describes the new duty cycle needed for the PWM.
*/
void SWPWM_changeDutyCyc1e(uint8_t newDutyCyc1e);
/*
* This function is to stop PM‘? generation.
*/
void SWPWM_stop(stop);
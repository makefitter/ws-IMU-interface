/* Logging Parameters */
#define ENABLE_TIME_LOG       true
#define ENABLE_CALCULATED_LOG true
#define ENABLE_ACCEL_LOG      true
#define ENABLE_GYRO_LOG       true
#define ENABLE_MAG_LOG        true
#define ENABLE_QUAT_LOG       true
#define ENABLE_EULER_LOG      true
#define ENABLE_HEADING_LOG    true

/* Select the Serial port to log to. Either SERIAL_PORT_USBVIRTUAL or LOG_PORT SERIAL_PORT_HARDWARE (SerialUSB or Serial1) */
#define LOG_PORT SERIAL_PORT_USBVIRTUAL
#define SERIAL_BAUD_RATE 115200 			  // Serial port baud

/* LED Config */
#define HW_LED_PIN 13        				    // LED attached to pin 13
#define UART_BLINK_RATE 1000				    // Blink rate when only UART logging

/* IMU Default Configs */
#define DMP_SAMPLE_RATE    100 				  // Logging/DMP sample rate(4-200 Hz)
#define IMU_COMPASS_SAMPLE_RATE 100 		// Compass sample rate (4-100 Hz)
#define IMU_AG_SAMPLE_RATE 100 				  // Accel/gyro sample rate Must be between 4Hz and 1kHz
#define IMU_GYRO_FSR       2000 			  // Gyro full-scale range (250, 500, 1000, or 2000)
#define IMU_ACCEL_FSR      2 				    // Accel full-scale range (2, 4, 8, or 16)
#define IMU_AG_LPF         5 			     	// Accel/Gyro LPF corner frequency (5, 10, 20, 42, 98, or 188 Hz)
#define ENABLE_GYRO_CALIBRATION true

/* Hardware Definitions */
#define MPU9250_INT_PIN 9
#define SD_CHIP_SELECT_PIN 38
#define MPU9250_INT_ACTIVE LOW

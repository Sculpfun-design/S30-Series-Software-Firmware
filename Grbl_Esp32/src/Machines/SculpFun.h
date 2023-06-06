#pragma once

#define MACHINE_NAME            "SculpFun S30"
// #define CUSTOM_CODE_FILENAME    "Custom/CoreXY.cpp"
#define X_STEP_PIN              GPIO_NUM_27
#define X_DIRECTION_PIN         GPIO_NUM_26
#define Y_STEP_PIN              GPIO_NUM_33
#define Y_DIRECTION_PIN         GPIO_NUM_32
// #define Z_STEP_PIN              GPIO_NUM_14
// #define Z_DIRECTION_PIN         GPIO_NUM_12
#define X_LIMIT_PIN             GPIO_NUM_34
#define Y_LIMIT_PIN             GPIO_NUM_35
// #define Z_LIMIT_PIN             GPIO_NUM_15
#define STEPPERS_DISABLE_PIN    GPIO_NUM_25
#define SPINDLE_OUTPUT_PIN      GPIO_NUM_4
#define SPINDLE_TYPE            SpindleType::LASER
#define LASER_OUTPUT_PIN        SPINDLE_OUTPUT_PIN
#define DEFAULT_HOMING_CYCLE_0  3
#define DEFAULT_HOMING_CYCLE_1  0
#define COOLANT_FLOOD_PIN GPIO_NUM_16
#define COOLANT_MIST_PIN GPIO_NUM_17

#define DEFAULT_STEP_PULSE_MICROSECONDS 10  // $0
#define DEFAULT_STEPPER_IDLE_LOCK_TIME 25  // $1 msec (0-254, 255 keeps steppers enabled)
#define DEFAULT_DIRECTION_INVERT_MASK 4  // $3 uint8_
#define DEFAULT_HARD_LIMIT_ENABLE 1  // $21 false
#define DEFAULT_HOMING_ENABLE 1  // $22 false
#define DEFAULT_HOMING_DIR_MASK 7  // $23 move positive dir Z, negative X,Y
#define DEFAULT_HOMING_SEEK_RATE 3000.0  // $25 mm/min
#define DEFAULT_HOMING_PULLOFF 2.0  // $27 mm
#define DEFAULT_LASER_MODE 1  // false
#define DEFAULT_SPINDLE_FREQ 1000.0  // $33 Hz (extended set)
#define DEFAULT_X_STEPS_PER_MM 80.0
#define DEFAULT_Y_STEPS_PER_MM 80.0
#define DEFAULT_Z_STEPS_PER_MM 250.0
#define DEFAULT_X_MAX_RATE 6000.0  // mm/min
#define DEFAULT_Y_MAX_RATE 6000.0  // mm/min0
#define DEFAULT_X_ACCELERATION 1000.0
#define DEFAULT_Y_ACCELERATION 1000.0
#define DEFAULT_Z_ACCELERATION 1000.0
#define DEFAULT_X_MAX_TRAVEL 400.0  // $130 mm NOTE: Must be a positive value.
#define DEFAULT_Y_MAX_TRAVEL 410.0  // mm NOTE: Must be a positive value.
#define DEFAULT_Z_MAX_TRAVEL 200.0  // mm NOTE: Must be a positive value.
#define DEFAULT_X_HOMING_MPOS -2.0
#define DEFAULT_Y_HOMING_MPOS -2.0

#define DEFAULT_AIR_PUMP_DUTY 250
#define MAX_AIR_PUMP_DUTY 500

// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

// This file is just a placeholder for your configuration file.  If
// you wish to change any of the setup parameters from their default
// values, place the appropriate #define statements here.

// If you used to define your CONFIG_APM_HARDWARE setting here, it is no
// longer valid! You should switch to using CONFIG_HAL_BOARD via the HAL_BOARD
// flag in your local config.mk instead.

// The following are the recommended settings for Xplane
// simulation. Remove the leading "/* and trailing "*/" to enable:

//#define HIL_MODE            HIL_MODE_DISABLED

/*
 *  // HIL_MODE SELECTION
 *  //
 *  // Mavlink supports
 *  // 2. HIL_MODE_SENSORS: full sensor simulation
 *
 */

#define GPS_PROTOCOL  GPS_PROTOCOL_AUTO

#define GCS_PROTOCOL		GCS_PROTOCOL_MAVLINK

#define SHORT_FAILSAFE_ACTION   1

#define LONG_FAILSAFE_ACTION    1

#define FLIGHT_MODE_1           MANUAL
#define FLIGHT_MODE_6           AUTO

#define ELEVON_MIXING           ENABLED
#define ELEVON_CH1_REVERSE      ENABLED

# define OBC_FAILSAFE           ENABLED

#define AIRSPEED_CRUISE     14

#define MIN_GNDSPEED	0

/****************************************************************************
 *
 *   Copyright (C) 2013-2015 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file c:\Users\Seth\Desktop\MissionPlanner\ArduPilot\PX4Firmware\msg\vehicle_status.msg */


#pragma once

#include <stdint.h>
#include <uORB/uORB.h>


#ifndef __cplusplus
#define MAIN_STATE_MANUAL 0
#define MAIN_STATE_ALTCTL 1
#define MAIN_STATE_POSCTL 2
#define MAIN_STATE_AUTO_MISSION 3
#define MAIN_STATE_AUTO_LOITER 4
#define MAIN_STATE_AUTO_RTL 5
#define MAIN_STATE_ACRO 6
#define MAIN_STATE_OFFBOARD 7
#define MAIN_STATE_MAX 8
#define ARMING_STATE_INIT 0
#define ARMING_STATE_STANDBY 1
#define ARMING_STATE_ARMED 2
#define ARMING_STATE_ARMED_ERROR 3
#define ARMING_STATE_STANDBY_ERROR 4
#define ARMING_STATE_REBOOT 5
#define ARMING_STATE_IN_AIR_RESTORE 6
#define ARMING_STATE_MAX 7
#define HIL_STATE_OFF 0
#define HIL_STATE_ON 1
#define NAVIGATION_STATE_MANUAL 0
#define NAVIGATION_STATE_ALTCTL 1
#define NAVIGATION_STATE_POSCTL 2
#define NAVIGATION_STATE_AUTO_MISSION 3
#define NAVIGATION_STATE_AUTO_LOITER 4
#define NAVIGATION_STATE_AUTO_RTL 5
#define NAVIGATION_STATE_AUTO_RCRECOVER 6
#define NAVIGATION_STATE_AUTO_RTGS 7
#define NAVIGATION_STATE_AUTO_LANDENGFAIL 8
#define NAVIGATION_STATE_AUTO_LANDGPSFAIL 9
#define NAVIGATION_STATE_ACRO 10
#define NAVIGATION_STATE_LAND 11
#define NAVIGATION_STATE_DESCEND 12
#define NAVIGATION_STATE_TERMINATION 13
#define NAVIGATION_STATE_OFFBOARD 14
#define NAVIGATION_STATE_MAX 15
#define VEHICLE_MODE_FLAG_SAFETY_ARMED 128
#define VEHICLE_MODE_FLAG_MANUAL_INPUT_ENABLED 64
#define VEHICLE_MODE_FLAG_HIL_ENABLED 32
#define VEHICLE_MODE_FLAG_STABILIZED_ENABLED 16
#define VEHICLE_MODE_FLAG_GUIDED_ENABLED 8
#define VEHICLE_MODE_FLAG_AUTO_ENABLED 4
#define VEHICLE_MODE_FLAG_TEST_ENABLED 2
#define VEHICLE_MODE_FLAG_CUSTOM_MODE_ENABLED 1
#define VEHICLE_TYPE_GENERIC 0
#define VEHICLE_TYPE_FIXED_WING 1
#define VEHICLE_TYPE_QUADROTOR 2
#define VEHICLE_TYPE_COAXIAL 3
#define VEHICLE_TYPE_HELICOPTER 4
#define VEHICLE_TYPE_ANTENNA_TRACKER 5
#define VEHICLE_TYPE_GCS 6
#define VEHICLE_TYPE_AIRSHIP 7
#define VEHICLE_TYPE_FREE_BALLOON 8
#define VEHICLE_TYPE_ROCKET 9
#define VEHICLE_TYPE_GROUND_ROVER 10
#define VEHICLE_TYPE_SURFACE_BOAT 11
#define VEHICLE_TYPE_SUBMARINE 12
#define VEHICLE_TYPE_HEXAROTOR 13
#define VEHICLE_TYPE_OCTOROTOR 14
#define VEHICLE_TYPE_TRICOPTER 15
#define VEHICLE_TYPE_FLAPPING_WING 16
#define VEHICLE_TYPE_KITE 17
#define VEHICLE_TYPE_ONBOARD_CONTROLLER 18
#define VEHICLE_TYPE_VTOL_DUOROTOR 19
#define VEHICLE_TYPE_VTOL_QUADROTOR 20
#define VEHICLE_TYPE_ENUM_END 21
#define VEHICLE_BATTERY_WARNING_NONE 0
#define VEHICLE_BATTERY_WARNING_LOW 1
#define VEHICLE_BATTERY_WARNING_CRITICAL 2

#endif

/**
 * @addtogroup topics
 * @{
 */


#ifdef __cplusplus
struct __EXPORT vehicle_status_s {
#else
struct vehicle_status_s {
#endif
	uint16_t counter;
	uint64_t timestamp;
	uint8_t main_state;
	uint8_t nav_state;
	uint8_t arming_state;
	uint8_t hil_state;
	bool failsafe;
	int32_t system_type;
	int32_t system_id;
	int32_t component_id;
	bool is_rotary_wing;
	bool is_vtol;
	bool vtol_fw_permanent_stab;
	bool condition_battery_voltage_valid;
	bool condition_system_in_air_restore;
	bool condition_system_sensors_initialized;
	bool condition_system_returned_to_home;
	bool condition_auto_mission_available;
	bool condition_global_position_valid;
	bool condition_launch_position_valid;
	bool condition_home_position_valid;
	bool condition_local_position_valid;
	bool condition_local_altitude_valid;
	bool condition_airspeed_valid;
	bool condition_landed;
	bool condition_power_input_valid;
	float avionics_power_rail_voltage;
	bool rc_signal_found_once;
	bool rc_signal_lost;
	uint64_t rc_signal_lost_timestamp;
	bool rc_signal_lost_cmd;
	bool rc_input_blocked;
	bool data_link_lost;
	bool data_link_lost_cmd;
	uint8_t data_link_lost_counter;
	bool engine_failure;
	bool engine_failure_cmd;
	bool gps_failure;
	bool gps_failure_cmd;
	bool barometer_failure;
	bool offboard_control_signal_found_once;
	bool offboard_control_signal_lost;
	bool offboard_control_signal_weak;
	uint64_t offboard_control_signal_lost_interval;
	bool offboard_control_set_by_command;
	uint32_t onboard_control_sensors_present;
	uint32_t onboard_control_sensors_enabled;
	uint32_t onboard_control_sensors_health;
	float load;
	float battery_voltage;
	float battery_current;
	float battery_remaining;
	uint8_t battery_warning;
	uint16_t drop_rate_comm;
	uint16_t errors_comm;
	uint16_t errors_count1;
	uint16_t errors_count2;
	uint16_t errors_count3;
	uint16_t errors_count4;
	bool circuit_breaker_engaged_power_check;
	bool circuit_breaker_engaged_airspd_check;
	bool circuit_breaker_engaged_enginefailure_check;
	bool circuit_breaker_engaged_gpsfailure_check;
#ifdef __cplusplus
	static const uint8_t MAIN_STATE_MANUAL = 0;
	static const uint8_t MAIN_STATE_ALTCTL = 1;
	static const uint8_t MAIN_STATE_POSCTL = 2;
	static const uint8_t MAIN_STATE_AUTO_MISSION = 3;
	static const uint8_t MAIN_STATE_AUTO_LOITER = 4;
	static const uint8_t MAIN_STATE_AUTO_RTL = 5;
	static const uint8_t MAIN_STATE_ACRO = 6;
	static const uint8_t MAIN_STATE_OFFBOARD = 7;
	static const uint8_t MAIN_STATE_MAX = 8;
	static const uint8_t ARMING_STATE_INIT = 0;
	static const uint8_t ARMING_STATE_STANDBY = 1;
	static const uint8_t ARMING_STATE_ARMED = 2;
	static const uint8_t ARMING_STATE_ARMED_ERROR = 3;
	static const uint8_t ARMING_STATE_STANDBY_ERROR = 4;
	static const uint8_t ARMING_STATE_REBOOT = 5;
	static const uint8_t ARMING_STATE_IN_AIR_RESTORE = 6;
	static const uint8_t ARMING_STATE_MAX = 7;
	static const uint8_t HIL_STATE_OFF = 0;
	static const uint8_t HIL_STATE_ON = 1;
	static const uint8_t NAVIGATION_STATE_MANUAL = 0;
	static const uint8_t NAVIGATION_STATE_ALTCTL = 1;
	static const uint8_t NAVIGATION_STATE_POSCTL = 2;
	static const uint8_t NAVIGATION_STATE_AUTO_MISSION = 3;
	static const uint8_t NAVIGATION_STATE_AUTO_LOITER = 4;
	static const uint8_t NAVIGATION_STATE_AUTO_RTL = 5;
	static const uint8_t NAVIGATION_STATE_AUTO_RCRECOVER = 6;
	static const uint8_t NAVIGATION_STATE_AUTO_RTGS = 7;
	static const uint8_t NAVIGATION_STATE_AUTO_LANDENGFAIL = 8;
	static const uint8_t NAVIGATION_STATE_AUTO_LANDGPSFAIL = 9;
	static const uint8_t NAVIGATION_STATE_ACRO = 10;
	static const uint8_t NAVIGATION_STATE_LAND = 11;
	static const uint8_t NAVIGATION_STATE_DESCEND = 12;
	static const uint8_t NAVIGATION_STATE_TERMINATION = 13;
	static const uint8_t NAVIGATION_STATE_OFFBOARD = 14;
	static const uint8_t NAVIGATION_STATE_MAX = 15;
	static const uint8_t VEHICLE_MODE_FLAG_SAFETY_ARMED = 128;
	static const uint8_t VEHICLE_MODE_FLAG_MANUAL_INPUT_ENABLED = 64;
	static const uint8_t VEHICLE_MODE_FLAG_HIL_ENABLED = 32;
	static const uint8_t VEHICLE_MODE_FLAG_STABILIZED_ENABLED = 16;
	static const uint8_t VEHICLE_MODE_FLAG_GUIDED_ENABLED = 8;
	static const uint8_t VEHICLE_MODE_FLAG_AUTO_ENABLED = 4;
	static const uint8_t VEHICLE_MODE_FLAG_TEST_ENABLED = 2;
	static const uint8_t VEHICLE_MODE_FLAG_CUSTOM_MODE_ENABLED = 1;
	static const uint8_t VEHICLE_TYPE_GENERIC = 0;
	static const uint8_t VEHICLE_TYPE_FIXED_WING = 1;
	static const uint8_t VEHICLE_TYPE_QUADROTOR = 2;
	static const uint8_t VEHICLE_TYPE_COAXIAL = 3;
	static const uint8_t VEHICLE_TYPE_HELICOPTER = 4;
	static const uint8_t VEHICLE_TYPE_ANTENNA_TRACKER = 5;
	static const uint8_t VEHICLE_TYPE_GCS = 6;
	static const uint8_t VEHICLE_TYPE_AIRSHIP = 7;
	static const uint8_t VEHICLE_TYPE_FREE_BALLOON = 8;
	static const uint8_t VEHICLE_TYPE_ROCKET = 9;
	static const uint8_t VEHICLE_TYPE_GROUND_ROVER = 10;
	static const uint8_t VEHICLE_TYPE_SURFACE_BOAT = 11;
	static const uint8_t VEHICLE_TYPE_SUBMARINE = 12;
	static const uint8_t VEHICLE_TYPE_HEXAROTOR = 13;
	static const uint8_t VEHICLE_TYPE_OCTOROTOR = 14;
	static const uint8_t VEHICLE_TYPE_TRICOPTER = 15;
	static const uint8_t VEHICLE_TYPE_FLAPPING_WING = 16;
	static const uint8_t VEHICLE_TYPE_KITE = 17;
	static const uint8_t VEHICLE_TYPE_ONBOARD_CONTROLLER = 18;
	static const uint8_t VEHICLE_TYPE_VTOL_DUOROTOR = 19;
	static const uint8_t VEHICLE_TYPE_VTOL_QUADROTOR = 20;
	static const uint8_t VEHICLE_TYPE_ENUM_END = 21;
	static const uint8_t VEHICLE_BATTERY_WARNING_NONE = 0;
	static const uint8_t VEHICLE_BATTERY_WARNING_LOW = 1;
	static const uint8_t VEHICLE_BATTERY_WARNING_CRITICAL = 2;

#endif
};

/**
 * @}
 */

/* register this as object request broker structure */
ORB_DECLARE(vehicle_status);

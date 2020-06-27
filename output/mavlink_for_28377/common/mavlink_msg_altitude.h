#pragma once
// MESSAGE ALTITUDE PACKING

#define MAVLINK_MSG_ID_ALTITUDE 141

typedef struct __mavlink_altitude_t {
 uint64_t time_usec; /*< [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.*/
 float altitude_monotonic; /*< [m] This altitude measure is initialized on system boot and monotonic (it is never reset, but represents the local altitude change). The only guarantee on this field is that it will never be reset and is consistent within a flight. The recommended value for this field is the uncorrected barometric altitude at boot time. This altitude will also drift and vary between flights.*/
 float altitude_amsl; /*< [m] This altitude measure is strictly above mean sea level and might be non-monotonic (it might reset on events like GPS lock or when a new QNH value is set). It should be the altitude to which global altitude waypoints are compared to. Note that it is *not* the GPS altitude, however, most GPS modules already output MSL by default and not the WGS84 altitude.*/
 float altitude_local; /*< [m] This is the local altitude in the local coordinate frame. It is not the altitude above home, but in reference to the coordinate origin (0, 0, 0). It is up-positive.*/
 float altitude_relative; /*< [m] This is the altitude above the home position. It resets on each change of the current home position.*/
 float altitude_terrain; /*< [m] This is the altitude above terrain. It might be fed by a terrain database or an altimeter. Values smaller than -1000 should be interpreted as unknown.*/
 float bottom_clearance; /*< [m] This is not the altitude, but the clear space below the system according to the fused clearance estimate. It generally should max out at the maximum range of e.g. the laser altimeter. It is generally a moving target. A negative value indicates no measurement available.*/
} mavlink_altitude_t;

#define MAVLINK_MSG_ID_ALTITUDE_LEN 32
#define MAVLINK_MSG_ID_ALTITUDE_MIN_LEN 32
#define MAVLINK_MSG_ID_141_LEN 32
#define MAVLINK_MSG_ID_141_MIN_LEN 32

#define MAVLINK_MSG_ID_ALTITUDE_CRC 47
#define MAVLINK_MSG_ID_141_CRC 47



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ALTITUDE { \
    141, \
    "ALTITUDE", \
    7, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_altitude_t, time_usec) }, \
         { "altitude_monotonic", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_altitude_t, altitude_monotonic) }, \
         { "altitude_amsl", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_altitude_t, altitude_amsl) }, \
         { "altitude_local", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_altitude_t, altitude_local) }, \
         { "altitude_relative", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_altitude_t, altitude_relative) }, \
         { "altitude_terrain", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_altitude_t, altitude_terrain) }, \
         { "bottom_clearance", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_altitude_t, bottom_clearance) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ALTITUDE { \
    "ALTITUDE", \
    7, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_altitude_t, time_usec) }, \
         { "altitude_monotonic", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_altitude_t, altitude_monotonic) }, \
         { "altitude_amsl", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_altitude_t, altitude_amsl) }, \
         { "altitude_local", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_altitude_t, altitude_local) }, \
         { "altitude_relative", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_altitude_t, altitude_relative) }, \
         { "altitude_terrain", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_altitude_t, altitude_terrain) }, \
         { "bottom_clearance", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_altitude_t, bottom_clearance) }, \
         } \
}
#endif

/**
 * @brief Pack a altitude message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param altitude_monotonic [m] This altitude measure is initialized on system boot and monotonic (it is never reset, but represents the local altitude change). The only guarantee on this field is that it will never be reset and is consistent within a flight. The recommended value for this field is the uncorrected barometric altitude at boot time. This altitude will also drift and vary between flights.
 * @param altitude_amsl [m] This altitude measure is strictly above mean sea level and might be non-monotonic (it might reset on events like GPS lock or when a new QNH value is set). It should be the altitude to which global altitude waypoints are compared to. Note that it is *not* the GPS altitude, however, most GPS modules already output MSL by default and not the WGS84 altitude.
 * @param altitude_local [m] This is the local altitude in the local coordinate frame. It is not the altitude above home, but in reference to the coordinate origin (0, 0, 0). It is up-positive.
 * @param altitude_relative [m] This is the altitude above the home position. It resets on each change of the current home position.
 * @param altitude_terrain [m] This is the altitude above terrain. It might be fed by a terrain database or an altimeter. Values smaller than -1000 should be interpreted as unknown.
 * @param bottom_clearance [m] This is not the altitude, but the clear space below the system according to the fused clearance estimate. It generally should max out at the maximum range of e.g. the laser altimeter. It is generally a moving target. A negative value indicates no measurement available.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_altitude_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float altitude_monotonic, float altitude_amsl, float altitude_local, float altitude_relative, float altitude_terrain, float bottom_clearance)
{
    _mav_put_uint64_t(msg->payloads, 0, time_usec);
    _mav_put_float(msg->payloads, 8, altitude_monotonic);
    _mav_put_float(msg->payloads, 12, altitude_amsl);
    _mav_put_float(msg->payloads, 16, altitude_local);
    _mav_put_float(msg->payloads, 20, altitude_relative);
    _mav_put_float(msg->payloads, 24, altitude_terrain);
    _mav_put_float(msg->payloads, 28, bottom_clearance);

    msg->msgid = MAVLINK_MSG_ID_ALTITUDE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ALTITUDE_MIN_LEN, MAVLINK_MSG_ID_ALTITUDE_LEN, MAVLINK_MSG_ID_ALTITUDE_CRC);
}

/**
 * @brief Pack a altitude message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param altitude_monotonic [m] This altitude measure is initialized on system boot and monotonic (it is never reset, but represents the local altitude change). The only guarantee on this field is that it will never be reset and is consistent within a flight. The recommended value for this field is the uncorrected barometric altitude at boot time. This altitude will also drift and vary between flights.
 * @param altitude_amsl [m] This altitude measure is strictly above mean sea level and might be non-monotonic (it might reset on events like GPS lock or when a new QNH value is set). It should be the altitude to which global altitude waypoints are compared to. Note that it is *not* the GPS altitude, however, most GPS modules already output MSL by default and not the WGS84 altitude.
 * @param altitude_local [m] This is the local altitude in the local coordinate frame. It is not the altitude above home, but in reference to the coordinate origin (0, 0, 0). It is up-positive.
 * @param altitude_relative [m] This is the altitude above the home position. It resets on each change of the current home position.
 * @param altitude_terrain [m] This is the altitude above terrain. It might be fed by a terrain database or an altimeter. Values smaller than -1000 should be interpreted as unknown.
 * @param bottom_clearance [m] This is not the altitude, but the clear space below the system according to the fused clearance estimate. It generally should max out at the maximum range of e.g. the laser altimeter. It is generally a moving target. A negative value indicates no measurement available.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_altitude_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float altitude_monotonic,float altitude_amsl,float altitude_local,float altitude_relative,float altitude_terrain,float bottom_clearance)
{
    _mav_put_uint64_t(msg->payloads, 0, time_usec);
    _mav_put_float(msg->payloads, 8, altitude_monotonic);
    _mav_put_float(msg->payloads, 12, altitude_amsl);
    _mav_put_float(msg->payloads, 16, altitude_local);
    _mav_put_float(msg->payloads, 20, altitude_relative);
    _mav_put_float(msg->payloads, 24, altitude_terrain);
    _mav_put_float(msg->payloads, 28, bottom_clearance);


    msg->msgid = MAVLINK_MSG_ID_ALTITUDE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ALTITUDE_MIN_LEN, MAVLINK_MSG_ID_ALTITUDE_LEN, MAVLINK_MSG_ID_ALTITUDE_CRC);
}

/**
 * @brief Encode a altitude struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param altitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_altitude_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_altitude_t* altitude)
{
    return mavlink_msg_altitude_pack(system_id, component_id, msg, altitude->time_usec, altitude->altitude_monotonic, altitude->altitude_amsl, altitude->altitude_local, altitude->altitude_relative, altitude->altitude_terrain, altitude->bottom_clearance);
}

/**
 * @brief Encode a altitude struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param altitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_altitude_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_altitude_t* altitude)
{
    return mavlink_msg_altitude_pack_chan(system_id, component_id, chan, msg, altitude->time_usec, altitude->altitude_monotonic, altitude->altitude_amsl, altitude->altitude_local, altitude->altitude_relative, altitude->altitude_terrain, altitude->bottom_clearance);
}

// MESSAGE ALTITUDE UNPACKING


/**
 * @brief Get field time_usec from altitude message
 *
 * @return [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 */
static inline uint64_t mavlink_msg_altitude_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field altitude_monotonic from altitude message
 *
 * @return [m] This altitude measure is initialized on system boot and monotonic (it is never reset, but represents the local altitude change). The only guarantee on this field is that it will never be reset and is consistent within a flight. The recommended value for this field is the uncorrected barometric altitude at boot time. This altitude will also drift and vary between flights.
 */
static inline float mavlink_msg_altitude_get_altitude_monotonic(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field altitude_amsl from altitude message
 *
 * @return [m] This altitude measure is strictly above mean sea level and might be non-monotonic (it might reset on events like GPS lock or when a new QNH value is set). It should be the altitude to which global altitude waypoints are compared to. Note that it is *not* the GPS altitude, however, most GPS modules already output MSL by default and not the WGS84 altitude.
 */
static inline float mavlink_msg_altitude_get_altitude_amsl(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field altitude_local from altitude message
 *
 * @return [m] This is the local altitude in the local coordinate frame. It is not the altitude above home, but in reference to the coordinate origin (0, 0, 0). It is up-positive.
 */
static inline float mavlink_msg_altitude_get_altitude_local(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field altitude_relative from altitude message
 *
 * @return [m] This is the altitude above the home position. It resets on each change of the current home position.
 */
static inline float mavlink_msg_altitude_get_altitude_relative(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field altitude_terrain from altitude message
 *
 * @return [m] This is the altitude above terrain. It might be fed by a terrain database or an altimeter. Values smaller than -1000 should be interpreted as unknown.
 */
static inline float mavlink_msg_altitude_get_altitude_terrain(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field bottom_clearance from altitude message
 *
 * @return [m] This is not the altitude, but the clear space below the system according to the fused clearance estimate. It generally should max out at the maximum range of e.g. the laser altimeter. It is generally a moving target. A negative value indicates no measurement available.
 */
static inline float mavlink_msg_altitude_get_bottom_clearance(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a altitude message into a struct
 *
 * @param msg The message to decode
 * @param altitude C-struct to decode the message contents into
 */
static inline void mavlink_msg_altitude_decode(const mavlink_message_t* msg, mavlink_altitude_t* altitude)
{
    altitude->time_usec = mavlink_msg_altitude_get_time_usec(msg);
    altitude->altitude_monotonic = mavlink_msg_altitude_get_altitude_monotonic(msg);
    altitude->altitude_amsl = mavlink_msg_altitude_get_altitude_amsl(msg);
    altitude->altitude_local = mavlink_msg_altitude_get_altitude_local(msg);
    altitude->altitude_relative = mavlink_msg_altitude_get_altitude_relative(msg);
    altitude->altitude_terrain = mavlink_msg_altitude_get_altitude_terrain(msg);
    altitude->bottom_clearance = mavlink_msg_altitude_get_bottom_clearance(msg);
}

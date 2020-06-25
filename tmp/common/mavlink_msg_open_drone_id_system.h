#pragma once
// MESSAGE OPEN_DRONE_ID_SYSTEM PACKING

#define MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM 12904

typedef struct __mavlink_open_drone_id_system_t {
 int32_t operator_latitude; /*< [degE7] Latitude of the operator. If unknown: 0 (both Lat/Lon).*/
 int32_t operator_longitude; /*< [degE7] Longitude of the operator. If unknown: 0 (both Lat/Lon).*/
 float area_ceiling; /*< [m] Area Operations Ceiling relative to WGS84. If unknown: -1000 m.*/
 float area_floor; /*< [m] Area Operations Floor relative to WGS84. If unknown: -1000 m.*/
 uint16_t area_count; /*<  Number of aircraft in the area, group or formation (default 1).*/
 uint16_t area_radius; /*< [m] Radius of the cylindrical area of the group or formation (default 0).*/
 uint8_t target_system; /*<  System ID (0 for broadcast).*/
 uint8_t target_component; /*<  Component ID (0 for broadcast).*/
 uint8_t id_or_mac[20]; /*<  Only used for drone ID data received from other UAs. See detailed description at https://mavlink.io/en/services/opendroneid.html. */
 uint8_t flags; /*<  Specifies the location source for the operator location.*/
} mavlink_open_drone_id_system_t;

#define MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM_LEN 43
#define MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM_MIN_LEN 43
#define MAVLINK_MSG_ID_12904_LEN 43
#define MAVLINK_MSG_ID_12904_MIN_LEN 43

#define MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM_CRC 85
#define MAVLINK_MSG_ID_12904_CRC 85

#define MAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_FIELD_ID_OR_MAC_LEN 20

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPEN_DRONE_ID_SYSTEM { \
    12904, \
    "OPEN_DRONE_ID_SYSTEM", \
    10, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_open_drone_id_system_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_open_drone_id_system_t, target_component) }, \
         { "id_or_mac", NULL, MAVLINK_TYPE_UINT8_T, 20, 22, offsetof(mavlink_open_drone_id_system_t, id_or_mac) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_open_drone_id_system_t, flags) }, \
         { "operator_latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_open_drone_id_system_t, operator_latitude) }, \
         { "operator_longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_open_drone_id_system_t, operator_longitude) }, \
         { "area_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_open_drone_id_system_t, area_count) }, \
         { "area_radius", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_open_drone_id_system_t, area_radius) }, \
         { "area_ceiling", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_open_drone_id_system_t, area_ceiling) }, \
         { "area_floor", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_open_drone_id_system_t, area_floor) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPEN_DRONE_ID_SYSTEM { \
    "OPEN_DRONE_ID_SYSTEM", \
    10, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_open_drone_id_system_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_open_drone_id_system_t, target_component) }, \
         { "id_or_mac", NULL, MAVLINK_TYPE_UINT8_T, 20, 22, offsetof(mavlink_open_drone_id_system_t, id_or_mac) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_open_drone_id_system_t, flags) }, \
         { "operator_latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_open_drone_id_system_t, operator_latitude) }, \
         { "operator_longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_open_drone_id_system_t, operator_longitude) }, \
         { "area_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_open_drone_id_system_t, area_count) }, \
         { "area_radius", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_open_drone_id_system_t, area_radius) }, \
         { "area_ceiling", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_open_drone_id_system_t, area_ceiling) }, \
         { "area_floor", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_open_drone_id_system_t, area_floor) }, \
         } \
}
#endif

/**
 * @brief Pack a open_drone_id_system message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID (0 for broadcast).
 * @param target_component  Component ID (0 for broadcast).
 * @param id_or_mac  Only used for drone ID data received from other UAs. See detailed description at https://mavlink.io/en/services/opendroneid.html. 
 * @param flags  Specifies the location source for the operator location.
 * @param operator_latitude [degE7] Latitude of the operator. If unknown: 0 (both Lat/Lon).
 * @param operator_longitude [degE7] Longitude of the operator. If unknown: 0 (both Lat/Lon).
 * @param area_count  Number of aircraft in the area, group or formation (default 1).
 * @param area_radius [m] Radius of the cylindrical area of the group or formation (default 0).
 * @param area_ceiling [m] Area Operations Ceiling relative to WGS84. If unknown: -1000 m.
 * @param area_floor [m] Area Operations Floor relative to WGS84. If unknown: -1000 m.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_open_drone_id_system_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, const uint8_t *id_or_mac, uint8_t flags, int32_t operator_latitude, int32_t operator_longitude, uint16_t area_count, uint16_t area_radius, float area_ceiling, float area_floor)
{
    _mav_put_int32_t(msg->payloads, 0, operator_latitude);
    _mav_put_int32_t(msg->payloads, 4, operator_longitude);
    _mav_put_float(msg->payloads, 8, area_ceiling);
    _mav_put_float(msg->payloads, 12, area_floor);
    _mav_put_uint16_t(msg->payloads, 16, area_count);
    _mav_put_uint16_t(msg->payloads, 18, area_radius);
    _mav_put_uint8_t(msg->payloads, 20, target_system);
    _mav_put_uint8_t(msg->payloads, 21, target_component);
    _mav_put_uint8_t(msg->payloads, 42, flags);
    _mav_put_uint8_t_array(msg->payloads, 22, id_or_mac, 20);
    msg->msgid = MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM_MIN_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM_CRC);
}

/**
 * @brief Pack a open_drone_id_system message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID (0 for broadcast).
 * @param target_component  Component ID (0 for broadcast).
 * @param id_or_mac  Only used for drone ID data received from other UAs. See detailed description at https://mavlink.io/en/services/opendroneid.html. 
 * @param flags  Specifies the location source for the operator location.
 * @param operator_latitude [degE7] Latitude of the operator. If unknown: 0 (both Lat/Lon).
 * @param operator_longitude [degE7] Longitude of the operator. If unknown: 0 (both Lat/Lon).
 * @param area_count  Number of aircraft in the area, group or formation (default 1).
 * @param area_radius [m] Radius of the cylindrical area of the group or formation (default 0).
 * @param area_ceiling [m] Area Operations Ceiling relative to WGS84. If unknown: -1000 m.
 * @param area_floor [m] Area Operations Floor relative to WGS84. If unknown: -1000 m.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_open_drone_id_system_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,const uint8_t *id_or_mac,uint8_t flags,int32_t operator_latitude,int32_t operator_longitude,uint16_t area_count,uint16_t area_radius,float area_ceiling,float area_floor)
{
    _mav_put_int32_t(msg->payloads, 0, operator_latitude);
    _mav_put_int32_t(msg->payloads, 4, operator_longitude);
    _mav_put_float(msg->payloads, 8, area_ceiling);
    _mav_put_float(msg->payloads, 12, area_floor);
    _mav_put_uint16_t(msg->payloads, 16, area_count);
    _mav_put_uint16_t(msg->payloads, 18, area_radius);
    _mav_put_uint8_t(msg->payloads, 20, target_system);
    _mav_put_uint8_t(msg->payloads, 21, target_component);
    _mav_put_uint8_t(msg->payloads, 42, flags);
    _mav_put_uint8_t_array(msg->payloads, 22, id_or_mac, 20);

    msg->msgid = MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM_MIN_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM_LEN, MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM_CRC);
}

/**
 * @brief Encode a open_drone_id_system struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param open_drone_id_system C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_open_drone_id_system_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_open_drone_id_system_t* open_drone_id_system)
{
    return mavlink_msg_open_drone_id_system_pack(system_id, component_id, msg, open_drone_id_system->target_system, open_drone_id_system->target_component, open_drone_id_system->id_or_mac, open_drone_id_system->flags, open_drone_id_system->operator_latitude, open_drone_id_system->operator_longitude, open_drone_id_system->area_count, open_drone_id_system->area_radius, open_drone_id_system->area_ceiling, open_drone_id_system->area_floor);
}

/**
 * @brief Encode a open_drone_id_system struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param open_drone_id_system C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_open_drone_id_system_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_open_drone_id_system_t* open_drone_id_system)
{
    return mavlink_msg_open_drone_id_system_pack_chan(system_id, component_id, chan, msg, open_drone_id_system->target_system, open_drone_id_system->target_component, open_drone_id_system->id_or_mac, open_drone_id_system->flags, open_drone_id_system->operator_latitude, open_drone_id_system->operator_longitude, open_drone_id_system->area_count, open_drone_id_system->area_radius, open_drone_id_system->area_ceiling, open_drone_id_system->area_floor);
}

// MESSAGE OPEN_DRONE_ID_SYSTEM UNPACKING


/**
 * @brief Get field target_system from open_drone_id_system message
 *
 * @return  System ID (0 for broadcast).
 */
static inline uint8_t mavlink_msg_open_drone_id_system_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field target_component from open_drone_id_system message
 *
 * @return  Component ID (0 for broadcast).
 */
static inline uint8_t mavlink_msg_open_drone_id_system_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field id_or_mac from open_drone_id_system message
 *
 * @return  Only used for drone ID data received from other UAs. See detailed description at https://mavlink.io/en/services/opendroneid.html. 
 */
static inline uint16_t mavlink_msg_open_drone_id_system_get_id_or_mac(const mavlink_message_t* msg, uint8_t *id_or_mac)
{
    return _MAV_RETURN_uint8_t_array(msg, id_or_mac, 20,  22);
}

/**
 * @brief Get field flags from open_drone_id_system message
 *
 * @return  Specifies the location source for the operator location.
 */
static inline uint8_t mavlink_msg_open_drone_id_system_get_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  42);
}

/**
 * @brief Get field operator_latitude from open_drone_id_system message
 *
 * @return [degE7] Latitude of the operator. If unknown: 0 (both Lat/Lon).
 */
static inline int32_t mavlink_msg_open_drone_id_system_get_operator_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field operator_longitude from open_drone_id_system message
 *
 * @return [degE7] Longitude of the operator. If unknown: 0 (both Lat/Lon).
 */
static inline int32_t mavlink_msg_open_drone_id_system_get_operator_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field area_count from open_drone_id_system message
 *
 * @return  Number of aircraft in the area, group or formation (default 1).
 */
static inline uint16_t mavlink_msg_open_drone_id_system_get_area_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field area_radius from open_drone_id_system message
 *
 * @return [m] Radius of the cylindrical area of the group or formation (default 0).
 */
static inline uint16_t mavlink_msg_open_drone_id_system_get_area_radius(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field area_ceiling from open_drone_id_system message
 *
 * @return [m] Area Operations Ceiling relative to WGS84. If unknown: -1000 m.
 */
static inline float mavlink_msg_open_drone_id_system_get_area_ceiling(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field area_floor from open_drone_id_system message
 *
 * @return [m] Area Operations Floor relative to WGS84. If unknown: -1000 m.
 */
static inline float mavlink_msg_open_drone_id_system_get_area_floor(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a open_drone_id_system message into a struct
 *
 * @param msg The message to decode
 * @param open_drone_id_system C-struct to decode the message contents into
 */
static inline void mavlink_msg_open_drone_id_system_decode(const mavlink_message_t* msg, mavlink_open_drone_id_system_t* open_drone_id_system)
{
    open_drone_id_system->operator_latitude = mavlink_msg_open_drone_id_system_get_operator_latitude(msg);
    open_drone_id_system->operator_longitude = mavlink_msg_open_drone_id_system_get_operator_longitude(msg);
    open_drone_id_system->area_ceiling = mavlink_msg_open_drone_id_system_get_area_ceiling(msg);
    open_drone_id_system->area_floor = mavlink_msg_open_drone_id_system_get_area_floor(msg);
    open_drone_id_system->area_count = mavlink_msg_open_drone_id_system_get_area_count(msg);
    open_drone_id_system->area_radius = mavlink_msg_open_drone_id_system_get_area_radius(msg);
    open_drone_id_system->target_system = mavlink_msg_open_drone_id_system_get_target_system(msg);
    open_drone_id_system->target_component = mavlink_msg_open_drone_id_system_get_target_component(msg);
    mavlink_msg_open_drone_id_system_get_id_or_mac(msg, open_drone_id_system->id_or_mac);
    open_drone_id_system->flags = mavlink_msg_open_drone_id_system_get_flags(msg);
}

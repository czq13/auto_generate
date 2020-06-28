#ifndef MAVLINK_MSG_utm_global_position
#define MAVLINK_MSG_utm_global_position
// MESSAGE UTM_GLOBAL_POSITION PACKING

#define MAVLINK_MSG_ID_UTM_GLOBAL_POSITION 340

typedef struct __mavlink_utm_global_position_t {
 uint64_t time; /*< [us] Time of applicability of position (microseconds since UNIX epoch).*/
 int32_t lat; /*< [degE7] Latitude (WGS84)*/
 int32_t lon; /*< [degE7] Longitude (WGS84)*/
 int32_t alt; /*< [mm] Altitude (WGS84)*/
 int32_t relative_alt; /*< [mm] Altitude above ground*/
 int32_t next_lat; /*< [degE7] Next waypoint, latitude (WGS84)*/
 int32_t next_lon; /*< [degE7] Next waypoint, longitude (WGS84)*/
 int32_t next_alt; /*< [mm] Next waypoint, altitude (WGS84)*/
 int16_t vx; /*< [cm/s] Ground X speed (latitude, positive north)*/
 int16_t vy; /*< [cm/s] Ground Y speed (longitude, positive east)*/
 int16_t vz; /*< [cm/s] Ground Z speed (altitude, positive down)*/
 uint16_t h_acc; /*< [mm] Horizontal position uncertainty (standard deviation)*/
 uint16_t v_acc; /*< [mm] Altitude uncertainty (standard deviation)*/
 uint16_t vel_acc; /*< [cm/s] Speed uncertainty (standard deviation)*/
 uint16_t update_rate; /*< [cs] Time until next update. Set to 0 if unknown or in data driven mode.*/
 uint8_t uas_id[18]; /*<  Unique UAS ID.*/
 uint8_t flight_state; /*<  Flight state*/
 uint8_t flags; /*<  Bitwise OR combination of the data available flags.*/
} mavlink_utm_global_position_t;

#define MAVLINK_MSG_ID_UTM_GLOBAL_POSITION_LEN 70
#define MAVLINK_MSG_ID_UTM_GLOBAL_POSITION_MIN_LEN 70
#define MAVLINK_MSG_ID_340_LEN 70
#define MAVLINK_MSG_ID_340_MIN_LEN 70

#define MAVLINK_MSG_ID_UTM_GLOBAL_POSITION_CRC 99
#define MAVLINK_MSG_ID_340_CRC 99

#define MAVLINK_MSG_UTM_GLOBAL_POSITION_FIELD_UAS_ID_LEN 18

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UTM_GLOBAL_POSITION { \
    340, \
    "UTM_GLOBAL_POSITION", \
    18, \
    {  { "time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_utm_global_position_t, time) }, \
         { "uas_id", NULL, MAVLINK_TYPE_UINT8_T, 18, 50, offsetof(mavlink_utm_global_position_t, uas_id) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_utm_global_position_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_utm_global_position_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_utm_global_position_t, alt) }, \
         { "relative_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_utm_global_position_t, relative_alt) }, \
         { "vx", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_utm_global_position_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_utm_global_position_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_utm_global_position_t, vz) }, \
         { "h_acc", NULL, MAVLINK_TYPE_UINT16_T, 0, 42, offsetof(mavlink_utm_global_position_t, h_acc) }, \
         { "v_acc", NULL, MAVLINK_TYPE_UINT16_T, 0, 44, offsetof(mavlink_utm_global_position_t, v_acc) }, \
         { "vel_acc", NULL, MAVLINK_TYPE_UINT16_T, 0, 46, offsetof(mavlink_utm_global_position_t, vel_acc) }, \
         { "next_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_utm_global_position_t, next_lat) }, \
         { "next_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_utm_global_position_t, next_lon) }, \
         { "next_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_utm_global_position_t, next_alt) }, \
         { "update_rate", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_utm_global_position_t, update_rate) }, \
         { "flight_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 68, offsetof(mavlink_utm_global_position_t, flight_state) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 69, offsetof(mavlink_utm_global_position_t, flags) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UTM_GLOBAL_POSITION { \
    "UTM_GLOBAL_POSITION", \
    18, \
    {  { "time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_utm_global_position_t, time) }, \
         { "uas_id", NULL, MAVLINK_TYPE_UINT8_T, 18, 50, offsetof(mavlink_utm_global_position_t, uas_id) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_utm_global_position_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_utm_global_position_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_utm_global_position_t, alt) }, \
         { "relative_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_utm_global_position_t, relative_alt) }, \
         { "vx", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_utm_global_position_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_utm_global_position_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_utm_global_position_t, vz) }, \
         { "h_acc", NULL, MAVLINK_TYPE_UINT16_T, 0, 42, offsetof(mavlink_utm_global_position_t, h_acc) }, \
         { "v_acc", NULL, MAVLINK_TYPE_UINT16_T, 0, 44, offsetof(mavlink_utm_global_position_t, v_acc) }, \
         { "vel_acc", NULL, MAVLINK_TYPE_UINT16_T, 0, 46, offsetof(mavlink_utm_global_position_t, vel_acc) }, \
         { "next_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_utm_global_position_t, next_lat) }, \
         { "next_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_utm_global_position_t, next_lon) }, \
         { "next_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_utm_global_position_t, next_alt) }, \
         { "update_rate", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_utm_global_position_t, update_rate) }, \
         { "flight_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 68, offsetof(mavlink_utm_global_position_t, flight_state) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 69, offsetof(mavlink_utm_global_position_t, flags) }, \
         } \
}
#endif

/**
 * @brief Pack a utm_global_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time [us] Time of applicability of position (microseconds since UNIX epoch).
 * @param uas_id  Unique UAS ID.
 * @param lat [degE7] Latitude (WGS84)
 * @param lon [degE7] Longitude (WGS84)
 * @param alt [mm] Altitude (WGS84)
 * @param relative_alt [mm] Altitude above ground
 * @param vx [cm/s] Ground X speed (latitude, positive north)
 * @param vy [cm/s] Ground Y speed (longitude, positive east)
 * @param vz [cm/s] Ground Z speed (altitude, positive down)
 * @param h_acc [mm] Horizontal position uncertainty (standard deviation)
 * @param v_acc [mm] Altitude uncertainty (standard deviation)
 * @param vel_acc [cm/s] Speed uncertainty (standard deviation)
 * @param next_lat [degE7] Next waypoint, latitude (WGS84)
 * @param next_lon [degE7] Next waypoint, longitude (WGS84)
 * @param next_alt [mm] Next waypoint, altitude (WGS84)
 * @param update_rate [cs] Time until next update. Set to 0 if unknown or in data driven mode.
 * @param flight_state  Flight state
 * @param flags  Bitwise OR combination of the data available flags.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_utm_global_position_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time, const uint8_t *uas_id, int32_t lat, int32_t lon, int32_t alt, int32_t relative_alt, int16_t vx, int16_t vy, int16_t vz, uint16_t h_acc, uint16_t v_acc, uint16_t vel_acc, int32_t next_lat, int32_t next_lon, int32_t next_alt, uint16_t update_rate, uint8_t flight_state, uint8_t flags)
{
    _mav_put_uint64_t(((char*)msg->payloads), 0, time);
    _mav_put_int32_t(((char*)msg->payloads), 8, lat);
    _mav_put_int32_t(((char*)msg->payloads), 12, lon);
    _mav_put_int32_t(((char*)msg->payloads), 16, alt);
    _mav_put_int32_t(((char*)msg->payloads), 20, relative_alt);
    _mav_put_int32_t(((char*)msg->payloads), 24, next_lat);
    _mav_put_int32_t(((char*)msg->payloads), 28, next_lon);
    _mav_put_int32_t(((char*)msg->payloads), 32, next_alt);
    _mav_put_int16_t(((char*)msg->payloads), 36, vx);
    _mav_put_int16_t(((char*)msg->payloads), 38, vy);
    _mav_put_int16_t(((char*)msg->payloads), 40, vz);
    _mav_put_uint16_t(((char*)msg->payloads), 42, h_acc);
    _mav_put_uint16_t(((char*)msg->payloads), 44, v_acc);
    _mav_put_uint16_t(((char*)msg->payloads), 46, vel_acc);
    _mav_put_uint16_t(((char*)msg->payloads), 48, update_rate);
    _mav_put_uint8_t(((char*)msg->payloads), 68, flight_state);
    _mav_put_uint8_t(((char*)msg->payloads), 69, flags);
    _mav_put_uint8_t_array(((char*)msg->payloads), 50, uas_id, 18);
    msg->msgid = MAVLINK_MSG_ID_UTM_GLOBAL_POSITION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UTM_GLOBAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_UTM_GLOBAL_POSITION_LEN, MAVLINK_MSG_ID_UTM_GLOBAL_POSITION_CRC);
}

/**
 * @brief Pack a utm_global_position message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time [us] Time of applicability of position (microseconds since UNIX epoch).
 * @param uas_id  Unique UAS ID.
 * @param lat [degE7] Latitude (WGS84)
 * @param lon [degE7] Longitude (WGS84)
 * @param alt [mm] Altitude (WGS84)
 * @param relative_alt [mm] Altitude above ground
 * @param vx [cm/s] Ground X speed (latitude, positive north)
 * @param vy [cm/s] Ground Y speed (longitude, positive east)
 * @param vz [cm/s] Ground Z speed (altitude, positive down)
 * @param h_acc [mm] Horizontal position uncertainty (standard deviation)
 * @param v_acc [mm] Altitude uncertainty (standard deviation)
 * @param vel_acc [cm/s] Speed uncertainty (standard deviation)
 * @param next_lat [degE7] Next waypoint, latitude (WGS84)
 * @param next_lon [degE7] Next waypoint, longitude (WGS84)
 * @param next_alt [mm] Next waypoint, altitude (WGS84)
 * @param update_rate [cs] Time until next update. Set to 0 if unknown or in data driven mode.
 * @param flight_state  Flight state
 * @param flags  Bitwise OR combination of the data available flags.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_utm_global_position_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time,const uint8_t *uas_id,int32_t lat,int32_t lon,int32_t alt,int32_t relative_alt,int16_t vx,int16_t vy,int16_t vz,uint16_t h_acc,uint16_t v_acc,uint16_t vel_acc,int32_t next_lat,int32_t next_lon,int32_t next_alt,uint16_t update_rate,uint8_t flight_state,uint8_t flags)
{
    _mav_put_uint64_t(((char*)msg->payloads), 0, time);
    _mav_put_int32_t(((char*)msg->payloads), 8, lat);
    _mav_put_int32_t(((char*)msg->payloads), 12, lon);
    _mav_put_int32_t(((char*)msg->payloads), 16, alt);
    _mav_put_int32_t(((char*)msg->payloads), 20, relative_alt);
    _mav_put_int32_t(((char*)msg->payloads), 24, next_lat);
    _mav_put_int32_t(((char*)msg->payloads), 28, next_lon);
    _mav_put_int32_t(((char*)msg->payloads), 32, next_alt);
    _mav_put_int16_t(((char*)msg->payloads), 36, vx);
    _mav_put_int16_t(((char*)msg->payloads), 38, vy);
    _mav_put_int16_t(((char*)msg->payloads), 40, vz);
    _mav_put_uint16_t(((char*)msg->payloads), 42, h_acc);
    _mav_put_uint16_t(((char*)msg->payloads), 44, v_acc);
    _mav_put_uint16_t(((char*)msg->payloads), 46, vel_acc);
    _mav_put_uint16_t(((char*)msg->payloads), 48, update_rate);
    _mav_put_uint8_t(((char*)msg->payloads), 68, flight_state);
    _mav_put_uint8_t(((char*)msg->payloads), 69, flags);
    _mav_put_uint8_t_array(((char*)msg->payloads), 50, uas_id, 18);

    msg->msgid = MAVLINK_MSG_ID_UTM_GLOBAL_POSITION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UTM_GLOBAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_UTM_GLOBAL_POSITION_LEN, MAVLINK_MSG_ID_UTM_GLOBAL_POSITION_CRC);
}

/**
 * @brief Encode a utm_global_position struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param utm_global_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_utm_global_position_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_utm_global_position_t* utm_global_position)
{
    return mavlink_msg_utm_global_position_pack(system_id, component_id, msg, utm_global_position->time, utm_global_position->uas_id, utm_global_position->lat, utm_global_position->lon, utm_global_position->alt, utm_global_position->relative_alt, utm_global_position->vx, utm_global_position->vy, utm_global_position->vz, utm_global_position->h_acc, utm_global_position->v_acc, utm_global_position->vel_acc, utm_global_position->next_lat, utm_global_position->next_lon, utm_global_position->next_alt, utm_global_position->update_rate, utm_global_position->flight_state, utm_global_position->flags);
}

/**
 * @brief Encode a utm_global_position struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param utm_global_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_utm_global_position_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_utm_global_position_t* utm_global_position)
{
    return mavlink_msg_utm_global_position_pack_chan(system_id, component_id, chan, msg, utm_global_position->time, utm_global_position->uas_id, utm_global_position->lat, utm_global_position->lon, utm_global_position->alt, utm_global_position->relative_alt, utm_global_position->vx, utm_global_position->vy, utm_global_position->vz, utm_global_position->h_acc, utm_global_position->v_acc, utm_global_position->vel_acc, utm_global_position->next_lat, utm_global_position->next_lon, utm_global_position->next_alt, utm_global_position->update_rate, utm_global_position->flight_state, utm_global_position->flags);
}

// MESSAGE UTM_GLOBAL_POSITION UNPACKING


/**
 * @brief Get field time from utm_global_position message
 *
 * @return [us] Time of applicability of position (microseconds since UNIX epoch).
 */
static inline uint64_t mavlink_msg_utm_global_position_get_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field uas_id from utm_global_position message
 *
 * @return  Unique UAS ID.
 */
static inline uint16_t mavlink_msg_utm_global_position_get_uas_id(const mavlink_message_t* msg, uint8_t *uas_id)
{
    return _MAV_RETURN_uint8_t_array(msg, uas_id, 18,  50);
}

/**
 * @brief Get field lat from utm_global_position message
 *
 * @return [degE7] Latitude (WGS84)
 */
static inline int32_t mavlink_msg_utm_global_position_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field lon from utm_global_position message
 *
 * @return [degE7] Longitude (WGS84)
 */
static inline int32_t mavlink_msg_utm_global_position_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field alt from utm_global_position message
 *
 * @return [mm] Altitude (WGS84)
 */
static inline int32_t mavlink_msg_utm_global_position_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field relative_alt from utm_global_position message
 *
 * @return [mm] Altitude above ground
 */
static inline int32_t mavlink_msg_utm_global_position_get_relative_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field vx from utm_global_position message
 *
 * @return [cm/s] Ground X speed (latitude, positive north)
 */
static inline int16_t mavlink_msg_utm_global_position_get_vx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  36);
}

/**
 * @brief Get field vy from utm_global_position message
 *
 * @return [cm/s] Ground Y speed (longitude, positive east)
 */
static inline int16_t mavlink_msg_utm_global_position_get_vy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  38);
}

/**
 * @brief Get field vz from utm_global_position message
 *
 * @return [cm/s] Ground Z speed (altitude, positive down)
 */
static inline int16_t mavlink_msg_utm_global_position_get_vz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  40);
}

/**
 * @brief Get field h_acc from utm_global_position message
 *
 * @return [mm] Horizontal position uncertainty (standard deviation)
 */
static inline uint16_t mavlink_msg_utm_global_position_get_h_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  42);
}

/**
 * @brief Get field v_acc from utm_global_position message
 *
 * @return [mm] Altitude uncertainty (standard deviation)
 */
static inline uint16_t mavlink_msg_utm_global_position_get_v_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  44);
}

/**
 * @brief Get field vel_acc from utm_global_position message
 *
 * @return [cm/s] Speed uncertainty (standard deviation)
 */
static inline uint16_t mavlink_msg_utm_global_position_get_vel_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  46);
}

/**
 * @brief Get field next_lat from utm_global_position message
 *
 * @return [degE7] Next waypoint, latitude (WGS84)
 */
static inline int32_t mavlink_msg_utm_global_position_get_next_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field next_lon from utm_global_position message
 *
 * @return [degE7] Next waypoint, longitude (WGS84)
 */
static inline int32_t mavlink_msg_utm_global_position_get_next_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  28);
}

/**
 * @brief Get field next_alt from utm_global_position message
 *
 * @return [mm] Next waypoint, altitude (WGS84)
 */
static inline int32_t mavlink_msg_utm_global_position_get_next_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  32);
}

/**
 * @brief Get field update_rate from utm_global_position message
 *
 * @return [cs] Time until next update. Set to 0 if unknown or in data driven mode.
 */
static inline uint16_t mavlink_msg_utm_global_position_get_update_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  48);
}

/**
 * @brief Get field flight_state from utm_global_position message
 *
 * @return  Flight state
 */
static inline uint8_t mavlink_msg_utm_global_position_get_flight_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  68);
}

/**
 * @brief Get field flags from utm_global_position message
 *
 * @return  Bitwise OR combination of the data available flags.
 */
static inline uint8_t mavlink_msg_utm_global_position_get_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  69);
}

/**
 * @brief Decode a utm_global_position message into a struct
 *
 * @param msg The message to decode
 * @param utm_global_position C-struct to decode the message contents into
 */
static inline void mavlink_msg_utm_global_position_decode(const mavlink_message_t* msg, mavlink_utm_global_position_t* utm_global_position)
{
    utm_global_position->time = mavlink_msg_utm_global_position_get_time(msg);
    utm_global_position->lat = mavlink_msg_utm_global_position_get_lat(msg);
    utm_global_position->lon = mavlink_msg_utm_global_position_get_lon(msg);
    utm_global_position->alt = mavlink_msg_utm_global_position_get_alt(msg);
    utm_global_position->relative_alt = mavlink_msg_utm_global_position_get_relative_alt(msg);
    utm_global_position->next_lat = mavlink_msg_utm_global_position_get_next_lat(msg);
    utm_global_position->next_lon = mavlink_msg_utm_global_position_get_next_lon(msg);
    utm_global_position->next_alt = mavlink_msg_utm_global_position_get_next_alt(msg);
    utm_global_position->vx = mavlink_msg_utm_global_position_get_vx(msg);
    utm_global_position->vy = mavlink_msg_utm_global_position_get_vy(msg);
    utm_global_position->vz = mavlink_msg_utm_global_position_get_vz(msg);
    utm_global_position->h_acc = mavlink_msg_utm_global_position_get_h_acc(msg);
    utm_global_position->v_acc = mavlink_msg_utm_global_position_get_v_acc(msg);
    utm_global_position->vel_acc = mavlink_msg_utm_global_position_get_vel_acc(msg);
    utm_global_position->update_rate = mavlink_msg_utm_global_position_get_update_rate(msg);
    mavlink_msg_utm_global_position_get_uas_id(msg, utm_global_position->uas_id);
    utm_global_position->flight_state = mavlink_msg_utm_global_position_get_flight_state(msg);
    utm_global_position->flags = mavlink_msg_utm_global_position_get_flags(msg);
}
#endif

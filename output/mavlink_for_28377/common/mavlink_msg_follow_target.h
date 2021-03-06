#ifndef MAVLINK_MSG_follow_target
#define MAVLINK_MSG_follow_target
// MESSAGE FOLLOW_TARGET PACKING

#define MAVLINK_MSG_ID_FOLLOW_TARGET 144

typedef struct __mavlink_follow_target_t {
 uint64_t timestamp; /*< [ms] Timestamp (time since system boot).*/
 uint64_t custom_state; /*<  button states or switches of a tracker device*/
 int32_t lat; /*< [degE7] Latitude (WGS84)*/
 int32_t lon; /*< [degE7] Longitude (WGS84)*/
 float alt; /*< [m] Altitude (MSL)*/
 float vel[3]; /*< [m/s] target velocity (0,0,0) for unknown*/
 float acc[3]; /*< [m/s/s] linear target acceleration (0,0,0) for unknown*/
 float attitude_q[4]; /*<  (1 0 0 0 for unknown)*/
 float rates[3]; /*<  (0 0 0 for unknown)*/
 float position_cov[3]; /*<  eph epv*/
 uint8_t est_capabilities; /*<  bit positions for tracker reporting capabilities (POS = 0, VEL = 1, ACCEL = 2, ATT + RATES = 3)*/
} mavlink_follow_target_t;

#define MAVLINK_MSG_ID_FOLLOW_TARGET_LEN 93
#define MAVLINK_MSG_ID_FOLLOW_TARGET_MIN_LEN 93
#define MAVLINK_MSG_ID_144_LEN 93
#define MAVLINK_MSG_ID_144_MIN_LEN 93

#define MAVLINK_MSG_ID_FOLLOW_TARGET_CRC 127
#define MAVLINK_MSG_ID_144_CRC 127

#define MAVLINK_MSG_FOLLOW_TARGET_FIELD_VEL_LEN 3
#define MAVLINK_MSG_FOLLOW_TARGET_FIELD_ACC_LEN 3
#define MAVLINK_MSG_FOLLOW_TARGET_FIELD_ATTITUDE_Q_LEN 4
#define MAVLINK_MSG_FOLLOW_TARGET_FIELD_RATES_LEN 3
#define MAVLINK_MSG_FOLLOW_TARGET_FIELD_POSITION_COV_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FOLLOW_TARGET { \
    144, \
    "FOLLOW_TARGET", \
    11, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_follow_target_t, timestamp) }, \
         { "est_capabilities", NULL, MAVLINK_TYPE_UINT8_T, 0, 92, offsetof(mavlink_follow_target_t, est_capabilities) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_follow_target_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_follow_target_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_follow_target_t, alt) }, \
         { "vel", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_follow_target_t, vel) }, \
         { "acc", NULL, MAVLINK_TYPE_FLOAT, 3, 40, offsetof(mavlink_follow_target_t, acc) }, \
         { "attitude_q", NULL, MAVLINK_TYPE_FLOAT, 4, 52, offsetof(mavlink_follow_target_t, attitude_q) }, \
         { "rates", NULL, MAVLINK_TYPE_FLOAT, 3, 68, offsetof(mavlink_follow_target_t, rates) }, \
         { "position_cov", NULL, MAVLINK_TYPE_FLOAT, 3, 80, offsetof(mavlink_follow_target_t, position_cov) }, \
         { "custom_state", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_follow_target_t, custom_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FOLLOW_TARGET { \
    "FOLLOW_TARGET", \
    11, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_follow_target_t, timestamp) }, \
         { "est_capabilities", NULL, MAVLINK_TYPE_UINT8_T, 0, 92, offsetof(mavlink_follow_target_t, est_capabilities) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_follow_target_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_follow_target_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_follow_target_t, alt) }, \
         { "vel", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_follow_target_t, vel) }, \
         { "acc", NULL, MAVLINK_TYPE_FLOAT, 3, 40, offsetof(mavlink_follow_target_t, acc) }, \
         { "attitude_q", NULL, MAVLINK_TYPE_FLOAT, 4, 52, offsetof(mavlink_follow_target_t, attitude_q) }, \
         { "rates", NULL, MAVLINK_TYPE_FLOAT, 3, 68, offsetof(mavlink_follow_target_t, rates) }, \
         { "position_cov", NULL, MAVLINK_TYPE_FLOAT, 3, 80, offsetof(mavlink_follow_target_t, position_cov) }, \
         { "custom_state", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_follow_target_t, custom_state) }, \
         } \
}
#endif

/**
 * @brief Pack a follow_target message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [ms] Timestamp (time since system boot).
 * @param est_capabilities  bit positions for tracker reporting capabilities (POS = 0, VEL = 1, ACCEL = 2, ATT + RATES = 3)
 * @param lat [degE7] Latitude (WGS84)
 * @param lon [degE7] Longitude (WGS84)
 * @param alt [m] Altitude (MSL)
 * @param vel [m/s] target velocity (0,0,0) for unknown
 * @param acc [m/s/s] linear target acceleration (0,0,0) for unknown
 * @param attitude_q  (1 0 0 0 for unknown)
 * @param rates  (0 0 0 for unknown)
 * @param position_cov  eph epv
 * @param custom_state  button states or switches of a tracker device
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_follow_target_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t est_capabilities, int32_t lat, int32_t lon, float alt, const float *vel, const float *acc, const float *attitude_q, const float *rates, const float *position_cov, uint64_t custom_state)
{
    _mav_put_uint64_t(((char*)msg->payloads), 0, timestamp);
    _mav_put_uint64_t(((char*)msg->payloads), 8, custom_state);
    _mav_put_int32_t(((char*)msg->payloads), 16, lat);
    _mav_put_int32_t(((char*)msg->payloads), 20, lon);
    _mav_put_float(((char*)msg->payloads), 24, alt);
    _mav_put_uint8_t(((char*)msg->payloads), 92, est_capabilities);
    _mav_put_float_array(((char*)msg->payloads), 28, vel, 3);
    _mav_put_float_array(((char*)msg->payloads), 40, acc, 3);
    _mav_put_float_array(((char*)msg->payloads), 52, attitude_q, 4);
    _mav_put_float_array(((char*)msg->payloads), 68, rates, 3);
    _mav_put_float_array(((char*)msg->payloads), 80, position_cov, 3);
    msg->msgid = MAVLINK_MSG_ID_FOLLOW_TARGET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FOLLOW_TARGET_MIN_LEN, MAVLINK_MSG_ID_FOLLOW_TARGET_LEN, MAVLINK_MSG_ID_FOLLOW_TARGET_CRC);
}

/**
 * @brief Pack a follow_target message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp [ms] Timestamp (time since system boot).
 * @param est_capabilities  bit positions for tracker reporting capabilities (POS = 0, VEL = 1, ACCEL = 2, ATT + RATES = 3)
 * @param lat [degE7] Latitude (WGS84)
 * @param lon [degE7] Longitude (WGS84)
 * @param alt [m] Altitude (MSL)
 * @param vel [m/s] target velocity (0,0,0) for unknown
 * @param acc [m/s/s] linear target acceleration (0,0,0) for unknown
 * @param attitude_q  (1 0 0 0 for unknown)
 * @param rates  (0 0 0 for unknown)
 * @param position_cov  eph epv
 * @param custom_state  button states or switches of a tracker device
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_follow_target_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint8_t est_capabilities,int32_t lat,int32_t lon,float alt,const float *vel,const float *acc,const float *attitude_q,const float *rates,const float *position_cov,uint64_t custom_state)
{
    _mav_put_uint64_t(((char*)msg->payloads), 0, timestamp);
    _mav_put_uint64_t(((char*)msg->payloads), 8, custom_state);
    _mav_put_int32_t(((char*)msg->payloads), 16, lat);
    _mav_put_int32_t(((char*)msg->payloads), 20, lon);
    _mav_put_float(((char*)msg->payloads), 24, alt);
    _mav_put_uint8_t(((char*)msg->payloads), 92, est_capabilities);
    _mav_put_float_array(((char*)msg->payloads), 28, vel, 3);
    _mav_put_float_array(((char*)msg->payloads), 40, acc, 3);
    _mav_put_float_array(((char*)msg->payloads), 52, attitude_q, 4);
    _mav_put_float_array(((char*)msg->payloads), 68, rates, 3);
    _mav_put_float_array(((char*)msg->payloads), 80, position_cov, 3);

    msg->msgid = MAVLINK_MSG_ID_FOLLOW_TARGET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FOLLOW_TARGET_MIN_LEN, MAVLINK_MSG_ID_FOLLOW_TARGET_LEN, MAVLINK_MSG_ID_FOLLOW_TARGET_CRC);
}

/**
 * @brief Encode a follow_target struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param follow_target C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_follow_target_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_follow_target_t* follow_target)
{
    return mavlink_msg_follow_target_pack(system_id, component_id, msg, follow_target->timestamp, follow_target->est_capabilities, follow_target->lat, follow_target->lon, follow_target->alt, follow_target->vel, follow_target->acc, follow_target->attitude_q, follow_target->rates, follow_target->position_cov, follow_target->custom_state);
}

/**
 * @brief Encode a follow_target struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param follow_target C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_follow_target_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_follow_target_t* follow_target)
{
    return mavlink_msg_follow_target_pack_chan(system_id, component_id, chan, msg, follow_target->timestamp, follow_target->est_capabilities, follow_target->lat, follow_target->lon, follow_target->alt, follow_target->vel, follow_target->acc, follow_target->attitude_q, follow_target->rates, follow_target->position_cov, follow_target->custom_state);
}

// MESSAGE FOLLOW_TARGET UNPACKING


/**
 * @brief Get field timestamp from follow_target message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_follow_target_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field est_capabilities from follow_target message
 *
 * @return  bit positions for tracker reporting capabilities (POS = 0, VEL = 1, ACCEL = 2, ATT + RATES = 3)
 */
static inline uint8_t mavlink_msg_follow_target_get_est_capabilities(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  92);
}

/**
 * @brief Get field lat from follow_target message
 *
 * @return [degE7] Latitude (WGS84)
 */
static inline int32_t mavlink_msg_follow_target_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field lon from follow_target message
 *
 * @return [degE7] Longitude (WGS84)
 */
static inline int32_t mavlink_msg_follow_target_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field alt from follow_target message
 *
 * @return [m] Altitude (MSL)
 */
static inline float mavlink_msg_follow_target_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field vel from follow_target message
 *
 * @return [m/s] target velocity (0,0,0) for unknown
 */
static inline uint16_t mavlink_msg_follow_target_get_vel(const mavlink_message_t* msg, float *vel)
{
    return _MAV_RETURN_float_array(msg, vel, 3,  28);
}

/**
 * @brief Get field acc from follow_target message
 *
 * @return [m/s/s] linear target acceleration (0,0,0) for unknown
 */
static inline uint16_t mavlink_msg_follow_target_get_acc(const mavlink_message_t* msg, float *acc)
{
    return _MAV_RETURN_float_array(msg, acc, 3,  40);
}

/**
 * @brief Get field attitude_q from follow_target message
 *
 * @return  (1 0 0 0 for unknown)
 */
static inline uint16_t mavlink_msg_follow_target_get_attitude_q(const mavlink_message_t* msg, float *attitude_q)
{
    return _MAV_RETURN_float_array(msg, attitude_q, 4,  52);
}

/**
 * @brief Get field rates from follow_target message
 *
 * @return  (0 0 0 for unknown)
 */
static inline uint16_t mavlink_msg_follow_target_get_rates(const mavlink_message_t* msg, float *rates)
{
    return _MAV_RETURN_float_array(msg, rates, 3,  68);
}

/**
 * @brief Get field position_cov from follow_target message
 *
 * @return  eph epv
 */
static inline uint16_t mavlink_msg_follow_target_get_position_cov(const mavlink_message_t* msg, float *position_cov)
{
    return _MAV_RETURN_float_array(msg, position_cov, 3,  80);
}

/**
 * @brief Get field custom_state from follow_target message
 *
 * @return  button states or switches of a tracker device
 */
static inline uint64_t mavlink_msg_follow_target_get_custom_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Decode a follow_target message into a struct
 *
 * @param msg The message to decode
 * @param follow_target C-struct to decode the message contents into
 */
static inline void mavlink_msg_follow_target_decode(const mavlink_message_t* msg, mavlink_follow_target_t* follow_target)
{
    follow_target->timestamp = mavlink_msg_follow_target_get_timestamp(msg);
    follow_target->custom_state = mavlink_msg_follow_target_get_custom_state(msg);
    follow_target->lat = mavlink_msg_follow_target_get_lat(msg);
    follow_target->lon = mavlink_msg_follow_target_get_lon(msg);
    follow_target->alt = mavlink_msg_follow_target_get_alt(msg);
    mavlink_msg_follow_target_get_vel(msg, follow_target->vel);
    mavlink_msg_follow_target_get_acc(msg, follow_target->acc);
    mavlink_msg_follow_target_get_attitude_q(msg, follow_target->attitude_q);
    mavlink_msg_follow_target_get_rates(msg, follow_target->rates);
    mavlink_msg_follow_target_get_position_cov(msg, follow_target->position_cov);
    follow_target->est_capabilities = mavlink_msg_follow_target_get_est_capabilities(msg);
}
#endif

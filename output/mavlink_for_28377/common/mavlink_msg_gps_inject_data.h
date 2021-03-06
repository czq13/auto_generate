#ifndef MAVLINK_MSG_gps_inject_data
#define MAVLINK_MSG_gps_inject_data
// MESSAGE GPS_INJECT_DATA PACKING

#define MAVLINK_MSG_ID_GPS_INJECT_DATA 123

typedef struct __mavlink_gps_inject_data_t {
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
 uint8_t len; /*< [bytes] Data length*/
 uint8_t data[110]; /*<  Raw data (110 is enough for 12 satellites of RTCMv2)*/
} mavlink_gps_inject_data_t;

#define MAVLINK_MSG_ID_GPS_INJECT_DATA_LEN 113
#define MAVLINK_MSG_ID_GPS_INJECT_DATA_MIN_LEN 113
#define MAVLINK_MSG_ID_123_LEN 113
#define MAVLINK_MSG_ID_123_MIN_LEN 113

#define MAVLINK_MSG_ID_GPS_INJECT_DATA_CRC 250
#define MAVLINK_MSG_ID_123_CRC 250

#define MAVLINK_MSG_GPS_INJECT_DATA_FIELD_DATA_LEN 110

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GPS_INJECT_DATA { \
    123, \
    "GPS_INJECT_DATA", \
    4, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_gps_inject_data_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_gps_inject_data_t, target_component) }, \
         { "len", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_gps_inject_data_t, len) }, \
         { "data", NULL, MAVLINK_TYPE_UINT8_T, 110, 3, offsetof(mavlink_gps_inject_data_t, data) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GPS_INJECT_DATA { \
    "GPS_INJECT_DATA", \
    4, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_gps_inject_data_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_gps_inject_data_t, target_component) }, \
         { "len", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_gps_inject_data_t, len) }, \
         { "data", NULL, MAVLINK_TYPE_UINT8_T, 110, 3, offsetof(mavlink_gps_inject_data_t, data) }, \
         } \
}
#endif

/**
 * @brief Pack a gps_inject_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param len [bytes] Data length
 * @param data  Raw data (110 is enough for 12 satellites of RTCMv2)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gps_inject_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t len, const uint8_t *data)
{
    _mav_put_uint8_t(((char*)msg->payloads), 0, target_system);
    _mav_put_uint8_t(((char*)msg->payloads), 1, target_component);
    _mav_put_uint8_t(((char*)msg->payloads), 2, len);
    _mav_put_uint8_t_array(((char*)msg->payloads), 3, data, 110);
    msg->msgid = MAVLINK_MSG_ID_GPS_INJECT_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GPS_INJECT_DATA_MIN_LEN, MAVLINK_MSG_ID_GPS_INJECT_DATA_LEN, MAVLINK_MSG_ID_GPS_INJECT_DATA_CRC);
}

/**
 * @brief Pack a gps_inject_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param len [bytes] Data length
 * @param data  Raw data (110 is enough for 12 satellites of RTCMv2)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gps_inject_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t len,const uint8_t *data)
{
    _mav_put_uint8_t(((char*)msg->payloads), 0, target_system);
    _mav_put_uint8_t(((char*)msg->payloads), 1, target_component);
    _mav_put_uint8_t(((char*)msg->payloads), 2, len);
    _mav_put_uint8_t_array(((char*)msg->payloads), 3, data, 110);

    msg->msgid = MAVLINK_MSG_ID_GPS_INJECT_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GPS_INJECT_DATA_MIN_LEN, MAVLINK_MSG_ID_GPS_INJECT_DATA_LEN, MAVLINK_MSG_ID_GPS_INJECT_DATA_CRC);
}

/**
 * @brief Encode a gps_inject_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gps_inject_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gps_inject_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gps_inject_data_t* gps_inject_data)
{
    return mavlink_msg_gps_inject_data_pack(system_id, component_id, msg, gps_inject_data->target_system, gps_inject_data->target_component, gps_inject_data->len, gps_inject_data->data);
}

/**
 * @brief Encode a gps_inject_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gps_inject_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gps_inject_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gps_inject_data_t* gps_inject_data)
{
    return mavlink_msg_gps_inject_data_pack_chan(system_id, component_id, chan, msg, gps_inject_data->target_system, gps_inject_data->target_component, gps_inject_data->len, gps_inject_data->data);
}

// MESSAGE GPS_INJECT_DATA UNPACKING


/**
 * @brief Get field target_system from gps_inject_data message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_gps_inject_data_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field target_component from gps_inject_data message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_gps_inject_data_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field len from gps_inject_data message
 *
 * @return [bytes] Data length
 */
static inline uint8_t mavlink_msg_gps_inject_data_get_len(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field data from gps_inject_data message
 *
 * @return  Raw data (110 is enough for 12 satellites of RTCMv2)
 */
static inline uint16_t mavlink_msg_gps_inject_data_get_data(const mavlink_message_t* msg, uint8_t *data)
{
    return _MAV_RETURN_uint8_t_array(msg, data, 110,  3);
}

/**
 * @brief Decode a gps_inject_data message into a struct
 *
 * @param msg The message to decode
 * @param gps_inject_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_gps_inject_data_decode(const mavlink_message_t* msg, mavlink_gps_inject_data_t* gps_inject_data)
{
    gps_inject_data->target_system = mavlink_msg_gps_inject_data_get_target_system(msg);
    gps_inject_data->target_component = mavlink_msg_gps_inject_data_get_target_component(msg);
    gps_inject_data->len = mavlink_msg_gps_inject_data_get_len(msg);
    mavlink_msg_gps_inject_data_get_data(msg, gps_inject_data->data);
}
#endif

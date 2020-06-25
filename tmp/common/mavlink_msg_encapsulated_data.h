#pragma once
// MESSAGE ENCAPSULATED_DATA PACKING

#define MAVLINK_MSG_ID_ENCAPSULATED_DATA 131

typedef struct __mavlink_encapsulated_data_t {
 uint16_t seqnr; /*<  sequence number (starting with 0 on every transmission)*/
 uint8_t data[253]; /*<  image data bytes*/
} mavlink_encapsulated_data_t;

#define MAVLINK_MSG_ID_ENCAPSULATED_DATA_LEN 255
#define MAVLINK_MSG_ID_ENCAPSULATED_DATA_MIN_LEN 255
#define MAVLINK_MSG_ID_131_LEN 255
#define MAVLINK_MSG_ID_131_MIN_LEN 255

#define MAVLINK_MSG_ID_ENCAPSULATED_DATA_CRC 223
#define MAVLINK_MSG_ID_131_CRC 223

#define MAVLINK_MSG_ENCAPSULATED_DATA_FIELD_DATA_LEN 253

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ENCAPSULATED_DATA { \
    131, \
    "ENCAPSULATED_DATA", \
    2, \
    {  { "seqnr", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_encapsulated_data_t, seqnr) }, \
         { "data", NULL, MAVLINK_TYPE_UINT8_T, 253, 2, offsetof(mavlink_encapsulated_data_t, data) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ENCAPSULATED_DATA { \
    "ENCAPSULATED_DATA", \
    2, \
    {  { "seqnr", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_encapsulated_data_t, seqnr) }, \
         { "data", NULL, MAVLINK_TYPE_UINT8_T, 253, 2, offsetof(mavlink_encapsulated_data_t, data) }, \
         } \
}
#endif

/**
 * @brief Pack a encapsulated_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param seqnr  sequence number (starting with 0 on every transmission)
 * @param data  image data bytes
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_encapsulated_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t seqnr, const uint8_t *data)
{
    _mav_put_uint16_t(msg->payloads, 0, seqnr);
    _mav_put_uint8_t_array(msg->payloads, 2, data, 253);
    msg->msgid = MAVLINK_MSG_ID_ENCAPSULATED_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ENCAPSULATED_DATA_MIN_LEN, MAVLINK_MSG_ID_ENCAPSULATED_DATA_LEN, MAVLINK_MSG_ID_ENCAPSULATED_DATA_CRC);
}

/**
 * @brief Pack a encapsulated_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param seqnr  sequence number (starting with 0 on every transmission)
 * @param data  image data bytes
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_encapsulated_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t seqnr,const uint8_t *data)
{
    _mav_put_uint16_t(msg->payloads, 0, seqnr);
    _mav_put_uint8_t_array(msg->payloads, 2, data, 253);

    msg->msgid = MAVLINK_MSG_ID_ENCAPSULATED_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ENCAPSULATED_DATA_MIN_LEN, MAVLINK_MSG_ID_ENCAPSULATED_DATA_LEN, MAVLINK_MSG_ID_ENCAPSULATED_DATA_CRC);
}

/**
 * @brief Encode a encapsulated_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param encapsulated_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_encapsulated_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_encapsulated_data_t* encapsulated_data)
{
    return mavlink_msg_encapsulated_data_pack(system_id, component_id, msg, encapsulated_data->seqnr, encapsulated_data->data);
}

/**
 * @brief Encode a encapsulated_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param encapsulated_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_encapsulated_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_encapsulated_data_t* encapsulated_data)
{
    return mavlink_msg_encapsulated_data_pack_chan(system_id, component_id, chan, msg, encapsulated_data->seqnr, encapsulated_data->data);
}

// MESSAGE ENCAPSULATED_DATA UNPACKING


/**
 * @brief Get field seqnr from encapsulated_data message
 *
 * @return  sequence number (starting with 0 on every transmission)
 */
static inline uint16_t mavlink_msg_encapsulated_data_get_seqnr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field data from encapsulated_data message
 *
 * @return  image data bytes
 */
static inline uint16_t mavlink_msg_encapsulated_data_get_data(const mavlink_message_t* msg, uint8_t *data)
{
    return _MAV_RETURN_uint8_t_array(msg, data, 253,  2);
}

/**
 * @brief Decode a encapsulated_data message into a struct
 *
 * @param msg The message to decode
 * @param encapsulated_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_encapsulated_data_decode(const mavlink_message_t* msg, mavlink_encapsulated_data_t* encapsulated_data)
{
    encapsulated_data->seqnr = mavlink_msg_encapsulated_data_get_seqnr(msg);
    mavlink_msg_encapsulated_data_get_data(msg, encapsulated_data->data);
}

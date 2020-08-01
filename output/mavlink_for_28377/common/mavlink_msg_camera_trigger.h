#ifndef MAVLINK_MSG_camera_trigger
#define MAVLINK_MSG_camera_trigger
// MESSAGE CAMERA_TRIGGER PACKING

#define MAVLINK_MSG_ID_CAMERA_TRIGGER 112

typedef struct __mavlink_camera_trigger_t {
 uint64_t time_usec; /*< [us] Timestamp for image frame (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.*/
 uint32_t seq; /*<  Image frame sequence*/
} mavlink_camera_trigger_t;

#define MAVLINK_MSG_ID_CAMERA_TRIGGER_LEN 12
#define MAVLINK_MSG_ID_CAMERA_TRIGGER_MIN_LEN 12
#define MAVLINK_MSG_ID_112_LEN 12
#define MAVLINK_MSG_ID_112_MIN_LEN 12

#define MAVLINK_MSG_ID_CAMERA_TRIGGER_CRC 174
#define MAVLINK_MSG_ID_112_CRC 174



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CAMERA_TRIGGER { \
    112, \
    "CAMERA_TRIGGER", \
    2, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_camera_trigger_t, time_usec) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_camera_trigger_t, seq) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CAMERA_TRIGGER { \
    "CAMERA_TRIGGER", \
    2, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_camera_trigger_t, time_usec) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_camera_trigger_t, seq) }, \
         } \
}
#endif

/**
 * @brief Pack a camera_trigger message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp for image frame (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param seq  Image frame sequence
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_camera_trigger_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint32_t seq)
{
    _mav_put_uint64_t(((char*)msg->payloads), 0, time_usec);
    _mav_put_uint32_t(((char*)msg->payloads), 8, seq);

    msg->msgid = MAVLINK_MSG_ID_CAMERA_TRIGGER;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAMERA_TRIGGER_MIN_LEN, MAVLINK_MSG_ID_CAMERA_TRIGGER_LEN, MAVLINK_MSG_ID_CAMERA_TRIGGER_CRC);
}

/**
 * @brief Pack a camera_trigger message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp for image frame (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param seq  Image frame sequence
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_camera_trigger_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint32_t seq)
{
    _mav_put_uint64_t(((char*)msg->payloads), 0, time_usec);
    _mav_put_uint32_t(((char*)msg->payloads), 8, seq);


    msg->msgid = MAVLINK_MSG_ID_CAMERA_TRIGGER;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAMERA_TRIGGER_MIN_LEN, MAVLINK_MSG_ID_CAMERA_TRIGGER_LEN, MAVLINK_MSG_ID_CAMERA_TRIGGER_CRC);
}

/**
 * @brief Encode a camera_trigger struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param camera_trigger C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_camera_trigger_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_camera_trigger_t* camera_trigger)
{
    return mavlink_msg_camera_trigger_pack(system_id, component_id, msg, camera_trigger->time_usec, camera_trigger->seq);
}

/**
 * @brief Encode a camera_trigger struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param camera_trigger C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_camera_trigger_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_camera_trigger_t* camera_trigger)
{
    return mavlink_msg_camera_trigger_pack_chan(system_id, component_id, chan, msg, camera_trigger->time_usec, camera_trigger->seq);
}

// MESSAGE CAMERA_TRIGGER UNPACKING


/**
 * @brief Get field time_usec from camera_trigger message
 *
 * @return [us] Timestamp for image frame (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 */
static inline uint64_t mavlink_msg_camera_trigger_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field seq from camera_trigger message
 *
 * @return  Image frame sequence
 */
static inline uint32_t mavlink_msg_camera_trigger_get_seq(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Decode a camera_trigger message into a struct
 *
 * @param msg The message to decode
 * @param camera_trigger C-struct to decode the message contents into
 */
static inline void mavlink_msg_camera_trigger_decode(const mavlink_message_t* msg, mavlink_camera_trigger_t* camera_trigger)
{
    camera_trigger->time_usec = mavlink_msg_camera_trigger_get_time_usec(msg);
    camera_trigger->seq = mavlink_msg_camera_trigger_get_seq(msg);
}
#endif
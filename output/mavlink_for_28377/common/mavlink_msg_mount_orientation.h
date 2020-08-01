#ifndef MAVLINK_MSG_mount_orientation
#define MAVLINK_MSG_mount_orientation
// MESSAGE MOUNT_ORIENTATION PACKING

#define MAVLINK_MSG_ID_MOUNT_ORIENTATION 265

typedef struct __mavlink_mount_orientation_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 float roll; /*< [deg] Roll in global frame (set to NaN for invalid).*/
 float pitch; /*< [deg] Pitch in global frame (set to NaN for invalid).*/
 float yaw; /*< [deg] Yaw relative to vehicle (set to NaN for invalid).*/
 float yaw_absolute; /*< [deg] Yaw in absolute frame relative to Earth's North, north is 0 (set to NaN for invalid).*/
} mavlink_mount_orientation_t;

#define MAVLINK_MSG_ID_MOUNT_ORIENTATION_LEN 20
#define MAVLINK_MSG_ID_MOUNT_ORIENTATION_MIN_LEN 16
#define MAVLINK_MSG_ID_265_LEN 20
#define MAVLINK_MSG_ID_265_MIN_LEN 16

#define MAVLINK_MSG_ID_MOUNT_ORIENTATION_CRC 26
#define MAVLINK_MSG_ID_265_CRC 26



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MOUNT_ORIENTATION { \
    265, \
    "MOUNT_ORIENTATION", \
    5, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_mount_orientation_t, time_boot_ms) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_mount_orientation_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_mount_orientation_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_mount_orientation_t, yaw) }, \
         { "yaw_absolute", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_mount_orientation_t, yaw_absolute) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MOUNT_ORIENTATION { \
    "MOUNT_ORIENTATION", \
    5, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_mount_orientation_t, time_boot_ms) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_mount_orientation_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_mount_orientation_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_mount_orientation_t, yaw) }, \
         { "yaw_absolute", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_mount_orientation_t, yaw_absolute) }, \
         } \
}
#endif

/**
 * @brief Pack a mount_orientation message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param roll [deg] Roll in global frame (set to NaN for invalid).
 * @param pitch [deg] Pitch in global frame (set to NaN for invalid).
 * @param yaw [deg] Yaw relative to vehicle (set to NaN for invalid).
 * @param yaw_absolute [deg] Yaw in absolute frame relative to Earth's North, north is 0 (set to NaN for invalid).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mount_orientation_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, float roll, float pitch, float yaw, float yaw_absolute)
{
    _mav_put_uint32_t(((char*)msg->payloads), 0, time_boot_ms);
    _mav_put_float(((char*)msg->payloads), 4, roll);
    _mav_put_float(((char*)msg->payloads), 8, pitch);
    _mav_put_float(((char*)msg->payloads), 12, yaw);
    _mav_put_float(((char*)msg->payloads), 16, yaw_absolute);

    msg->msgid = MAVLINK_MSG_ID_MOUNT_ORIENTATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MOUNT_ORIENTATION_MIN_LEN, MAVLINK_MSG_ID_MOUNT_ORIENTATION_LEN, MAVLINK_MSG_ID_MOUNT_ORIENTATION_CRC);
}

/**
 * @brief Pack a mount_orientation message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param roll [deg] Roll in global frame (set to NaN for invalid).
 * @param pitch [deg] Pitch in global frame (set to NaN for invalid).
 * @param yaw [deg] Yaw relative to vehicle (set to NaN for invalid).
 * @param yaw_absolute [deg] Yaw in absolute frame relative to Earth's North, north is 0 (set to NaN for invalid).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mount_orientation_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,float roll,float pitch,float yaw,float yaw_absolute)
{
    _mav_put_uint32_t(((char*)msg->payloads), 0, time_boot_ms);
    _mav_put_float(((char*)msg->payloads), 4, roll);
    _mav_put_float(((char*)msg->payloads), 8, pitch);
    _mav_put_float(((char*)msg->payloads), 12, yaw);
    _mav_put_float(((char*)msg->payloads), 16, yaw_absolute);


    msg->msgid = MAVLINK_MSG_ID_MOUNT_ORIENTATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MOUNT_ORIENTATION_MIN_LEN, MAVLINK_MSG_ID_MOUNT_ORIENTATION_LEN, MAVLINK_MSG_ID_MOUNT_ORIENTATION_CRC);
}

/**
 * @brief Encode a mount_orientation struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mount_orientation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mount_orientation_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mount_orientation_t* mount_orientation)
{
    return mavlink_msg_mount_orientation_pack(system_id, component_id, msg, mount_orientation->time_boot_ms, mount_orientation->roll, mount_orientation->pitch, mount_orientation->yaw, mount_orientation->yaw_absolute);
}

/**
 * @brief Encode a mount_orientation struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mount_orientation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mount_orientation_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mount_orientation_t* mount_orientation)
{
    return mavlink_msg_mount_orientation_pack_chan(system_id, component_id, chan, msg, mount_orientation->time_boot_ms, mount_orientation->roll, mount_orientation->pitch, mount_orientation->yaw, mount_orientation->yaw_absolute);
}

// MESSAGE MOUNT_ORIENTATION UNPACKING


/**
 * @brief Get field time_boot_ms from mount_orientation message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_mount_orientation_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field roll from mount_orientation message
 *
 * @return [deg] Roll in global frame (set to NaN for invalid).
 */
static inline float mavlink_msg_mount_orientation_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field pitch from mount_orientation message
 *
 * @return [deg] Pitch in global frame (set to NaN for invalid).
 */
static inline float mavlink_msg_mount_orientation_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field yaw from mount_orientation message
 *
 * @return [deg] Yaw relative to vehicle (set to NaN for invalid).
 */
static inline float mavlink_msg_mount_orientation_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field yaw_absolute from mount_orientation message
 *
 * @return [deg] Yaw in absolute frame relative to Earth's North, north is 0 (set to NaN for invalid).
 */
static inline float mavlink_msg_mount_orientation_get_yaw_absolute(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a mount_orientation message into a struct
 *
 * @param msg The message to decode
 * @param mount_orientation C-struct to decode the message contents into
 */
static inline void mavlink_msg_mount_orientation_decode(const mavlink_message_t* msg, mavlink_mount_orientation_t* mount_orientation)
{
    mount_orientation->time_boot_ms = mavlink_msg_mount_orientation_get_time_boot_ms(msg);
    mount_orientation->roll = mavlink_msg_mount_orientation_get_roll(msg);
    mount_orientation->pitch = mavlink_msg_mount_orientation_get_pitch(msg);
    mount_orientation->yaw = mavlink_msg_mount_orientation_get_yaw(msg);
    mount_orientation->yaw_absolute = mavlink_msg_mount_orientation_get_yaw_absolute(msg);
}
#endif
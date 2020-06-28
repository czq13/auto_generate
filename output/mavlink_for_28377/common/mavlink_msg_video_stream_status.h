#ifndef MAVLINK_MSG_video_stream_status
#define MAVLINK_MSG_video_stream_status
// MESSAGE VIDEO_STREAM_STATUS PACKING

#define MAVLINK_MSG_ID_VIDEO_STREAM_STATUS 270

typedef struct __mavlink_video_stream_status_t {
 float framerate; /*< [Hz] Frame rate*/
 uint32_t bitrate; /*< [bits/s] Bit rate*/
 uint16_t flags; /*<  Bitmap of stream status flags*/
 uint16_t resolution_h; /*< [pix] Horizontal resolution*/
 uint16_t resolution_v; /*< [pix] Vertical resolution*/
 uint16_t rotation; /*< [deg] Video image rotation clockwise*/
 uint16_t hfov; /*< [deg] Horizontal Field of view*/
 uint8_t stream_id; /*<  Video Stream ID (1 for first, 2 for second, etc.)*/
} mavlink_video_stream_status_t;

#define MAVLINK_MSG_ID_VIDEO_STREAM_STATUS_LEN 19
#define MAVLINK_MSG_ID_VIDEO_STREAM_STATUS_MIN_LEN 19
#define MAVLINK_MSG_ID_270_LEN 19
#define MAVLINK_MSG_ID_270_MIN_LEN 19

#define MAVLINK_MSG_ID_VIDEO_STREAM_STATUS_CRC 59
#define MAVLINK_MSG_ID_270_CRC 59



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VIDEO_STREAM_STATUS { \
    270, \
    "VIDEO_STREAM_STATUS", \
    8, \
    {  { "stream_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_video_stream_status_t, stream_id) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_video_stream_status_t, flags) }, \
         { "framerate", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_video_stream_status_t, framerate) }, \
         { "resolution_h", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_video_stream_status_t, resolution_h) }, \
         { "resolution_v", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_video_stream_status_t, resolution_v) }, \
         { "bitrate", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_video_stream_status_t, bitrate) }, \
         { "rotation", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_video_stream_status_t, rotation) }, \
         { "hfov", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_video_stream_status_t, hfov) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VIDEO_STREAM_STATUS { \
    "VIDEO_STREAM_STATUS", \
    8, \
    {  { "stream_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_video_stream_status_t, stream_id) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_video_stream_status_t, flags) }, \
         { "framerate", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_video_stream_status_t, framerate) }, \
         { "resolution_h", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_video_stream_status_t, resolution_h) }, \
         { "resolution_v", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_video_stream_status_t, resolution_v) }, \
         { "bitrate", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_video_stream_status_t, bitrate) }, \
         { "rotation", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_video_stream_status_t, rotation) }, \
         { "hfov", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_video_stream_status_t, hfov) }, \
         } \
}
#endif

/**
 * @brief Pack a video_stream_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param stream_id  Video Stream ID (1 for first, 2 for second, etc.)
 * @param flags  Bitmap of stream status flags
 * @param framerate [Hz] Frame rate
 * @param resolution_h [pix] Horizontal resolution
 * @param resolution_v [pix] Vertical resolution
 * @param bitrate [bits/s] Bit rate
 * @param rotation [deg] Video image rotation clockwise
 * @param hfov [deg] Horizontal Field of view
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_video_stream_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t stream_id, uint16_t flags, float framerate, uint16_t resolution_h, uint16_t resolution_v, uint32_t bitrate, uint16_t rotation, uint16_t hfov)
{
    _mav_put_float(((char*)msg->payloads), 0, framerate);
    _mav_put_uint32_t(((char*)msg->payloads), 4, bitrate);
    _mav_put_uint16_t(((char*)msg->payloads), 8, flags);
    _mav_put_uint16_t(((char*)msg->payloads), 10, resolution_h);
    _mav_put_uint16_t(((char*)msg->payloads), 12, resolution_v);
    _mav_put_uint16_t(((char*)msg->payloads), 14, rotation);
    _mav_put_uint16_t(((char*)msg->payloads), 16, hfov);
    _mav_put_uint8_t(((char*)msg->payloads), 18, stream_id);

    msg->msgid = MAVLINK_MSG_ID_VIDEO_STREAM_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VIDEO_STREAM_STATUS_MIN_LEN, MAVLINK_MSG_ID_VIDEO_STREAM_STATUS_LEN, MAVLINK_MSG_ID_VIDEO_STREAM_STATUS_CRC);
}

/**
 * @brief Pack a video_stream_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param stream_id  Video Stream ID (1 for first, 2 for second, etc.)
 * @param flags  Bitmap of stream status flags
 * @param framerate [Hz] Frame rate
 * @param resolution_h [pix] Horizontal resolution
 * @param resolution_v [pix] Vertical resolution
 * @param bitrate [bits/s] Bit rate
 * @param rotation [deg] Video image rotation clockwise
 * @param hfov [deg] Horizontal Field of view
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_video_stream_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t stream_id,uint16_t flags,float framerate,uint16_t resolution_h,uint16_t resolution_v,uint32_t bitrate,uint16_t rotation,uint16_t hfov)
{
    _mav_put_float(((char*)msg->payloads), 0, framerate);
    _mav_put_uint32_t(((char*)msg->payloads), 4, bitrate);
    _mav_put_uint16_t(((char*)msg->payloads), 8, flags);
    _mav_put_uint16_t(((char*)msg->payloads), 10, resolution_h);
    _mav_put_uint16_t(((char*)msg->payloads), 12, resolution_v);
    _mav_put_uint16_t(((char*)msg->payloads), 14, rotation);
    _mav_put_uint16_t(((char*)msg->payloads), 16, hfov);
    _mav_put_uint8_t(((char*)msg->payloads), 18, stream_id);


    msg->msgid = MAVLINK_MSG_ID_VIDEO_STREAM_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VIDEO_STREAM_STATUS_MIN_LEN, MAVLINK_MSG_ID_VIDEO_STREAM_STATUS_LEN, MAVLINK_MSG_ID_VIDEO_STREAM_STATUS_CRC);
}

/**
 * @brief Encode a video_stream_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param video_stream_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_video_stream_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_video_stream_status_t* video_stream_status)
{
    return mavlink_msg_video_stream_status_pack(system_id, component_id, msg, video_stream_status->stream_id, video_stream_status->flags, video_stream_status->framerate, video_stream_status->resolution_h, video_stream_status->resolution_v, video_stream_status->bitrate, video_stream_status->rotation, video_stream_status->hfov);
}

/**
 * @brief Encode a video_stream_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param video_stream_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_video_stream_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_video_stream_status_t* video_stream_status)
{
    return mavlink_msg_video_stream_status_pack_chan(system_id, component_id, chan, msg, video_stream_status->stream_id, video_stream_status->flags, video_stream_status->framerate, video_stream_status->resolution_h, video_stream_status->resolution_v, video_stream_status->bitrate, video_stream_status->rotation, video_stream_status->hfov);
}

// MESSAGE VIDEO_STREAM_STATUS UNPACKING


/**
 * @brief Get field stream_id from video_stream_status message
 *
 * @return  Video Stream ID (1 for first, 2 for second, etc.)
 */
static inline uint8_t mavlink_msg_video_stream_status_get_stream_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field flags from video_stream_status message
 *
 * @return  Bitmap of stream status flags
 */
static inline uint16_t mavlink_msg_video_stream_status_get_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field framerate from video_stream_status message
 *
 * @return [Hz] Frame rate
 */
static inline float mavlink_msg_video_stream_status_get_framerate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field resolution_h from video_stream_status message
 *
 * @return [pix] Horizontal resolution
 */
static inline uint16_t mavlink_msg_video_stream_status_get_resolution_h(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field resolution_v from video_stream_status message
 *
 * @return [pix] Vertical resolution
 */
static inline uint16_t mavlink_msg_video_stream_status_get_resolution_v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field bitrate from video_stream_status message
 *
 * @return [bits/s] Bit rate
 */
static inline uint32_t mavlink_msg_video_stream_status_get_bitrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field rotation from video_stream_status message
 *
 * @return [deg] Video image rotation clockwise
 */
static inline uint16_t mavlink_msg_video_stream_status_get_rotation(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field hfov from video_stream_status message
 *
 * @return [deg] Horizontal Field of view
 */
static inline uint16_t mavlink_msg_video_stream_status_get_hfov(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Decode a video_stream_status message into a struct
 *
 * @param msg The message to decode
 * @param video_stream_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_video_stream_status_decode(const mavlink_message_t* msg, mavlink_video_stream_status_t* video_stream_status)
{
    video_stream_status->framerate = mavlink_msg_video_stream_status_get_framerate(msg);
    video_stream_status->bitrate = mavlink_msg_video_stream_status_get_bitrate(msg);
    video_stream_status->flags = mavlink_msg_video_stream_status_get_flags(msg);
    video_stream_status->resolution_h = mavlink_msg_video_stream_status_get_resolution_h(msg);
    video_stream_status->resolution_v = mavlink_msg_video_stream_status_get_resolution_v(msg);
    video_stream_status->rotation = mavlink_msg_video_stream_status_get_rotation(msg);
    video_stream_status->hfov = mavlink_msg_video_stream_status_get_hfov(msg);
    video_stream_status->stream_id = mavlink_msg_video_stream_status_get_stream_id(msg);
}
#endif

#ifndef MAVLINK_MSG_autopilot_version
#define MAVLINK_MSG_autopilot_version
// MESSAGE AUTOPILOT_VERSION PACKING

#define MAVLINK_MSG_ID_AUTOPILOT_VERSION 148

typedef struct __mavlink_autopilot_version_t {
 uint64_t capabilities; /*<  Bitmap of capabilities*/
 uint64_t uid; /*<  UID if provided by hardware (see uid2)*/
 uint32_t flight_sw_version; /*<  Firmware version number*/
 uint32_t middleware_sw_version; /*<  Middleware version number*/
 uint32_t os_sw_version; /*<  Operating system version number*/
 uint32_t board_version; /*<  HW / board version (last 8 bytes should be silicon ID, if any)*/
 uint16_t vendor_id; /*<  ID of the board vendor*/
 uint16_t product_id; /*<  ID of the product*/
 uint8_t flight_custom_version[8]; /*<  Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.*/
 uint8_t middleware_custom_version[8]; /*<  Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.*/
 uint8_t os_custom_version[8]; /*<  Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.*/
 uint8_t uid2[18]; /*<  UID if provided by hardware (supersedes the uid field. If this is non-zero, use this field, otherwise use uid)*/
} mavlink_autopilot_version_t;

#define MAVLINK_MSG_ID_AUTOPILOT_VERSION_LEN 78
#define MAVLINK_MSG_ID_AUTOPILOT_VERSION_MIN_LEN 60
#define MAVLINK_MSG_ID_148_LEN 78
#define MAVLINK_MSG_ID_148_MIN_LEN 60

#define MAVLINK_MSG_ID_AUTOPILOT_VERSION_CRC 178
#define MAVLINK_MSG_ID_148_CRC 178

#define MAVLINK_MSG_AUTOPILOT_VERSION_FIELD_FLIGHT_CUSTOM_VERSION_LEN 8
#define MAVLINK_MSG_AUTOPILOT_VERSION_FIELD_MIDDLEWARE_CUSTOM_VERSION_LEN 8
#define MAVLINK_MSG_AUTOPILOT_VERSION_FIELD_OS_CUSTOM_VERSION_LEN 8
#define MAVLINK_MSG_AUTOPILOT_VERSION_FIELD_UID2_LEN 18

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION { \
    148, \
    "AUTOPILOT_VERSION", \
    12, \
    {  { "capabilities", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_autopilot_version_t, capabilities) }, \
         { "flight_sw_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_autopilot_version_t, flight_sw_version) }, \
         { "middleware_sw_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_autopilot_version_t, middleware_sw_version) }, \
         { "os_sw_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_autopilot_version_t, os_sw_version) }, \
         { "board_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_autopilot_version_t, board_version) }, \
         { "flight_custom_version", NULL, MAVLINK_TYPE_UINT8_T, 8, 36, offsetof(mavlink_autopilot_version_t, flight_custom_version) }, \
         { "middleware_custom_version", NULL, MAVLINK_TYPE_UINT8_T, 8, 44, offsetof(mavlink_autopilot_version_t, middleware_custom_version) }, \
         { "os_custom_version", NULL, MAVLINK_TYPE_UINT8_T, 8, 52, offsetof(mavlink_autopilot_version_t, os_custom_version) }, \
         { "vendor_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_autopilot_version_t, vendor_id) }, \
         { "product_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_autopilot_version_t, product_id) }, \
         { "uid", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_autopilot_version_t, uid) }, \
         { "uid2", NULL, MAVLINK_TYPE_UINT8_T, 18, 60, offsetof(mavlink_autopilot_version_t, uid2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION { \
    "AUTOPILOT_VERSION", \
    12, \
    {  { "capabilities", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_autopilot_version_t, capabilities) }, \
         { "flight_sw_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_autopilot_version_t, flight_sw_version) }, \
         { "middleware_sw_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_autopilot_version_t, middleware_sw_version) }, \
         { "os_sw_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_autopilot_version_t, os_sw_version) }, \
         { "board_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_autopilot_version_t, board_version) }, \
         { "flight_custom_version", NULL, MAVLINK_TYPE_UINT8_T, 8, 36, offsetof(mavlink_autopilot_version_t, flight_custom_version) }, \
         { "middleware_custom_version", NULL, MAVLINK_TYPE_UINT8_T, 8, 44, offsetof(mavlink_autopilot_version_t, middleware_custom_version) }, \
         { "os_custom_version", NULL, MAVLINK_TYPE_UINT8_T, 8, 52, offsetof(mavlink_autopilot_version_t, os_custom_version) }, \
         { "vendor_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_autopilot_version_t, vendor_id) }, \
         { "product_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_autopilot_version_t, product_id) }, \
         { "uid", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_autopilot_version_t, uid) }, \
         { "uid2", NULL, MAVLINK_TYPE_UINT8_T, 18, 60, offsetof(mavlink_autopilot_version_t, uid2) }, \
         } \
}
#endif

/**
 * @brief Pack a autopilot_version message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param capabilities  Bitmap of capabilities
 * @param flight_sw_version  Firmware version number
 * @param middleware_sw_version  Middleware version number
 * @param os_sw_version  Operating system version number
 * @param board_version  HW / board version (last 8 bytes should be silicon ID, if any)
 * @param flight_custom_version  Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.
 * @param middleware_custom_version  Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.
 * @param os_custom_version  Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.
 * @param vendor_id  ID of the board vendor
 * @param product_id  ID of the product
 * @param uid  UID if provided by hardware (see uid2)
 * @param uid2  UID if provided by hardware (supersedes the uid field. If this is non-zero, use this field, otherwise use uid)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_autopilot_version_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t capabilities, uint32_t flight_sw_version, uint32_t middleware_sw_version, uint32_t os_sw_version, uint32_t board_version, const uint8_t *flight_custom_version, const uint8_t *middleware_custom_version, const uint8_t *os_custom_version, uint16_t vendor_id, uint16_t product_id, uint64_t uid, const uint8_t *uid2)
{
    _mav_put_uint64_t(((char*)msg->payloads), 0, capabilities);
    _mav_put_uint64_t(((char*)msg->payloads), 8, uid);
    _mav_put_uint32_t(((char*)msg->payloads), 16, flight_sw_version);
    _mav_put_uint32_t(((char*)msg->payloads), 20, middleware_sw_version);
    _mav_put_uint32_t(((char*)msg->payloads), 24, os_sw_version);
    _mav_put_uint32_t(((char*)msg->payloads), 28, board_version);
    _mav_put_uint16_t(((char*)msg->payloads), 32, vendor_id);
    _mav_put_uint16_t(((char*)msg->payloads), 34, product_id);
    _mav_put_uint8_t_array(((char*)msg->payloads), 36, flight_custom_version, 8);
    _mav_put_uint8_t_array(((char*)msg->payloads), 44, middleware_custom_version, 8);
    _mav_put_uint8_t_array(((char*)msg->payloads), 52, os_custom_version, 8);
    _mav_put_uint8_t_array(((char*)msg->payloads), 60, uid2, 18);
    msg->msgid = MAVLINK_MSG_ID_AUTOPILOT_VERSION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AUTOPILOT_VERSION_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_VERSION_LEN, MAVLINK_MSG_ID_AUTOPILOT_VERSION_CRC);
}

/**
 * @brief Pack a autopilot_version message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param capabilities  Bitmap of capabilities
 * @param flight_sw_version  Firmware version number
 * @param middleware_sw_version  Middleware version number
 * @param os_sw_version  Operating system version number
 * @param board_version  HW / board version (last 8 bytes should be silicon ID, if any)
 * @param flight_custom_version  Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.
 * @param middleware_custom_version  Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.
 * @param os_custom_version  Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.
 * @param vendor_id  ID of the board vendor
 * @param product_id  ID of the product
 * @param uid  UID if provided by hardware (see uid2)
 * @param uid2  UID if provided by hardware (supersedes the uid field. If this is non-zero, use this field, otherwise use uid)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_autopilot_version_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t capabilities,uint32_t flight_sw_version,uint32_t middleware_sw_version,uint32_t os_sw_version,uint32_t board_version,const uint8_t *flight_custom_version,const uint8_t *middleware_custom_version,const uint8_t *os_custom_version,uint16_t vendor_id,uint16_t product_id,uint64_t uid,const uint8_t *uid2)
{
    _mav_put_uint64_t(((char*)msg->payloads), 0, capabilities);
    _mav_put_uint64_t(((char*)msg->payloads), 8, uid);
    _mav_put_uint32_t(((char*)msg->payloads), 16, flight_sw_version);
    _mav_put_uint32_t(((char*)msg->payloads), 20, middleware_sw_version);
    _mav_put_uint32_t(((char*)msg->payloads), 24, os_sw_version);
    _mav_put_uint32_t(((char*)msg->payloads), 28, board_version);
    _mav_put_uint16_t(((char*)msg->payloads), 32, vendor_id);
    _mav_put_uint16_t(((char*)msg->payloads), 34, product_id);
    _mav_put_uint8_t_array(((char*)msg->payloads), 36, flight_custom_version, 8);
    _mav_put_uint8_t_array(((char*)msg->payloads), 44, middleware_custom_version, 8);
    _mav_put_uint8_t_array(((char*)msg->payloads), 52, os_custom_version, 8);
    _mav_put_uint8_t_array(((char*)msg->payloads), 60, uid2, 18);

    msg->msgid = MAVLINK_MSG_ID_AUTOPILOT_VERSION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AUTOPILOT_VERSION_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_VERSION_LEN, MAVLINK_MSG_ID_AUTOPILOT_VERSION_CRC);
}

/**
 * @brief Encode a autopilot_version struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param autopilot_version C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_autopilot_version_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_autopilot_version_t* autopilot_version)
{
    return mavlink_msg_autopilot_version_pack(system_id, component_id, msg, autopilot_version->capabilities, autopilot_version->flight_sw_version, autopilot_version->middleware_sw_version, autopilot_version->os_sw_version, autopilot_version->board_version, autopilot_version->flight_custom_version, autopilot_version->middleware_custom_version, autopilot_version->os_custom_version, autopilot_version->vendor_id, autopilot_version->product_id, autopilot_version->uid, autopilot_version->uid2);
}

/**
 * @brief Encode a autopilot_version struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param autopilot_version C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_autopilot_version_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_autopilot_version_t* autopilot_version)
{
    return mavlink_msg_autopilot_version_pack_chan(system_id, component_id, chan, msg, autopilot_version->capabilities, autopilot_version->flight_sw_version, autopilot_version->middleware_sw_version, autopilot_version->os_sw_version, autopilot_version->board_version, autopilot_version->flight_custom_version, autopilot_version->middleware_custom_version, autopilot_version->os_custom_version, autopilot_version->vendor_id, autopilot_version->product_id, autopilot_version->uid, autopilot_version->uid2);
}

// MESSAGE AUTOPILOT_VERSION UNPACKING


/**
 * @brief Get field capabilities from autopilot_version message
 *
 * @return  Bitmap of capabilities
 */
static inline uint64_t mavlink_msg_autopilot_version_get_capabilities(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field flight_sw_version from autopilot_version message
 *
 * @return  Firmware version number
 */
static inline uint32_t mavlink_msg_autopilot_version_get_flight_sw_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Get field middleware_sw_version from autopilot_version message
 *
 * @return  Middleware version number
 */
static inline uint32_t mavlink_msg_autopilot_version_get_middleware_sw_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field os_sw_version from autopilot_version message
 *
 * @return  Operating system version number
 */
static inline uint32_t mavlink_msg_autopilot_version_get_os_sw_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  24);
}

/**
 * @brief Get field board_version from autopilot_version message
 *
 * @return  HW / board version (last 8 bytes should be silicon ID, if any)
 */
static inline uint32_t mavlink_msg_autopilot_version_get_board_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  28);
}

/**
 * @brief Get field flight_custom_version from autopilot_version message
 *
 * @return  Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.
 */
static inline uint16_t mavlink_msg_autopilot_version_get_flight_custom_version(const mavlink_message_t* msg, uint8_t *flight_custom_version)
{
    return _MAV_RETURN_uint8_t_array(msg, flight_custom_version, 8,  36);
}

/**
 * @brief Get field middleware_custom_version from autopilot_version message
 *
 * @return  Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.
 */
static inline uint16_t mavlink_msg_autopilot_version_get_middleware_custom_version(const mavlink_message_t* msg, uint8_t *middleware_custom_version)
{
    return _MAV_RETURN_uint8_t_array(msg, middleware_custom_version, 8,  44);
}

/**
 * @brief Get field os_custom_version from autopilot_version message
 *
 * @return  Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.
 */
static inline uint16_t mavlink_msg_autopilot_version_get_os_custom_version(const mavlink_message_t* msg, uint8_t *os_custom_version)
{
    return _MAV_RETURN_uint8_t_array(msg, os_custom_version, 8,  52);
}

/**
 * @brief Get field vendor_id from autopilot_version message
 *
 * @return  ID of the board vendor
 */
static inline uint16_t mavlink_msg_autopilot_version_get_vendor_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  32);
}

/**
 * @brief Get field product_id from autopilot_version message
 *
 * @return  ID of the product
 */
static inline uint16_t mavlink_msg_autopilot_version_get_product_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  34);
}

/**
 * @brief Get field uid from autopilot_version message
 *
 * @return  UID if provided by hardware (see uid2)
 */
static inline uint64_t mavlink_msg_autopilot_version_get_uid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field uid2 from autopilot_version message
 *
 * @return  UID if provided by hardware (supersedes the uid field. If this is non-zero, use this field, otherwise use uid)
 */
static inline uint16_t mavlink_msg_autopilot_version_get_uid2(const mavlink_message_t* msg, uint8_t *uid2)
{
    return _MAV_RETURN_uint8_t_array(msg, uid2, 18,  60);
}

/**
 * @brief Decode a autopilot_version message into a struct
 *
 * @param msg The message to decode
 * @param autopilot_version C-struct to decode the message contents into
 */
static inline void mavlink_msg_autopilot_version_decode(const mavlink_message_t* msg, mavlink_autopilot_version_t* autopilot_version)
{
    autopilot_version->capabilities = mavlink_msg_autopilot_version_get_capabilities(msg);
    autopilot_version->uid = mavlink_msg_autopilot_version_get_uid(msg);
    autopilot_version->flight_sw_version = mavlink_msg_autopilot_version_get_flight_sw_version(msg);
    autopilot_version->middleware_sw_version = mavlink_msg_autopilot_version_get_middleware_sw_version(msg);
    autopilot_version->os_sw_version = mavlink_msg_autopilot_version_get_os_sw_version(msg);
    autopilot_version->board_version = mavlink_msg_autopilot_version_get_board_version(msg);
    autopilot_version->vendor_id = mavlink_msg_autopilot_version_get_vendor_id(msg);
    autopilot_version->product_id = mavlink_msg_autopilot_version_get_product_id(msg);
    mavlink_msg_autopilot_version_get_flight_custom_version(msg, autopilot_version->flight_custom_version);
    mavlink_msg_autopilot_version_get_middleware_custom_version(msg, autopilot_version->middleware_custom_version);
    mavlink_msg_autopilot_version_get_os_custom_version(msg, autopilot_version->os_custom_version);
    mavlink_msg_autopilot_version_get_uid2(msg, autopilot_version->uid2);
}
#endif

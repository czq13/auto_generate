#ifndef MAVLINK_MSG_command_int
#define MAVLINK_MSG_command_int
// MESSAGE COMMAND_INT PACKING

#define MAVLINK_MSG_ID_COMMAND_INT 75

typedef struct __mavlink_command_int_t {
 float param1; /*<  PARAM1, see MAV_CMD enum*/
 float param2; /*<  PARAM2, see MAV_CMD enum*/
 float param3; /*<  PARAM3, see MAV_CMD enum*/
 float param4; /*<  PARAM4, see MAV_CMD enum*/
 int32_t x; /*<  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7*/
 int32_t y; /*<  PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7*/
 float z; /*<  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame).*/
 uint16_t command; /*<  The scheduled action for the mission item.*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
 uint8_t frame; /*<  The coordinate system of the COMMAND.*/
 uint8_t current; /*<  false:0, true:1*/
 uint8_t autocontinue; /*<  autocontinue to next wp*/
} mavlink_command_int_t;

#define MAVLINK_MSG_ID_COMMAND_INT_LEN 35
#define MAVLINK_MSG_ID_COMMAND_INT_MIN_LEN 35
#define MAVLINK_MSG_ID_75_LEN 35
#define MAVLINK_MSG_ID_75_MIN_LEN 35

#define MAVLINK_MSG_ID_COMMAND_INT_CRC 158
#define MAVLINK_MSG_ID_75_CRC 158



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_COMMAND_INT { \
    75, \
    "COMMAND_INT", \
    13, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_command_int_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_command_int_t, target_component) }, \
         { "frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_command_int_t, frame) }, \
         { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_command_int_t, command) }, \
         { "current", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_command_int_t, current) }, \
         { "autocontinue", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_command_int_t, autocontinue) }, \
         { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_command_int_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_command_int_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_command_int_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_command_int_t, param4) }, \
         { "x", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_command_int_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_command_int_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_command_int_t, z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_COMMAND_INT { \
    "COMMAND_INT", \
    13, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_command_int_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_command_int_t, target_component) }, \
         { "frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_command_int_t, frame) }, \
         { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_command_int_t, command) }, \
         { "current", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_command_int_t, current) }, \
         { "autocontinue", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_command_int_t, autocontinue) }, \
         { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_command_int_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_command_int_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_command_int_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_command_int_t, param4) }, \
         { "x", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_command_int_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_command_int_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_command_int_t, z) }, \
         } \
}
#endif

/**
 * @brief Pack a command_int message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param frame  The coordinate system of the COMMAND.
 * @param command  The scheduled action for the mission item.
 * @param current  false:0, true:1
 * @param autocontinue  autocontinue to next wp
 * @param param1  PARAM1, see MAV_CMD enum
 * @param param2  PARAM2, see MAV_CMD enum
 * @param param3  PARAM3, see MAV_CMD enum
 * @param param4  PARAM4, see MAV_CMD enum
 * @param x  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
 * @param y  PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7
 * @param z  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_int_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t frame, uint16_t command, uint8_t current, uint8_t autocontinue, float param1, float param2, float param3, float param4, int32_t x, int32_t y, float z)
{
    _mav_put_float(((char*)msg->payloads), 0, param1);
    _mav_put_float(((char*)msg->payloads), 4, param2);
    _mav_put_float(((char*)msg->payloads), 8, param3);
    _mav_put_float(((char*)msg->payloads), 12, param4);
    _mav_put_int32_t(((char*)msg->payloads), 16, x);
    _mav_put_int32_t(((char*)msg->payloads), 20, y);
    _mav_put_float(((char*)msg->payloads), 24, z);
    _mav_put_uint16_t(((char*)msg->payloads), 28, command);
    _mav_put_uint8_t(((char*)msg->payloads), 30, target_system);
    _mav_put_uint8_t(((char*)msg->payloads), 31, target_component);
    _mav_put_uint8_t(((char*)msg->payloads), 32, frame);
    _mav_put_uint8_t(((char*)msg->payloads), 33, current);
    _mav_put_uint8_t(((char*)msg->payloads), 34, autocontinue);

    msg->msgid = MAVLINK_MSG_ID_COMMAND_INT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_COMMAND_INT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_INT_LEN, MAVLINK_MSG_ID_COMMAND_INT_CRC);
}

/**
 * @brief Pack a command_int message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param frame  The coordinate system of the COMMAND.
 * @param command  The scheduled action for the mission item.
 * @param current  false:0, true:1
 * @param autocontinue  autocontinue to next wp
 * @param param1  PARAM1, see MAV_CMD enum
 * @param param2  PARAM2, see MAV_CMD enum
 * @param param3  PARAM3, see MAV_CMD enum
 * @param param4  PARAM4, see MAV_CMD enum
 * @param x  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
 * @param y  PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7
 * @param z  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_int_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t frame,uint16_t command,uint8_t current,uint8_t autocontinue,float param1,float param2,float param3,float param4,int32_t x,int32_t y,float z)
{
    _mav_put_float(((char*)msg->payloads), 0, param1);
    _mav_put_float(((char*)msg->payloads), 4, param2);
    _mav_put_float(((char*)msg->payloads), 8, param3);
    _mav_put_float(((char*)msg->payloads), 12, param4);
    _mav_put_int32_t(((char*)msg->payloads), 16, x);
    _mav_put_int32_t(((char*)msg->payloads), 20, y);
    _mav_put_float(((char*)msg->payloads), 24, z);
    _mav_put_uint16_t(((char*)msg->payloads), 28, command);
    _mav_put_uint8_t(((char*)msg->payloads), 30, target_system);
    _mav_put_uint8_t(((char*)msg->payloads), 31, target_component);
    _mav_put_uint8_t(((char*)msg->payloads), 32, frame);
    _mav_put_uint8_t(((char*)msg->payloads), 33, current);
    _mav_put_uint8_t(((char*)msg->payloads), 34, autocontinue);


    msg->msgid = MAVLINK_MSG_ID_COMMAND_INT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_COMMAND_INT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_INT_LEN, MAVLINK_MSG_ID_COMMAND_INT_CRC);
}

/**
 * @brief Encode a command_int struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param command_int C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_command_int_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_command_int_t* command_int)
{
    return mavlink_msg_command_int_pack(system_id, component_id, msg, command_int->target_system, command_int->target_component, command_int->frame, command_int->command, command_int->current, command_int->autocontinue, command_int->param1, command_int->param2, command_int->param3, command_int->param4, command_int->x, command_int->y, command_int->z);
}

/**
 * @brief Encode a command_int struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command_int C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_command_int_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_command_int_t* command_int)
{
    return mavlink_msg_command_int_pack_chan(system_id, component_id, chan, msg, command_int->target_system, command_int->target_component, command_int->frame, command_int->command, command_int->current, command_int->autocontinue, command_int->param1, command_int->param2, command_int->param3, command_int->param4, command_int->x, command_int->y, command_int->z);
}

// MESSAGE COMMAND_INT UNPACKING


/**
 * @brief Get field target_system from command_int message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_command_int_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  30);
}

/**
 * @brief Get field target_component from command_int message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_command_int_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  31);
}

/**
 * @brief Get field frame from command_int message
 *
 * @return  The coordinate system of the COMMAND.
 */
static inline uint8_t mavlink_msg_command_int_get_frame(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field command from command_int message
 *
 * @return  The scheduled action for the mission item.
 */
static inline uint16_t mavlink_msg_command_int_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field current from command_int message
 *
 * @return  false:0, true:1
 */
static inline uint8_t mavlink_msg_command_int_get_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field autocontinue from command_int message
 *
 * @return  autocontinue to next wp
 */
static inline uint8_t mavlink_msg_command_int_get_autocontinue(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field param1 from command_int message
 *
 * @return  PARAM1, see MAV_CMD enum
 */
static inline float mavlink_msg_command_int_get_param1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field param2 from command_int message
 *
 * @return  PARAM2, see MAV_CMD enum
 */
static inline float mavlink_msg_command_int_get_param2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field param3 from command_int message
 *
 * @return  PARAM3, see MAV_CMD enum
 */
static inline float mavlink_msg_command_int_get_param3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field param4 from command_int message
 *
 * @return  PARAM4, see MAV_CMD enum
 */
static inline float mavlink_msg_command_int_get_param4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field x from command_int message
 *
 * @return  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
 */
static inline int32_t mavlink_msg_command_int_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field y from command_int message
 *
 * @return  PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7
 */
static inline int32_t mavlink_msg_command_int_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field z from command_int message
 *
 * @return  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame).
 */
static inline float mavlink_msg_command_int_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a command_int message into a struct
 *
 * @param msg The message to decode
 * @param command_int C-struct to decode the message contents into
 */
static inline void mavlink_msg_command_int_decode(const mavlink_message_t* msg, mavlink_command_int_t* command_int)
{
    command_int->param1 = mavlink_msg_command_int_get_param1(msg);
    command_int->param2 = mavlink_msg_command_int_get_param2(msg);
    command_int->param3 = mavlink_msg_command_int_get_param3(msg);
    command_int->param4 = mavlink_msg_command_int_get_param4(msg);
    command_int->x = mavlink_msg_command_int_get_x(msg);
    command_int->y = mavlink_msg_command_int_get_y(msg);
    command_int->z = mavlink_msg_command_int_get_z(msg);
    command_int->command = mavlink_msg_command_int_get_command(msg);
    command_int->target_system = mavlink_msg_command_int_get_target_system(msg);
    command_int->target_component = mavlink_msg_command_int_get_target_component(msg);
    command_int->frame = mavlink_msg_command_int_get_frame(msg);
    command_int->current = mavlink_msg_command_int_get_current(msg);
    command_int->autocontinue = mavlink_msg_command_int_get_autocontinue(msg);
}
#endif

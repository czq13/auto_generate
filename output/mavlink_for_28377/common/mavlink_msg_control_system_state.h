#ifndef MAVLINK_MSG_control_system_state
#define MAVLINK_MSG_control_system_state
// MESSAGE CONTROL_SYSTEM_STATE PACKING

#define MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE 146

typedef struct __mavlink_control_system_state_t {
 uint64_t time_usec; /*< [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.*/
 float x_acc; /*< [m/s/s] X acceleration in body frame*/
 float y_acc; /*< [m/s/s] Y acceleration in body frame*/
 float z_acc; /*< [m/s/s] Z acceleration in body frame*/
 float x_vel; /*< [m/s] X velocity in body frame*/
 float y_vel; /*< [m/s] Y velocity in body frame*/
 float z_vel; /*< [m/s] Z velocity in body frame*/
 float x_pos; /*< [m] X position in local frame*/
 float y_pos; /*< [m] Y position in local frame*/
 float z_pos; /*< [m] Z position in local frame*/
 float airspeed; /*< [m/s] Airspeed, set to -1 if unknown*/
 float vel_variance[3]; /*<  Variance of body velocity estimate*/
 float pos_variance[3]; /*<  Variance in local position*/
 float q[4]; /*<  The attitude, represented as Quaternion*/
 float roll_rate; /*< [rad/s] Angular rate in roll axis*/
 float pitch_rate; /*< [rad/s] Angular rate in pitch axis*/
 float yaw_rate; /*< [rad/s] Angular rate in yaw axis*/
} mavlink_control_system_state_t;

#define MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE_LEN 100
#define MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE_MIN_LEN 100
#define MAVLINK_MSG_ID_146_LEN 100
#define MAVLINK_MSG_ID_146_MIN_LEN 100

#define MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE_CRC 103
#define MAVLINK_MSG_ID_146_CRC 103

#define MAVLINK_MSG_CONTROL_SYSTEM_STATE_FIELD_VEL_VARIANCE_LEN 3
#define MAVLINK_MSG_CONTROL_SYSTEM_STATE_FIELD_POS_VARIANCE_LEN 3
#define MAVLINK_MSG_CONTROL_SYSTEM_STATE_FIELD_Q_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CONTROL_SYSTEM_STATE { \
    146, \
    "CONTROL_SYSTEM_STATE", \
    17, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_control_system_state_t, time_usec) }, \
         { "x_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_control_system_state_t, x_acc) }, \
         { "y_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_control_system_state_t, y_acc) }, \
         { "z_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_control_system_state_t, z_acc) }, \
         { "x_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_control_system_state_t, x_vel) }, \
         { "y_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_control_system_state_t, y_vel) }, \
         { "z_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_control_system_state_t, z_vel) }, \
         { "x_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_control_system_state_t, x_pos) }, \
         { "y_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_control_system_state_t, y_pos) }, \
         { "z_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_control_system_state_t, z_pos) }, \
         { "airspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_control_system_state_t, airspeed) }, \
         { "vel_variance", NULL, MAVLINK_TYPE_FLOAT, 3, 48, offsetof(mavlink_control_system_state_t, vel_variance) }, \
         { "pos_variance", NULL, MAVLINK_TYPE_FLOAT, 3, 60, offsetof(mavlink_control_system_state_t, pos_variance) }, \
         { "q", NULL, MAVLINK_TYPE_FLOAT, 4, 72, offsetof(mavlink_control_system_state_t, q) }, \
         { "roll_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_control_system_state_t, roll_rate) }, \
         { "pitch_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 92, offsetof(mavlink_control_system_state_t, pitch_rate) }, \
         { "yaw_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 96, offsetof(mavlink_control_system_state_t, yaw_rate) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CONTROL_SYSTEM_STATE { \
    "CONTROL_SYSTEM_STATE", \
    17, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_control_system_state_t, time_usec) }, \
         { "x_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_control_system_state_t, x_acc) }, \
         { "y_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_control_system_state_t, y_acc) }, \
         { "z_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_control_system_state_t, z_acc) }, \
         { "x_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_control_system_state_t, x_vel) }, \
         { "y_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_control_system_state_t, y_vel) }, \
         { "z_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_control_system_state_t, z_vel) }, \
         { "x_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_control_system_state_t, x_pos) }, \
         { "y_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_control_system_state_t, y_pos) }, \
         { "z_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_control_system_state_t, z_pos) }, \
         { "airspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_control_system_state_t, airspeed) }, \
         { "vel_variance", NULL, MAVLINK_TYPE_FLOAT, 3, 48, offsetof(mavlink_control_system_state_t, vel_variance) }, \
         { "pos_variance", NULL, MAVLINK_TYPE_FLOAT, 3, 60, offsetof(mavlink_control_system_state_t, pos_variance) }, \
         { "q", NULL, MAVLINK_TYPE_FLOAT, 4, 72, offsetof(mavlink_control_system_state_t, q) }, \
         { "roll_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_control_system_state_t, roll_rate) }, \
         { "pitch_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 92, offsetof(mavlink_control_system_state_t, pitch_rate) }, \
         { "yaw_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 96, offsetof(mavlink_control_system_state_t, yaw_rate) }, \
         } \
}
#endif

/**
 * @brief Pack a control_system_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param x_acc [m/s/s] X acceleration in body frame
 * @param y_acc [m/s/s] Y acceleration in body frame
 * @param z_acc [m/s/s] Z acceleration in body frame
 * @param x_vel [m/s] X velocity in body frame
 * @param y_vel [m/s] Y velocity in body frame
 * @param z_vel [m/s] Z velocity in body frame
 * @param x_pos [m] X position in local frame
 * @param y_pos [m] Y position in local frame
 * @param z_pos [m] Z position in local frame
 * @param airspeed [m/s] Airspeed, set to -1 if unknown
 * @param vel_variance  Variance of body velocity estimate
 * @param pos_variance  Variance in local position
 * @param q  The attitude, represented as Quaternion
 * @param roll_rate [rad/s] Angular rate in roll axis
 * @param pitch_rate [rad/s] Angular rate in pitch axis
 * @param yaw_rate [rad/s] Angular rate in yaw axis
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_control_system_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float x_acc, float y_acc, float z_acc, float x_vel, float y_vel, float z_vel, float x_pos, float y_pos, float z_pos, float airspeed, const float *vel_variance, const float *pos_variance, const float *q, float roll_rate, float pitch_rate, float yaw_rate)
{
    _mav_put_uint64_t(((char*)msg->payloads), 0, time_usec);
    _mav_put_float(((char*)msg->payloads), 8, x_acc);
    _mav_put_float(((char*)msg->payloads), 12, y_acc);
    _mav_put_float(((char*)msg->payloads), 16, z_acc);
    _mav_put_float(((char*)msg->payloads), 20, x_vel);
    _mav_put_float(((char*)msg->payloads), 24, y_vel);
    _mav_put_float(((char*)msg->payloads), 28, z_vel);
    _mav_put_float(((char*)msg->payloads), 32, x_pos);
    _mav_put_float(((char*)msg->payloads), 36, y_pos);
    _mav_put_float(((char*)msg->payloads), 40, z_pos);
    _mav_put_float(((char*)msg->payloads), 44, airspeed);
    _mav_put_float(((char*)msg->payloads), 88, roll_rate);
    _mav_put_float(((char*)msg->payloads), 92, pitch_rate);
    _mav_put_float(((char*)msg->payloads), 96, yaw_rate);
    _mav_put_float_array(((char*)msg->payloads), 48, vel_variance, 3);
    _mav_put_float_array(((char*)msg->payloads), 60, pos_variance, 3);
    _mav_put_float_array(((char*)msg->payloads), 72, q, 4);
    msg->msgid = MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE_MIN_LEN, MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE_LEN, MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE_CRC);
}

/**
 * @brief Pack a control_system_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param x_acc [m/s/s] X acceleration in body frame
 * @param y_acc [m/s/s] Y acceleration in body frame
 * @param z_acc [m/s/s] Z acceleration in body frame
 * @param x_vel [m/s] X velocity in body frame
 * @param y_vel [m/s] Y velocity in body frame
 * @param z_vel [m/s] Z velocity in body frame
 * @param x_pos [m] X position in local frame
 * @param y_pos [m] Y position in local frame
 * @param z_pos [m] Z position in local frame
 * @param airspeed [m/s] Airspeed, set to -1 if unknown
 * @param vel_variance  Variance of body velocity estimate
 * @param pos_variance  Variance in local position
 * @param q  The attitude, represented as Quaternion
 * @param roll_rate [rad/s] Angular rate in roll axis
 * @param pitch_rate [rad/s] Angular rate in pitch axis
 * @param yaw_rate [rad/s] Angular rate in yaw axis
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_control_system_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float x_acc,float y_acc,float z_acc,float x_vel,float y_vel,float z_vel,float x_pos,float y_pos,float z_pos,float airspeed,const float *vel_variance,const float *pos_variance,const float *q,float roll_rate,float pitch_rate,float yaw_rate)
{
    _mav_put_uint64_t(((char*)msg->payloads), 0, time_usec);
    _mav_put_float(((char*)msg->payloads), 8, x_acc);
    _mav_put_float(((char*)msg->payloads), 12, y_acc);
    _mav_put_float(((char*)msg->payloads), 16, z_acc);
    _mav_put_float(((char*)msg->payloads), 20, x_vel);
    _mav_put_float(((char*)msg->payloads), 24, y_vel);
    _mav_put_float(((char*)msg->payloads), 28, z_vel);
    _mav_put_float(((char*)msg->payloads), 32, x_pos);
    _mav_put_float(((char*)msg->payloads), 36, y_pos);
    _mav_put_float(((char*)msg->payloads), 40, z_pos);
    _mav_put_float(((char*)msg->payloads), 44, airspeed);
    _mav_put_float(((char*)msg->payloads), 88, roll_rate);
    _mav_put_float(((char*)msg->payloads), 92, pitch_rate);
    _mav_put_float(((char*)msg->payloads), 96, yaw_rate);
    _mav_put_float_array(((char*)msg->payloads), 48, vel_variance, 3);
    _mav_put_float_array(((char*)msg->payloads), 60, pos_variance, 3);
    _mav_put_float_array(((char*)msg->payloads), 72, q, 4);

    msg->msgid = MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE_MIN_LEN, MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE_LEN, MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE_CRC);
}

/**
 * @brief Encode a control_system_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param control_system_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_control_system_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_control_system_state_t* control_system_state)
{
    return mavlink_msg_control_system_state_pack(system_id, component_id, msg, control_system_state->time_usec, control_system_state->x_acc, control_system_state->y_acc, control_system_state->z_acc, control_system_state->x_vel, control_system_state->y_vel, control_system_state->z_vel, control_system_state->x_pos, control_system_state->y_pos, control_system_state->z_pos, control_system_state->airspeed, control_system_state->vel_variance, control_system_state->pos_variance, control_system_state->q, control_system_state->roll_rate, control_system_state->pitch_rate, control_system_state->yaw_rate);
}

/**
 * @brief Encode a control_system_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param control_system_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_control_system_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_control_system_state_t* control_system_state)
{
    return mavlink_msg_control_system_state_pack_chan(system_id, component_id, chan, msg, control_system_state->time_usec, control_system_state->x_acc, control_system_state->y_acc, control_system_state->z_acc, control_system_state->x_vel, control_system_state->y_vel, control_system_state->z_vel, control_system_state->x_pos, control_system_state->y_pos, control_system_state->z_pos, control_system_state->airspeed, control_system_state->vel_variance, control_system_state->pos_variance, control_system_state->q, control_system_state->roll_rate, control_system_state->pitch_rate, control_system_state->yaw_rate);
}

// MESSAGE CONTROL_SYSTEM_STATE UNPACKING


/**
 * @brief Get field time_usec from control_system_state message
 *
 * @return [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 */
static inline uint64_t mavlink_msg_control_system_state_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field x_acc from control_system_state message
 *
 * @return [m/s/s] X acceleration in body frame
 */
static inline float mavlink_msg_control_system_state_get_x_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field y_acc from control_system_state message
 *
 * @return [m/s/s] Y acceleration in body frame
 */
static inline float mavlink_msg_control_system_state_get_y_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field z_acc from control_system_state message
 *
 * @return [m/s/s] Z acceleration in body frame
 */
static inline float mavlink_msg_control_system_state_get_z_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field x_vel from control_system_state message
 *
 * @return [m/s] X velocity in body frame
 */
static inline float mavlink_msg_control_system_state_get_x_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field y_vel from control_system_state message
 *
 * @return [m/s] Y velocity in body frame
 */
static inline float mavlink_msg_control_system_state_get_y_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field z_vel from control_system_state message
 *
 * @return [m/s] Z velocity in body frame
 */
static inline float mavlink_msg_control_system_state_get_z_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field x_pos from control_system_state message
 *
 * @return [m] X position in local frame
 */
static inline float mavlink_msg_control_system_state_get_x_pos(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field y_pos from control_system_state message
 *
 * @return [m] Y position in local frame
 */
static inline float mavlink_msg_control_system_state_get_y_pos(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field z_pos from control_system_state message
 *
 * @return [m] Z position in local frame
 */
static inline float mavlink_msg_control_system_state_get_z_pos(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field airspeed from control_system_state message
 *
 * @return [m/s] Airspeed, set to -1 if unknown
 */
static inline float mavlink_msg_control_system_state_get_airspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field vel_variance from control_system_state message
 *
 * @return  Variance of body velocity estimate
 */
static inline uint16_t mavlink_msg_control_system_state_get_vel_variance(const mavlink_message_t* msg, float *vel_variance)
{
    return _MAV_RETURN_float_array(msg, vel_variance, 3,  48);
}

/**
 * @brief Get field pos_variance from control_system_state message
 *
 * @return  Variance in local position
 */
static inline uint16_t mavlink_msg_control_system_state_get_pos_variance(const mavlink_message_t* msg, float *pos_variance)
{
    return _MAV_RETURN_float_array(msg, pos_variance, 3,  60);
}

/**
 * @brief Get field q from control_system_state message
 *
 * @return  The attitude, represented as Quaternion
 */
static inline uint16_t mavlink_msg_control_system_state_get_q(const mavlink_message_t* msg, float *q)
{
    return _MAV_RETURN_float_array(msg, q, 4,  72);
}

/**
 * @brief Get field roll_rate from control_system_state message
 *
 * @return [rad/s] Angular rate in roll axis
 */
static inline float mavlink_msg_control_system_state_get_roll_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  88);
}

/**
 * @brief Get field pitch_rate from control_system_state message
 *
 * @return [rad/s] Angular rate in pitch axis
 */
static inline float mavlink_msg_control_system_state_get_pitch_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  92);
}

/**
 * @brief Get field yaw_rate from control_system_state message
 *
 * @return [rad/s] Angular rate in yaw axis
 */
static inline float mavlink_msg_control_system_state_get_yaw_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  96);
}

/**
 * @brief Decode a control_system_state message into a struct
 *
 * @param msg The message to decode
 * @param control_system_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_control_system_state_decode(const mavlink_message_t* msg, mavlink_control_system_state_t* control_system_state)
{
    control_system_state->time_usec = mavlink_msg_control_system_state_get_time_usec(msg);
    control_system_state->x_acc = mavlink_msg_control_system_state_get_x_acc(msg);
    control_system_state->y_acc = mavlink_msg_control_system_state_get_y_acc(msg);
    control_system_state->z_acc = mavlink_msg_control_system_state_get_z_acc(msg);
    control_system_state->x_vel = mavlink_msg_control_system_state_get_x_vel(msg);
    control_system_state->y_vel = mavlink_msg_control_system_state_get_y_vel(msg);
    control_system_state->z_vel = mavlink_msg_control_system_state_get_z_vel(msg);
    control_system_state->x_pos = mavlink_msg_control_system_state_get_x_pos(msg);
    control_system_state->y_pos = mavlink_msg_control_system_state_get_y_pos(msg);
    control_system_state->z_pos = mavlink_msg_control_system_state_get_z_pos(msg);
    control_system_state->airspeed = mavlink_msg_control_system_state_get_airspeed(msg);
    mavlink_msg_control_system_state_get_vel_variance(msg, control_system_state->vel_variance);
    mavlink_msg_control_system_state_get_pos_variance(msg, control_system_state->pos_variance);
    mavlink_msg_control_system_state_get_q(msg, control_system_state->q);
    control_system_state->roll_rate = mavlink_msg_control_system_state_get_roll_rate(msg);
    control_system_state->pitch_rate = mavlink_msg_control_system_state_get_pitch_rate(msg);
    control_system_state->yaw_rate = mavlink_msg_control_system_state_get_yaw_rate(msg);
}
#endif

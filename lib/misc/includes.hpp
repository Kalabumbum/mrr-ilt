#ifndef INCLUDES_HPP
#define INCLUDES_HPP

#include <stdint.h>

enum DIRECTION : uint8_t { NONE, LEFT, RIGHT, FORWARD, BACKWARD };

using id_t = uint8_t;
using dir_t = DIRECTION;

#endif // INCLUDES_HPP
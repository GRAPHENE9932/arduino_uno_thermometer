#pragma once

#include <stdint.h>
#include <stdbool.h>

unsigned char uint16_to_str(uint16_t num, char* buffer, unsigned char buffer_size, bool skip_zeroes);
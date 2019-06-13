#ifndef __APP_OBJECT_H
#define __APP_OBJECT_H

#include "sdk_common.h"

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct serial_file_object_s
{
        uint32_t filesize;
        uint32_t crc32;
        uint32_t offset_req;
        uint32_t offset_rsp;
        uint32_t length_req;
        uint8_t *p_data;
        uint8_t mtusize;
        // serial_payload_file_cmd_t state;
} serial_file_object_t;


uint32_t crc32_compute(uint8_t const * p_data, uint32_t size, uint32_t const * p_crc);

void app_object_init(void);

#endif

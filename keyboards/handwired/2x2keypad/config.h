#pragma once

#include "config_common.h"

#define VENDOR_ID  0xAEED
#define PRODUCT_ID 0x2002
#define DEVICE_VER 0x0001
#define MANUFACTURER Arturo
#define PRODUCT handwired2x2

#define MATRIX_ROWS 2
#define MATRIX_COLS 2

#define MATRIX_COL_PINS { B5, B4 }
#define MATRIX_ROW_PINS { B6, B2 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE

#define LOCKING_RESYNC_ENABLE

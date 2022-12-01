
#pragma once

#include "config_common.h"

#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { D0, F5, D1, F4, C6, F7, D4, F6 }
#define MATRIX_COL_PINS { B1, B3, B2, B4, E6, D7 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

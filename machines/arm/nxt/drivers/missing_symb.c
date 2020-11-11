#include "tpl_os_definitions.h"

FUNC(void, OS_CODE) systick_isr_C_function(void) {
	return systick_isr_C();
}

FUNC(void, OS_CODE) nxt_motor_isr_C_function(void) {
	return nxt_motor_isr_C();
}

FUNC(void, OS_CODE) spi_isr_C_function(void) {
	return spi_isr_C();
}

FUNC(void, OS_CODE) bt_isr_C_function(void) {
	return bt_isr_C();
}

FUNC(void, OS_CODE) twi_isr_C_function(void) {
	return twi_isr_C();
}

FUNC(void, OS_CODE) systick_low_priority_C_function(void) {
	return systick_low_priority_C();
}

FUNC(void, OS_CODE) i2c_timer_isr_C_function(void) {
	return i2c_timer_isr_C();
}

FUNC(void, OS_CODE) check_buttons_status_function(void) {
	return check_buttons_status();
}

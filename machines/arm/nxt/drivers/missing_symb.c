#include "tpl_os_definitions.h"
#include "tpl_os.h"
#include "buttons.h"

FUNC(void, OS_CODE) systick_isr_C_function(void) {
	systick_isr_C();
}

FUNC(void, OS_CODE) nxt_motor_isr_C_function(void) {
	nxt_motor_isr_C();
}

FUNC(void, OS_CODE) spi_isr_C_function(void) {
	spi_isr_C();
}

FUNC(void, OS_CODE) bt_isr_C_function(void) {
	bt_isr_C();
}

FUNC(void, OS_CODE) twi_isr_C_function(void) {
	twi_isr_C();
}

FUNC(void, OS_CODE) systick_low_priority_C_function(void) {
	systick_low_priority_C();
}

FUNC(void, OS_CODE) i2c_timer_isr_C_function(void) {
	i2c_timer_isr_C();
}

FUNC(void, OS_CODE) check_buttons_status_function(void) {
	check_buttons_status();
}

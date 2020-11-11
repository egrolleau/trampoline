#include "tpl_os_definitions.h"
#include "tpl_os.h"
extern ISR(check_buttons_status);
extern void i2c_timer_isr_C(void);
extern void nxt_motor_isr_C(void);
extern void twi_isr_C(void);
extern void systick_isr_C(void);
extern void spi_isr_C(void);
extern void systick_low_priority_C(void);

FUNC(void, OS_CODE) systick_isr_C_function(void) {
	systick_isr_C();
}

FUNC(void, OS_CODE) nxt_motor_isr_C_function(void) {
	nxt_motor_isr_C();
}

FUNC(void, OS_CODE) spi_isr_C_function(void) {
	spi_isr_C();
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

ISR(check_buttons_status_function) {
	CALL(check_buttons_status);
}

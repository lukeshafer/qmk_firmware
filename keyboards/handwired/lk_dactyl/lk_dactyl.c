#include "lk_dactyl.h"

#ifdef POINTING_DEVICE_ENABLE

/*static bool scrolling_mode = false;*/

void pointing_device_init_kb(void) {
    pmw33xx_init(0);         // index 1 is the second device.
    pmw33xx_set_cpi(0, 800); // applies to first sensor
    pointing_device_init_user();
}

// Contains report from sensor #0 already, need to merge in from sensor #1
report_mouse_t pointing_device_task_kb(report_mouse_t mouse_report) {
    pmw33xx_report_t report = pmw33xx_read_burst(1);
    if (!report.motion.b.is_lifted && report.motion.b.is_motion) {
// From quantum/pointing_device_drivers.c
#    define constrain_hid(amt) ((amt) < -127 ? -127 : ((amt) > 127 ? 127 : (amt)))
        mouse_report.x = constrain_hid(mouse_report.x + report.delta_x);
        mouse_report.y = constrain_hid(mouse_report.y + report.delta_y);
    }
    return pointing_device_task_user(mouse_report);
}
#endif

/*layer_state_t layer_state_set_kb(layer_state_t state) {*/
    /*switch (get_highest_layer(state)) {*/
        /*[>case RAISE: // If we're on the _RAISE layer enable scrolling mode<]*/
            /*[>scrolling_mode = true;<]*/
            /*[>pointing_device_set_cpi(2000);<]*/
            /*[>break;<]*/
        /*default:*/
            /*if (scrolling_mode) { // check if we were scrolling before and set disable if so*/
                /*scrolling_mode = false;*/
                /*pointing_device_set_cpi(8000);*/
            /*}*/
            /*break;*/
    /*}*/
    /*return state;*/
/*}*/

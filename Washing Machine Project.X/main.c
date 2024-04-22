/*
 * File:   main.c
 * Author: faizan
 *
 * Created on April 18, 2024, 9:22 AM
 */


#include <xc.h>

#pragma config WDTE =OFF // watchdog timer disabled

static void init_config(void) {
    // write your initialization code here
}

void main(void) {
    init_config(); // calling initializing function
    while (1) {
        // write application code here
    }

}

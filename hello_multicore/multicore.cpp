/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/multicore.h"
#include <iostream>
#include <vector>
#include "Classes/table.h"

#define FLAG_VALUE 123

using namespace std;

void core1_entry() {
    while(1){
        printf("\nEnter side loop\n");
        for (int f = 50; f >= 0; f--){
            printf("C2:%d ", f);
            sleep_ms(10);
        }        
    }




    /*
    multicore_fifo_push_blocking(FLAG_VALUE);

    uint32_t g = multicore_fifo_pop_blocking();

    if (g != FLAG_VALUE)
        printf("Hmm, that's not right on core 1!\n");
    else
        printf("Its all gone well on core 1!");

    while (1)
        tight_loop_contents();

    */
}

int main() {

    stdio_init_all();





    printf("Launch Program");
    for (int i = 5; i > 0; i--)
    {
        printf ("C2: \n%d ",i );
        sleep_ms(500);
    }


    printf("\nusb host detected!\n");
    printf("Start Program!\n");
    multicore_launch_core1(core1_entry);

    printf("Create table");
    Table *BJ = new Table("BlackJack", 6);


    /// \tag::setup_multicore[]
    while(true){
        BJ->placeCards();

        printf("\nStart main loop:\n");
        for (int f = 100; f >= 0; f--){
              printf ("\nC1: %d ",f );
                    sleep_ms(100);
        }

    }
    printf("End Program!\n");

    /// \end::setup_multicore[]
}

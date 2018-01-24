/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ctime.c
 * Author: james
 *
 * Created on January 24, 2018, 4:43 PM
 */
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    time_t timeval;
    
    (void) time(&timeval);
    printf("The date is: %s", ctime(&timeval));

    return (EXIT_SUCCESS);
}


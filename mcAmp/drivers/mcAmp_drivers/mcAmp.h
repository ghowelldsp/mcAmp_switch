/***********************************************************************************************************************
 * 
 * @file    mcAmp.h
 *
 * @brief   Multichannel Amplifier API's
 *  
 * @par
 * @author  G. Howell
 * 
 **********************************************************************************************************************/

#ifndef MCAMP_H
#define MCAMP_H

#ifdef __cplusplus
extern "C" {
#endif

/*------------------------------------------- INCLUDES ---------------------------------------------------------------*/

#include <stdint.h>

/*------------------------------------------- MACROS AND DEFINES -----------------------------------------------------*/

#define MCAMP_N_AMPS_MAX                        (8U)

#define MCAMP_I2C_SPEED                         (100000U)

/*------------------------------------------- TYPEDEFS ---------------------------------------------------------------*/
/*------------------------------------------- EXPORTED VARIABLES -----------------------------------------------------*/
/*------------------------------------------- GLOBAL FUNCTION PROTOTYPES ---------------------------------------------*/

void mcAmp_init(
    void);

void mcAmp_enable(
    void);

#ifdef __cplusplus
}
#endif

#endif /* MCAMP_H */

/* ************************************************************************** */
/** 
  @Course
    Summer2019 ECE 4534
 
  @File Name
    debug.h

  @Edited
    team 21
 */
/* ************************************************************************** */
#ifndef _DEBUG_H_
#define _DEBUG_H_


#include "system/common/sys_module.h"
#include "system_config.h"
#include "system_definitions.h"

#define DLOC_TASK_BEGIN 0x01
#define DLOC_RECEIVE_FROM_QUEUE_BEGIN 0x02
#define DLOC_RECEIVE_FROM_QUEUE_END 0x03
#define DLOC_SEND_TO_QUEUE_BEGIN 0x04
#define DLOC_SEND_TO_QUEUE_END 0x05
#define DLOC_ENTER_ISR 0x06
#define DLOC_LEAVE_ISR 0x07

void dbgOutputVal(unsigned int outVal);
void dbgOutputLoc(unsigned int outVal);
char dbgUARTVal(unsigned char outVal);
void stop(unsigned int outVal);
/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif


    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* _DEBUG_H */

/* *****************************************************************************
 End of File
 */

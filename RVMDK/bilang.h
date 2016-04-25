

#ifndef _BOARD_H_
#define _BOARD_H_

#ifdef __cplusplus
 extern "C" {
#endif

#include "freeRTOS.h"
#include "task.h"
#include "queue.h"

#define USART_REC_LEN 64  

extern xTimerHandle Receive_Timer;




#ifdef __cplusplus
}
#endif

#endif  /* _BOARD_H_ */


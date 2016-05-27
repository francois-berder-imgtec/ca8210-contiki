/******************************************************************************/
/******************************************************************************/
/****** Cascoda Ltd. 2014, CA-821X EVB Driver Code                       ******/
/******************************************************************************/
/******************************************************************************/
/****** EvaBoard Management Entity (EVBME) Definitions/Declarations      ******/
/******************************************************************************/
/******************************************************************************/
/****** Revision           Notes                                         ******/
/******************************************************************************/
/****** 1.0  19/07/14  WB  Release Baseline                              ******/
/******************************************************************************/
/******************************************************************************/
#include "dev/ca8210/cascoda/include/cascoda_types.h"

#ifndef TEST15_4_PHY_EVBME_H
#define TEST15_4_PHY_EVBME_H


/******************************************************************************/
/****** EVBME Command ID Codes                                           ******/
/******************************************************************************/
#define EVBME_PHY_TESTMODE_REQUEST      (0x83)
#define EVBME_PHY_SET_REQUEST           (0x84)
#define EVBME_PHY_REPORT_REQUEST        (0x85)


/******************************************************************************/
/****** EVBME API Functions                                              ******/
/******************************************************************************/
void TEST15_4_PHY_Handler(void);
void TEST15_4_PHY_UpStreamDispatch(void);
void TEST15_4_PHY_DownStreamDispatch(void);
u8_t EVBME_PHY_TESTMODE_request(u8_t TestMode);
u8_t EVBME_PHY_SET_request(u8_t Parameter, u8_t ParameterLength, u8_t *ParameterValue);
void EVBME_PHY_REPORT_request(void);


#endif // TEST15_4_PHY_EVBME_H
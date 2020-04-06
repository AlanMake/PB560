/*****************************************************************************/
/*                                                                            */
/* Project N�  :  RB0505                                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/* Filename  : CYC_Exh_Controller_Phase.h */
/*                                                                            */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C                     Functionnal description :                            */
/*%C          Generation of the type of control Phase and the type of */ 
/*            control.                                     */
/******************************************************************************/
/*%I Input Parameter :  NONE                                            */
/*%IO Input/Output :    NONE	                                              */
/*%O Output Parameter : NONE       */
/******************************************************************************/


 
#ifndef CYC_EXH_CONTROLLER_PHASE_H
#define CYC_EXH_CONTROLLER_PHASE_H
/******************************************************************************/
/*               				CONSTANT DECLARATION                              */
/******************************************************************************/

/******************************************************************************/
/*               	 EXTERNAL FUNCTION DECLARATION                              */
/******************************************************************************/
extern UWORD16 TIM_ReadCounterValue(e_TIM_TABLE_ID offset_table);
extern UWORD16 DB_ComputeRead(e_DB_COMPUTE Id);
extern UWORD16 DB_CurrentRead(e_DB_ADJUST_CURRENT Id);

#endif

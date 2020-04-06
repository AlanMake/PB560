/******************************************************************************/
/*																 	          						*/
/* Project Number	: 	RB0505     			     	       	  		          			*/
/*																	          						*/
/*----------------------------------------------------------------------------*/
/*                                                 			  	              	*/
/* Filename	: DB_PowerSupply_Read.c 		   	           		              	*/
/*                                                 			  		          	*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C 						Functionnal description : 				          				*/
/*%C			  This function reads the values in the						  			*/
/*%C         			Power supply base							          				*/
/*                                                     				  		  		*/
/******************************************************************************/
/*%I 	Input Parameter : 			Id			                 	          			*/
/*%IO Input/Output Parameter : 	None 	          		                      	*/
/*%O 	Output Parameter : 			None				  		              				*/
/******************************************************************************/

/******************************************************************************/
/*                                INCLUDE FILES		         	              	*/
/******************************************************************************/

#include "typedef.h"
#include "DB_PowerSupply.h"

/******************************************************************************/
/*                                FUNCTION BODY                               */
/******************************************************************************/
UWORD16 DB_PowerSupply_Read(e_DB_POWERSUPPLY Id)
{
	/*%C Return the values of ID parameter 													*/
	return (DB_powerSupply[Id]);	
}
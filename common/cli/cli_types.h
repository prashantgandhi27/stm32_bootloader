/*!*****************************************************************************
*  \author     Prashant Gandhi
*  \date       05/18/2024
********************************************************************************
*  \file       cli_types.h
*
*  \brief      Common command line types.
*
*  \details    None.
*
*  \note       VERSION - 0.1.0
*******************************************************************************/

#ifndef COMMON_CLI_CLI_TYPES_H
#define COMMON_CLI_CLI_TYPES_H

#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif

/*!*****************************************************************************
*  \brief Callback function to process the command.
*******************************************************************************/
typedef void COMD_FUN_CB(char *, size_t const);

/*!*****************************************************************************
*  \brief Structure to hold command and its related processing command callback.
*******************************************************************************/
typedef struct cmd_table
{
	char const* cmd;
	COMD_FUN_CB* fun_ptr;
} Cmd_table_t;


#ifdef __cplusplus
}
#endif


#endif /* COMMON_CLI_CLI_TYPES_H */

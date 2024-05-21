/*!*****************************************************************************
*  \author     Prashant Gandhi
*  \date       05/18/2024
********************************************************************************
*  \file       cli_types.h
*
*  \brief      Supported command table.
*
*  \details    None.
*
*  \note       VERSION - 0.1.0
*******************************************************************************/

#ifndef COMMON_CLI_COMMAND_TABLE_H
#define COMMON_CLI_COMMAND_TABLE_H

#include "cli/cli_types.h"

#ifdef __cplusplus
extern "C"
{
#endif

/*!*****************************************************************************
*  \brief Table for the supported commands.
*******************************************************************************/
extern Cmd_table_t const Cmd_table[];


#ifdef __cplusplus
}
#endif

#endif /* COMMON_CLI_COMMAND_TABLE_H */

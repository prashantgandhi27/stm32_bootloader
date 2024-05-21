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
#include "cli/command_table.h"
#include "cmds/cmd_help.h"

/*****************************************************************************/
Cmd_table_t const Cmd_table[] =
{
	{"HEL", cmd_help},
	{NULL, NULL}
};

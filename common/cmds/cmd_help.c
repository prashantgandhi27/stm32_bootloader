/*!*****************************************************************************
*  \author     Prashant Gandhi
*  \date       05/18/2024
********************************************************************************
*  \file       cmd_help.h
*
*  \brief      Help command.
*
*  \details    Prints all supported commands.
*
*  \note       VERSION - 0.1.0
*******************************************************************************/
#include "cmds/cmd_help.h"

/*****************************************************************************/
static char const help_info[] =
		"Supported commands.\r\n\r\n"
		"HEL - Help command.\r\n";

/*****************************************************************************/
void cmd_help(char *str, size_t const c_str_size)
{
	memcpy(str, help_info, c_str_size);
	return;
}

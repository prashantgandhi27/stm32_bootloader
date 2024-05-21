/*!*****************************************************************************
*  \author     Prashant Gandhi
*  \date       05/13/2024
********************************************************************************
*  \file       cli_cfg.h
*
*  \brief      Defines for command line buffer.
*
*  \details    None
*
*  \note       None
*
*******************************************************************************/
#include "cli_cfg.h"

/******************************************************************************/
char const Cli_start_up_prompt[] =
		"Welcome to STM32 Bootloader tutorial.\r\n\r\n"
		"NOTE: This tutorial uses interrupt based UART.\r\n"
		"      Application does below jobs.\r\n"
		"         - Echo received characters.\r\n"
		"         - Processes received command.\r\n\r\n"
		"Type HEL to see supported commands.\r\n\r\n"
		"DISCLAIMER!!! USE EDUCATIONAL PURPOSES ONLY.\r\n";

/******************************************************************************/
char const Cli_new_line_prompt[] = "\r\n==>";

/******************************************************************************/
char const Cli_delimiter = ' ';


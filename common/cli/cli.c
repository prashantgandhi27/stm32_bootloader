/*!*****************************************************************************
*  \author     Prashant Gandhi
*  \date       05/18/2024
********************************************************************************
*  \file       cli.h
*
*  \brief      APIs to process command line inputs.
*
*  \details    Identifies the command and processes the logic accordingly.
*
*  \note       VERSION - 0.1.0
*******************************************************************************/
#include "cli/cli.h"
#include "cli_cfg.h"
#include "cli/command_table.h"
#include "lib/tokenize.h"

#include <stdio.h>

/*!*****************************************************************************
*  \brief          Process invalid command line inputs
*
*
*  \param[in, out] str          - String that needs to be populated.
*  \param[in]      c_str_size   - max size of the string.
*
*  \retval         None.
*******************************************************************************/
static void process_invalid_cli(char *processed_str,
				 	 	 	 	size_t const c_processes_str_size)
{
	if ((NULL == processed_str) || (c_processes_str_size == 0U))
	{
		return;
	}

	char const invalid_cmd_str[] = "Invalid command.\r\n";
	uint32_t const invalid_cmd_str_size = strlen(invalid_cmd_str);
	Cmd_table_t const* table = Cmd_table;
	while ((table->cmd != NULL) && (table->fun_ptr != NULL))
	{
		if (strcmp("HEL", table->cmd) == 0U)
		{
			strcpy(processed_str, invalid_cmd_str);
			table->fun_ptr(processed_str + invalid_cmd_str_size,
					       c_processes_str_size - invalid_cmd_str_size);
			break;
		}

		++table;
	}

	return;
}

/*****************************************************************************/
void process_cli(char *cmd_line_str,
				 char *processed_str,
				 size_t const c_processes_str_size)
{
	if ((NULL == cmd_line_str) ||
		(NULL == processed_str) ||
		(c_processes_str_size == 0U))
	{
		return;
	}

	char *argv[CLI_MAX_TOKENS];
	Cmd_table_t const* table = Cmd_table;
	uint16_t argc = tokenize(cmd_line_str, argv, CLI_MAX_TOKENS, Cli_delimiter);
	uint16_t current_argc = 0U;

	memset(processed_str, '\0', c_processes_str_size);

	*processed_str = '\r';
	++processed_str;
	*processed_str = '\n';
	++processed_str;

	if (argc > 0U)
	{
		while ((table->cmd != NULL) &&
			   (table->fun_ptr != NULL) &&
			   (current_argc < argc))
		{
			if (strcmp(argv[current_argc], table->cmd) == 0)
			{
				table->fun_ptr(processed_str, c_processes_str_size - 2U);
				break;
			}

			++table;
			++current_argc;
		}
	}

	if ((0U == argc) || (table->cmd == NULL) || (table->fun_ptr == NULL))
	{
		process_invalid_cli(processed_str, c_processes_str_size - 2U);
	}

	memset(cmd_line_str, '\0', strlen(cmd_line_str));

	return;
}

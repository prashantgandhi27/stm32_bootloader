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

#ifndef COMMON_CLI_CLI_H
#define COMMON_CLI_CLI_H

#include <string.h>

#ifdef __cplusplus
extern "C"
{
#endif

/*!*****************************************************************************
*  \brief          Identifies the input command and process the logic
*                  accordingly.
*
*  \param[in, out] cmd_line_str  -        Command line string that needs to be
*                                         processed.
*  \param[in, out] processed_str -        String that needs to be populated with
*                                         expected output string.
*  \param[in, out] c_processes_str_size - Size of the string that needs to be
*                                         populated with expected output string
*
*  \retval         None.
*******************************************************************************/
void process_cli(char *cmd_line_str,
		 	 	 char *processed_str,
				 size_t const c_processes_str_size);

#ifdef __cplusplus
}
#endif

#endif /* COMMON_CLI_CLI_H */

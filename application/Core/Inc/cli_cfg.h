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
#ifndef INC_CLI_CLI_CFG_H
#define INC_CLI_CLI_CFG_H


#ifdef __cplusplus
extern "C"
{
#endif

/* Command line buffer size */
#define CLI_BUFFER_SIZE 512U

/* Command line buffer size */
#define CLI_MAX_TOKENS 5U

/* Command line receive buffer */
extern char Cli_receive_buffer[CLI_BUFFER_SIZE];
extern char Cli_transmit_buffer[CLI_BUFFER_SIZE];

/* Command line prompts */
extern char const Cli_start_up_prompt[];
extern char const Cli_new_line_prompt[];
extern char const Cli_delimiter;

#ifdef __cplusplus
}
#endif

#endif /* INC_CLI_CLI_CFG_H */

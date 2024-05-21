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

#ifndef COMMON_CMD_CMD_HELP_H
#define COMMON_CMD_CMD_HELP_H

#include <string.h>

#ifdef __cplusplus
extern "C"
{
#endif

/*!*****************************************************************************
*  \brief          Help command processing.
*
*  \param[in, out] str          - String that needs to be populated.
*  \param[in]      c_str_size   - max size of the string.
*
*  \retval         None.
******************************************************************************/
void cmd_help(char *str, size_t const c_str_size);

#ifdef __cplusplus
}
#endif

#endif /* COMMON_CMD_CMD_HELP_H */

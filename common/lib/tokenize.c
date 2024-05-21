/*!*****************************************************************************
*  \author     Prashant Gandhi
*  \date       05/17/2024
********************************************************************************
*  \file       tokenize.h
*
*  \brief      This file declares tokenize API.
*
*  \details    Tokenize the input string based on the provided delimiter and
*              populates the provided char pointer array.
*
*  \note       VERSION - 0.1.0
*
*******************************************************************************/
#include "cli/ascii_commands.h"
#include "lib/tokenize.h"

#include <string.h>

/*****************************************************************************/
uint16_t tokenize(char *str,
                  char *argv[],
                  uint16_t const c_max_tokens,
                  char const c_delimiter)
{
   uint16_t argc = 0U;
   if ((NULL == str) && (NULL == argv))
   {
	   return argc;
   }

   argv[argc] = str;
   char *str_end_address = str + strlen(str);

   while((argc < c_max_tokens) && (str < str_end_address)) {
	   while((*str != c_delimiter) && (*str != CHAR_NULL)) {
		   ++str;
	   }

	   if (CHAR_NULL == *str) {
		   break;
	   }

	   if (c_delimiter == *str) {
		   *str = CHAR_NULL;
		   ++str;
		   ++argc;
		   argv[argc] = str;
	   }

	   if (('\r' == *str) || ('\n' == *str))
	   {
		   *str = CHAR_NULL;
		   ++str;
	   }
   }

   return argc + 1U;
}

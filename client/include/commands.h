#ifndef _CLIENT_COMMANDS_H_
#define _CLIENT_COMMANDS_H_

/*! \file commands.h
 *
 *  Author:  Javier Montenegro (https://javiermontenegro.github.io/)
 *  Details: header file for methods definition.
 */

#include "common.h"

int handle_user_command();
void parse_error_code();
void parse_control_message(char* cmd_buffer);

#endif /* _CLIENT_COMMANDS_H_ */
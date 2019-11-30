#ifndef _GROUP_CLIENT_H_
#define _GROUP_CLIENT_H_

/*! \file group.h
 *
 *  Author:  Javier Montenegro (https://javiermontenegro.github.io/)
 *  Details: header file for methods definition.
 */

#include "common.h"

typedef struct {
    
    char username[USERNAME_LENG+1];
    UT_hash_handle hh;

} Member;

/*Handle Server Control Messages*/
void parse_grouplist();
void parse_userlist();
void parse_namechange();
void group_invited();
void group_kicked();
void group_banned();
void user_left_group();
void user_joined_group();
int parse_filelist();

/*Handle Client-side Operations*/
int leaving_group();

#endif /* _GROUP_CLIENT_H_ */
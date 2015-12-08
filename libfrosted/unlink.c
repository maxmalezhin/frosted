/*
 * Frosted version of unlink.
 */

#include "frosted_api.h"
#include "syscall_table.h"
#include <errno.h>
#undef errno
extern int errno;
extern int sys_unlink(char *name);

int unlink (char * name)
{
    return sys_unlink(name);
}

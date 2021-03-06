/* Public domain. */

#ifndef WAIT_H
#define WAIT_H

int wait_pid();
int wait_nohang();
int wait_stop();
int wait_stopnohang();

#define wait_crashed(w) ((w)&127)
#define wait_exitcode(w) ((w) >> 8)
#define wait_stopsig(w) ((w) >> 8)
#define wait_stopped(w) (((w)&127) == 127)

#endif

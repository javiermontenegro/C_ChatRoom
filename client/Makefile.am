## Makefile.am -- Process this file with automake to produce Makefile.in

CFLAGS +=-Wall -Wextra -pthread
CPPFLAGS += -I include/ 
## LDFLAGS = -lsqlite3
LIBS = -lreadline
## nobase_include_HEADERS = Headers/console_comm.h Headers/c_typedef.h Headers/fmsHeader.h

bin_PROGRAMS = client
client_SOURCES = src/main.c src/commands.c src/common.c src/crc32.c \
src/file_transfer_client.c src/group.c src/sendrecv.c src/client.c

dist_pkgdata_DATA = bootstrap.sh configure.ac Makefile.am

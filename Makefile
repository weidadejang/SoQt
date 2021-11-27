
TARGET=XS_C++
CFLAGS:=-g -O0 -W -Wall -Iinclude -std=c99 -D_GNU_SOURCE -DDAEMON
#CFLAGS:=-g -O0 -W -Wall -Iinclude -std=c99 -D_GNU_SOURCE
#LDFLAGS:=-Wl,-wrap,free
LDFLAGS:=-W
#LIBS:= -lpthread -lm -L/usr/local/sqlite3/lib -lsqlite3
#LIBS:= -lpthread -lm -L/usr/local/sqlite/lib -lsqlite3
#LIBS:= -lpthread -lm -L/usr/local/sqliteARM/lib -lsqlite3
#CC:=arm-arago-linux-gnueabi-gcc
#CC:=g++
CC:=$(shell which g++)

#DBSRC=$(shell ls db/*.c)
#UTILSRC=$(shell ls utils/*.c)
MAINSRC=main.c

#SOURCES=${DBSRC} ${UTILSRC} ${MAINSRC}
SOURCES=${MAINSRC}
OBJS=${SOURCES:.c=.o}

${TARGET}: ${OBJS}
	${CC} -o $@ ${OBJS} ${LIBS} ${LDFLAGS}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

.PHONY:clean

clean:
	@rm -rf ${OBJS} ${TARGET}

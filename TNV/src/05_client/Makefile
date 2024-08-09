PROJ   = ../../bin/client
LPRJ   = ../../lib/libclient.a
OBJS   = $(patsubst %.cpp, %.o, $(wildcard ../01_common/*.cpp *.cpp))
LOBJ   = $(filter-out %main.o, $(OBJS))
CC     = g++
LINK   = g++
AR     = ar rv
RM     = rm -rf
CFLAGS = -c -Wall \
         -I/usr/local/include/acl-lib/acl -I/usr/local/include/acl-lib/acl_cpp \
         -I../01_common
LIBS   = -pthread -lacl_all

all: $(PROJ) $(LPRJ)

$(PROJ): $(OBJS)
	$(LINK) $^ $(LIBS) -o $@

$(LPRJ): $(LOBJ)
	$(AR) $@ $^

.cpp.o:
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(PROJ) $(LPRJ) $(OBJS)

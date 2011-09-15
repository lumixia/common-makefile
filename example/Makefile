include ../mak/make.settings


OBJDIR = $(TOPDIR)/obj/exampleobjs
INCLUDEDIR = -I../include 

OBJS = \
	main.o \
	foo.o \

APP = $(BINDIR)/example1

all: dirs $(APP)

dirs:
	if [ -d $(OBJDIR) ] ; then true; else mkdir -p $(OBJDIR) ; fi; \

$(APP): $(OBJS)
	$(CC) $(EXELINK) -L$(BINDIR) -l$(LIBNAME) -o $@ $(OBJDIR)/*
	
$(OBJS): %.o:%.cpp
	$(CC) $(EXECOMPILE) $(INCLUDEDIR) $< -o $(OBJDIR)/$@

clean:
	-rm -rf $(OBJDIR)/*
	-rm $(APP)


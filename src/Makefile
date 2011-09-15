include ../mak/make.settings

OBJDIR = $(TOPDIR)/obj/dllobjs
INCLUDEDIR = -I../include 

OBJS = \
	stringhelper.o \
	matrixhelper.o \

DLL = $(BINDIR)/lib$(LIBNAME)$(LIBSUFFIX)
all: dirs $(DLL) 

dirs:
	if [ -d $(OBJDIR) ] ; then true; else mkdir -p $(OBJDIR) ; fi; \

$(DLL): $(OBJS)
	$(CC) $(LIBLINK) -o $@ $(OBJDIR)/*
	
$(OBJS): %.o:%.cpp
	$(CC) $(LIBCOMPILE) $(INCLUDEDIR) $< -o $(OBJDIR)/$@

clean:
	-rm -rf $(OBJDIR)/*
	-rm $(DLL)


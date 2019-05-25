CC := g++

SRCDIR := src
BUILDDIR := build
TARGET := bin/main
TARGETDIR := bin
 
SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS := -std=c++11 -Wall -pedantic
INC := -I include

$(TARGET): $(OBJECTS)
	@mkdir -p $(TARGETDIR)
	@echo " Linking..."
	@echo " $(CC) $^ -o $(TARGET) "; $(CC) $^ -o $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	@echo " $(CC) $(CFLAGS) $(INC) -c -o $@ $<"; $(CC) $(CFLAGS) $(INC) -c -o $@ $<

clean:
	@echo " Cleaning..."; 
	@echo " $(RM) -r $(BUILDDIR) $(TARGET) $(TARGETDIR)"; $(RM) -r $(BUILDDIR) $(TARGET) $(TARGETDIR)
	
tester: 
	$(CC) $(CFLAGS) $(INC) -c -o build/OwnerTest.o test/OwnerTest.cpp
	$(CC) build/Owner.o build/OwnerTest.o -o bin/tester


.PHONY: clean

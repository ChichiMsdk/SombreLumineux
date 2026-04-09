TARGET    := my_game
SOURCES   := source
INCLUDES  :=

#---------------------------------------------------------------------------------
# options for code generation
#---------------------------------------------------------------------------------
ARCH := -mthumb -mthumb-interwork

CFLAGS  := -g -Wall -O2 $(ARCH) $(INCLUDE) -DGBA
CFLAGS  += $(INCLUDE)
LDFLAGS := -g $(ARCH) -Wl,-Map,$(TARGET).map

#---------------------------------------------------------------------------------
# any extra libraries we wish to link with the project
#---------------------------------------------------------------------------------
LIBS := -lgba

#---------------------------------------------------------------------------------
# list of directories containing libraries
#---------------------------------------------------------------------------------
LIBDIRS := $(LIBGBA)

include $(DEVKITARM)/gba_rules

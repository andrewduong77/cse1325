#Makefile is an adaptation of Manzillo's example on stackoverflow.com, URL: http://stackoverflow.com/questions/231229/how-to-generate-a-makefile-with-source-in-sub-directories-using-just-one-makefil

CC		  := g++ -std=c++11 -g
LD		  := -L/usr/local/lib -lfltk -lfltk_images -lXext -lX11 -lm

MODULES   := store robot store_associates
SRC_DIR   := $(addprefix src/,$(MODULES))
BUILD_DIR := $(addprefix build/,$(MODULES))

SRC 	  := $(foreach sdir,$(SRC_DIR),$(wildcard $(sdir)/*.cpp))
OBJ		  := $(patsubst src/%.cpp,build/%.o,$(SRC))
INCLUDES  := $(addprefix -I,$(SRC_DIR))

vpath %.cpp $(SRC_DIR)

define make-goal
$1/%.o: %.cpp
	$(CC) $(INCLUDES) -c $$< -o $$@
endef

.PHONY: all checkdirs clean

all: checkdirs build/demo

build/demo: $(OBJ)
	$(CC) $(fltk-config --cxxflags) $^ -o $@ $(LD)

checkdirs: $(BUILD_DIR)

$(BUILD_DIR):
	@mkdir -p $@

clean:
	@rm -rf $(BUILD_DIR)

$(foreach bdir,$(BUILD_DIR),$(eval $(call make-goal,$(bdir))))


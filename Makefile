define CODE
#include "interpolation.h"
int main(){return 0;}
endef

MAINFILE = main.c
DEPENDENCIES = interpolation.c
OUTPUT = test

export CODE
all: main.c compile clean

main.c:
	@echo "$$CODE" > $(MAINFILE)

compile:
	@gcc $(MAINFILE) $(DEPENDENCIES) -o $(OUTPUT)

clean:
	@rm -f $(OUTPUT)

unexport CODE

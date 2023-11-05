#@Copyright: Mina Osama
cc := avr
f1 := ar  
f2 := -gcc
un := $(shell whoami)
all: libMDIO.a

libMDIO.a: MDIO_Prg.o 
ifeq ($(un),mina)
	$(f1) rcs $@ $^
	@echo "---------------------------------"	
	@echo "Successed!! Static library created"
else
	@echo "Unauthorized user"
endif
	

MDIO_Prg.o: MDIO_Prg.c
ifeq ($(un),mina)
	$(cc)$(f2) -c $^ -I Inc/ -I . -o $@
	@echo "---------------------------------"
else
	@echo "Unauthorized user"
endif


clean: 
ifeq ($(un),mina)
	rm *.o *.a
else
	@echo "Unauthorized user"
endif
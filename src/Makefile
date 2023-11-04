#@Copyright: Mina Osama
include  src_cfg.mk
#-include ../lib/libMDIO.a

all: snake_effect.elf

snake_effect.elf: main.c  $(../lib/libMDIO.a )
ifeq ($(un),mina)
	avr-gcc $(mcu)  $^ $@
	@echo "---------------------------------"	
	@echo "Successed!! elf file created"
else
	@echo "Unauthorized user"
endif
	

transfer:
ifeq ($(un),mina)
	mv *.elf *.hex build
else
	@echo "Unauthorized user"
endif

clean: 
ifeq ($(un),mina)
	rm *.o *.a
else
	@echo "Unauthorized user"
endif
  
  #$(mcu)  mcu:= -mmcu=atmega32
  #!<arch>
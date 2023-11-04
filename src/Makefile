#@Copyright: Mina Osama
include  src_cfg.mk


all: snake_effect.elf

snake_effect.elf: main.c $(lib_path)
ifeq ($(un),mina)
	$(cc) $(mcu)  $^ -lm  -o $@
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
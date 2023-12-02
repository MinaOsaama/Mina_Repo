#@Copyright: Mina Osama
include  src_cfg.mk

all: snake_effect.elf

snake_effect.elf: main.c 
ifeq ($(un),mina)
	(cd $(path);make clean;make all;cd -)
	$(cc)$(f) $(mcu)  $^ $(lib_path) -lm  -o $@
	@echo "---------------------------------"	
	@echo "Successed!! elf file created"
	@echo "---------------------------------"	
	$(elf_to_hex) $@ $(hex)
	@echo "Successed!! hex file created"
	@echo "---------------------------------"
	mv $@ $(hex)  $(build_dir)
	@echo "Successed!! moved to build"
	@echo "---------------------------------"
	@echo  "Binary data for snake_effect.elf" > $(bin)
	$(elf_size) >> $(bin)
	@echo "---------------------------------"
	@echo  "Binary data for snake_effect.hex" >> $(bin)
	$(hex_size) >> $(bin)
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
	rm -rf *.o *.a ./build/*.elf ./build/*.hex ./build/*.exe ./build/*.txt *.elf *.hex *.exe 
else
	@echo "Unauthorized user"
endif

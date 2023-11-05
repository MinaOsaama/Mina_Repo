cc := avr
f := -gcc
un := $(shell whoami)
mcu:= -mmcu=atmega32
lib_path := ../lib/libMDIO.a 
elf_to_hex := avr-objcopy -O ihex
hex := snake_effect.hex
build_dir := ./build
bin := build/binaryReport.txt
elf_size := avr-size -t build/snake_effect.elf
hex_size := avr-size -t build/snake_effect.hex
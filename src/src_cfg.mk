cc := avr-gcc
un := $(shell whoami)
mcu:= -mmcu=atmega32
lib_path := ../lib/libMDIO.a 
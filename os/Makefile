ASM=nasm
BUILD_DIR=build
BOOT_FILE=bootstrap
OS=os

.PHONY: all assemble build boot clean

all: assemble build boot

help:
	@echo "Makefile for Building pogchess Operating System."
	@echo "Usage: make [ assemble | test | build | boot | clean ] " 
	@echo ""
	@echo

assemble: 
	nasm $(BOOT_FILE).asm -f bin -o $(BUILD_DIR)/$(BOOT_FILE).bin

test:
	nasm bootloader.asm -f bin -o $(BUILD_DIR)/$(BOOT_FILE).bin

build:
	cp $(BUILD_DIR)/$(BOOT_FILE).bin $(BUILD_DIR)/$(OS).img
	truncate -s 1440k $(BUILD_DIR)/$(OS).img

boot:
	qemu-system-x86_64 -fda $(BUILD_DIR)/$(OS).img

clean:
	rm -rf *.bin
	rm -rf *.img
	rm -rf *.iso
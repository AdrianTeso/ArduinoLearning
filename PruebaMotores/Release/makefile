################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -f

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include arduino/core/subdir.mk
-include Libraries/Servo/src/sam/subdir.mk
-include Libraries/Servo/src/avr/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
AR += \
arduino.ar \

ELF += \
PruebaMotores.elf \

EEP += \
PruebaMotores.eep \

FLASH_IMAGE += \
PruebaMotores.hex \


# All Target
all: PruebaMotores

# Tool invocations
PruebaMotores: $(FLASH_IMAGE)
	@echo 'Building target: $@'
	@echo 'Printing size:'
	"C:\Program Files (x86)\Arduino\hardware\tools\avr/bin/avr-size" -A "D:/Repositorios/ArduinoLearning/PruebaMotores/Release/PruebaMotores.elf"
	@echo 'Finished building target: $@'
	@echo ' '

arduino.ar: $(AR_OBJ)
	@echo 'Starting archiver'
	"C:\Program Files (x86)\Arduino\hardware\tools\avr/bin/avr-ar" rcs  "D:/Repositorios/ArduinoLearning/PruebaMotores/Release/arduino.ar"   $(AR_OBJ)
	@echo 'Finished building: $@'
	@echo ' '

PruebaMotores.elf: $(LINK_OBJ) $(AR)
	@echo 'Starting combiner'
	"C:\Program Files (x86)\Arduino\hardware\tools\avr/bin/avr-gcc" -Os -Wl,--gc-sections,--relax -mmcu=atmega2560  -o "D:/Repositorios/ArduinoLearning/PruebaMotores/Release/PruebaMotores.elf"   $(LINK_OBJ) $(AR)  "D:/Repositorios/ArduinoLearning/PruebaMotores/Release/arduino.ar" "-LD:/Repositorios/ArduinoLearning/PruebaMotores/Release" -lm
	@echo 'Finished building: $@'
	@echo ' '

PruebaMotores.eep: $(ELF)
	@echo 'Create eeprom image'
	"C:\Program Files (x86)\Arduino\hardware\tools\avr/bin/avr-objcopy" -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0  "D:/Repositorios/ArduinoLearning/PruebaMotores/Release/PruebaMotores.elf" "D:/Repositorios/ArduinoLearning/PruebaMotores/Release/PruebaMotores.eep"
	@echo 'Finished building: $@'
	@echo ' '

PruebaMotores.hex: $(EEP)
	@echo 'Create Flash image (ihex format)'
	"C:\Program Files (x86)\Arduino\hardware\tools\avr/bin/avr-objcopy" -O ihex -R .eeprom  "D:/Repositorios/ArduinoLearning/PruebaMotores/Release/PruebaMotores.elf" "D:/Repositorios/ArduinoLearning/PruebaMotores/Release/PruebaMotores.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C_UPPER_DEPS)$(C_DEPS)$(AR)$(EEP)$(FLASH_IMAGE)$(CC_DEPS)$(AR_OBJ)$(C++_DEPS)$(LINK_OBJ)$(CXX_DEPS)$(ASM_DEPS)$(INO_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(ELF)$(CPP_DEPS) PruebaMotores
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

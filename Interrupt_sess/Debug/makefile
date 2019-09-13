################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Interrupt_sess.lss \

FLASH_IMAGE += \
Interrupt_sess.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Interrupt_sess.elf secondary-outputs

# Tool invocations
Interrupt_sess.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Interrupt_sess.map -mmcu=atmega32 -o "Interrupt_sess.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Interrupt_sess.lss: Interrupt_sess.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Interrupt_sess.elf  >"Interrupt_sess.lss"
	@echo 'Finished building: $@'
	@echo ' '

Interrupt_sess.hex: Interrupt_sess.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Interrupt_sess.elf  "Interrupt_sess.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Interrupt_sess.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Interrupt_sess.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Interrupt_sess.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/button1.c \
../Core/Src/button2.c \
../Core/Src/button3.c \
../Core/Src/button4.c \
../Core/Src/display_7LED.c \
../Core/Src/display_led.c \
../Core/Src/fsm_automatic.c \
../Core/Src/fsm_manual.c \
../Core/Src/fsm_mode1.c \
../Core/Src/fsm_mode2.c \
../Core/Src/fsm_mode3.c \
../Core/Src/fsm_mode4.c \
../Core/Src/global.c \
../Core/Src/main.c \
../Core/Src/software_timer.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c \
../Core/Src/toggle_led.c 

OBJS += \
./Core/Src/button1.o \
./Core/Src/button2.o \
./Core/Src/button3.o \
./Core/Src/button4.o \
./Core/Src/display_7LED.o \
./Core/Src/display_led.o \
./Core/Src/fsm_automatic.o \
./Core/Src/fsm_manual.o \
./Core/Src/fsm_mode1.o \
./Core/Src/fsm_mode2.o \
./Core/Src/fsm_mode3.o \
./Core/Src/fsm_mode4.o \
./Core/Src/global.o \
./Core/Src/main.o \
./Core/Src/software_timer.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o \
./Core/Src/toggle_led.o 

C_DEPS += \
./Core/Src/button1.d \
./Core/Src/button2.d \
./Core/Src/button3.d \
./Core/Src/button4.d \
./Core/Src/display_7LED.d \
./Core/Src/display_led.d \
./Core/Src/fsm_automatic.d \
./Core/Src/fsm_manual.d \
./Core/Src/fsm_mode1.d \
./Core/Src/fsm_mode2.d \
./Core/Src/fsm_mode3.d \
./Core/Src/fsm_mode4.d \
./Core/Src/global.d \
./Core/Src/main.d \
./Core/Src/software_timer.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d \
./Core/Src/toggle_led.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"


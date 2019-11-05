################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../cache1D.c \
../cache2Dclash.c \
../cache2Dcols.c \
../cache2Drows.c 

OBJS += \
./cache1D.o \
./cache2Dclash.o \
./cache2Dcols.o \
./cache2Drows.o 

C_DEPS += \
./cache1D.d \
./cache2Dclash.d \
./cache2Dcols.d \
./cache2Drows.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



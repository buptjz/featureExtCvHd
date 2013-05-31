################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Candy.cpp \
../src/ColorHistogram.cpp \
../src/ConvexPointCollect.cpp \
../src/HoughLine.cpp \
../src/TextureCollect.cpp \
../src/main.cpp 

OBJS += \
./src/Candy.o \
./src/ColorHistogram.o \
./src/ConvexPointCollect.o \
./src/HoughLine.o \
./src/TextureCollect.o \
./src/main.o 

CPP_DEPS += \
./src/Candy.d \
./src/ColorHistogram.d \
./src/ConvexPointCollect.d \
./src/HoughLine.d \
./src/TextureCollect.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include/opencv -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



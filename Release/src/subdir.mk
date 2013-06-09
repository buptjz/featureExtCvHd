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
../src/avgCal.cpp \
../src/main.cpp \
../src/matOperate.cpp \
../src/rgb2HSV.cpp 

OBJS += \
./src/Candy.o \
./src/ColorHistogram.o \
./src/ConvexPointCollect.o \
./src/HoughLine.o \
./src/TextureCollect.o \
./src/avgCal.o \
./src/main.o \
./src/matOperate.o \
./src/rgb2HSV.o 

CPP_DEPS += \
./src/Candy.d \
./src/ColorHistogram.d \
./src/ConvexPointCollect.d \
./src/HoughLine.d \
./src/TextureCollect.d \
./src/avgCal.d \
./src/main.d \
./src/matOperate.d \
./src/rgb2HSV.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



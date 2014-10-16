################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../QueriesSheet/QueriesSheet.cpp \
../QueriesSheet/moc_QueriesSheet.cpp 

OBJS += \
./QueriesSheet/QueriesSheet.o \
./QueriesSheet/moc_QueriesSheet.o 

CPP_DEPS += \
./QueriesSheet/QueriesSheet.d \
./QueriesSheet/moc_QueriesSheet.d 


# Each subdirectory must supply rules for building sources it contributes
QueriesSheet/%.o: ../QueriesSheet/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/martin/papilio_progs/MothDB/src/QtGUI -I/home/martin/papilio_progs/MothDB/src/Records -I/usr/local/qt/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../QtGUI/QueriesSheet/QueriesSheet.cpp \
../QtGUI/QueriesSheet/moc_QueriesSheet.cpp 

OBJS += \
./QtGUI/QueriesSheet/QueriesSheet.o \
./QtGUI/QueriesSheet/moc_QueriesSheet.o 

CPP_DEPS += \
./QtGUI/QueriesSheet/QueriesSheet.d \
./QtGUI/QueriesSheet/moc_QueriesSheet.d 


# Each subdirectory must supply rules for building sources it contributes
QtGUI/QueriesSheet/%.o: ../QtGUI/QueriesSheet/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/martin/papilio_progs/MothDB/src/QtGUI -I/home/martin/papilio_progs/MothDB/src/Records -I/usr/local/qt/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



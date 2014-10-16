################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../QtGUI/CommonActions/CommonActions.cpp \
../QtGUI/CommonActions/moc_CommonActions.cpp 

OBJS += \
./QtGUI/CommonActions/CommonActions.o \
./QtGUI/CommonActions/moc_CommonActions.o 

CPP_DEPS += \
./QtGUI/CommonActions/CommonActions.d \
./QtGUI/CommonActions/moc_CommonActions.d 


# Each subdirectory must supply rules for building sources it contributes
QtGUI/CommonActions/%.o: ../QtGUI/CommonActions/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/martin/papilio_progs/MothDB/src/QtGUI -I/home/martin/papilio_progs/MothDB/src/Records -I/usr/local/qt/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



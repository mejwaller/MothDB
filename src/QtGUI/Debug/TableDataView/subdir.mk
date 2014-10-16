################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TableDataView/TableDataWidget.cpp \
../TableDataView/moc_TableDataWidget.cpp 

OBJS += \
./TableDataView/TableDataWidget.o \
./TableDataView/moc_TableDataWidget.o 

CPP_DEPS += \
./TableDataView/TableDataWidget.d \
./TableDataView/moc_TableDataWidget.d 


# Each subdirectory must supply rules for building sources it contributes
TableDataView/%.o: ../TableDataView/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/martin/papilio_progs/MothDB/src/QtGUI -I/home/martin/papilio_progs/MothDB/src/Records -I/usr/local/qt/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



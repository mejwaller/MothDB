################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../QtGUI/MainWin.cpp \
../QtGUI/TableListModel.cpp \
../QtGUI/moc_MainWin.cpp 

OBJS += \
./QtGUI/MainWin.o \
./QtGUI/TableListModel.o \
./QtGUI/moc_MainWin.o 

CPP_DEPS += \
./QtGUI/MainWin.d \
./QtGUI/TableListModel.d \
./QtGUI/moc_MainWin.d 


# Each subdirectory must supply rules for building sources it contributes
QtGUI/%.o: ../QtGUI/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/martin/papilio_progs/MothDB/src/QtGUI -I/home/martin/papilio_progs/MothDB/src/Records -I/usr/local/qt/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



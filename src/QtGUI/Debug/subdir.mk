################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../MainWin.cpp \
../TableListModel.cpp \
../moc_MainWin.cpp 

OBJS += \
./MainWin.o \
./TableListModel.o \
./moc_MainWin.o 

CPP_DEPS += \
./MainWin.d \
./TableListModel.d \
./moc_MainWin.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/martin/papilio_progs/MothDB/src/QtGUI -I/home/martin/papilio_progs/MothDB/src/Records -I/usr/local/qt/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



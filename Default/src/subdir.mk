################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/main.cpp 

OBJS += \
./src/main.o 

CPP_DEPS += \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/martin/mygit/MothDB/src -I/home/martin/mygit/MothDB/src/QtGUI/CommonActions -I/home/martin/mygit/MothDB/src/QtGUI/Dialogs -I/home/martin/mygit/MothDB/src/QtGUI/QueriesSheet -I/home/martin/mygit/MothDB/src/QtGUI/QueryRunner -I/home/martin/mygit/MothDB/src/QtGUI/TableDataView -I/home/martin/mygit/MothDB/src/QtGUI/TablesView -I/home/martin/mygit/MothDB/src/QtGUI/TreeViewItems -I/home/martin/mygit/MothDB/src/QtGUI -I/home/martin/mygit/MothDB/src/Records -I/usr/local/qt/include -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



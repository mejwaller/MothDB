################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Dialogs/ConnectDlg.cpp \
../Dialogs/DeleteRecEventDlg.cpp \
../Dialogs/DeleteRecordDlg.cpp \
../Dialogs/NewRecEventDlg.cpp \
../Dialogs/NewRecordDlg.cpp \
../Dialogs/RecEventNotesDlg.cpp \
../Dialogs/moc_ConnectDlg.cpp \
../Dialogs/moc_DeleteRecEventDlg.cpp \
../Dialogs/moc_DeleteRecordDlg.cpp \
../Dialogs/moc_NewRecEventDlg.cpp \
../Dialogs/moc_NewRecordDlg.cpp \
../Dialogs/moc_RecEventNotesDlg.cpp 

OBJS += \
./Dialogs/ConnectDlg.o \
./Dialogs/DeleteRecEventDlg.o \
./Dialogs/DeleteRecordDlg.o \
./Dialogs/NewRecEventDlg.o \
./Dialogs/NewRecordDlg.o \
./Dialogs/RecEventNotesDlg.o \
./Dialogs/moc_ConnectDlg.o \
./Dialogs/moc_DeleteRecEventDlg.o \
./Dialogs/moc_DeleteRecordDlg.o \
./Dialogs/moc_NewRecEventDlg.o \
./Dialogs/moc_NewRecordDlg.o \
./Dialogs/moc_RecEventNotesDlg.o 

CPP_DEPS += \
./Dialogs/ConnectDlg.d \
./Dialogs/DeleteRecEventDlg.d \
./Dialogs/DeleteRecordDlg.d \
./Dialogs/NewRecEventDlg.d \
./Dialogs/NewRecordDlg.d \
./Dialogs/RecEventNotesDlg.d \
./Dialogs/moc_ConnectDlg.d \
./Dialogs/moc_DeleteRecEventDlg.d \
./Dialogs/moc_DeleteRecordDlg.d \
./Dialogs/moc_NewRecEventDlg.d \
./Dialogs/moc_NewRecordDlg.d \
./Dialogs/moc_RecEventNotesDlg.d 


# Each subdirectory must supply rules for building sources it contributes
Dialogs/%.o: ../Dialogs/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/martin/papilio_progs/MothDB/src/QtGUI -I/home/martin/papilio_progs/MothDB/src/Records -I/usr/local/qt/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



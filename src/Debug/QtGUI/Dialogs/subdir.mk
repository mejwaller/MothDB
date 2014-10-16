################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../QtGUI/Dialogs/ConnectDlg.cpp \
../QtGUI/Dialogs/DeleteRecEventDlg.cpp \
../QtGUI/Dialogs/DeleteRecordDlg.cpp \
../QtGUI/Dialogs/NewRecEventDlg.cpp \
../QtGUI/Dialogs/NewRecordDlg.cpp \
../QtGUI/Dialogs/RecEventNotesDlg.cpp \
../QtGUI/Dialogs/moc_ConnectDlg.cpp \
../QtGUI/Dialogs/moc_DeleteRecEventDlg.cpp \
../QtGUI/Dialogs/moc_DeleteRecordDlg.cpp \
../QtGUI/Dialogs/moc_NewRecEventDlg.cpp \
../QtGUI/Dialogs/moc_NewRecordDlg.cpp \
../QtGUI/Dialogs/moc_RecEventNotesDlg.cpp 

OBJS += \
./QtGUI/Dialogs/ConnectDlg.o \
./QtGUI/Dialogs/DeleteRecEventDlg.o \
./QtGUI/Dialogs/DeleteRecordDlg.o \
./QtGUI/Dialogs/NewRecEventDlg.o \
./QtGUI/Dialogs/NewRecordDlg.o \
./QtGUI/Dialogs/RecEventNotesDlg.o \
./QtGUI/Dialogs/moc_ConnectDlg.o \
./QtGUI/Dialogs/moc_DeleteRecEventDlg.o \
./QtGUI/Dialogs/moc_DeleteRecordDlg.o \
./QtGUI/Dialogs/moc_NewRecEventDlg.o \
./QtGUI/Dialogs/moc_NewRecordDlg.o \
./QtGUI/Dialogs/moc_RecEventNotesDlg.o 

CPP_DEPS += \
./QtGUI/Dialogs/ConnectDlg.d \
./QtGUI/Dialogs/DeleteRecEventDlg.d \
./QtGUI/Dialogs/DeleteRecordDlg.d \
./QtGUI/Dialogs/NewRecEventDlg.d \
./QtGUI/Dialogs/NewRecordDlg.d \
./QtGUI/Dialogs/RecEventNotesDlg.d \
./QtGUI/Dialogs/moc_ConnectDlg.d \
./QtGUI/Dialogs/moc_DeleteRecEventDlg.d \
./QtGUI/Dialogs/moc_DeleteRecordDlg.d \
./QtGUI/Dialogs/moc_NewRecEventDlg.d \
./QtGUI/Dialogs/moc_NewRecordDlg.d \
./QtGUI/Dialogs/moc_RecEventNotesDlg.d 


# Each subdirectory must supply rules for building sources it contributes
QtGUI/Dialogs/%.o: ../QtGUI/Dialogs/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/martin/papilio_progs/MothDB/src/QtGUI -I/home/martin/papilio_progs/MothDB/src/Records -I/usr/local/qt/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



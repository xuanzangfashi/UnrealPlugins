// Fill out your copyright notice in the Description page of Project Settings.

#include "COMDLLAPIFunctionLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "atlbase.h"


int UCOMDLLAPIFunctionLibrary::_Index = 0;
#pragma optimize("", off)
int UCOMDLLAPIFunctionLibrary::InitHardware(FString COMName, int BaudRate, int bytesSize)
{
	char* tmpName = TCHAR_TO_ANSI(COMName.GetCharArray().GetData());
	bool re = InitMedicalHardwareAPI(tmpName, 19200l, 5);
	if (re)
	{
		_Index++;
		return _Index - 1;
	}
	return -1;

}

FString UCOMDLLAPIFunctionLibrary::GetHardwareDataByIndex(int index)
{
	//return "";
	char* tmp = new char[255];
	strcpy(tmp, GetBytesByDataIndex(index));
	printf(tmp);

	TCHAR* tmp1 = ANSI_TO_TCHAR(tmp);
	FString fwaesad = tmp1;
	if (tmp[0] == '\r')
	{
		fwaesad.RemoveAt(0, 2);
	}
	UE_LOG(LogClass, Log, TEXT("%s"), *fwaesad);
	delete[] tmp;
	return fwaesad;
}

void UCOMDLLAPIFunctionLibrary::ReleaseHardware()
{
	_Index = 0;
	ReleaseMedicalHardwareAPI();
}

void UCOMDLLAPIFunctionLibrary::GetAllHardwareData(TArray<FString>& Out)
{
	int _size = GetNumOfData();
	char** tmpData = new char*[_size];
	for (int i = 0; i < _size; i++)
	{
		tmpData[i] = new char[255];
	}
	GetAllData(tmpData);
	Out.Empty();
	for (int i = 0; i < _size; i++)
	{
		Out.Add(ANSI_TO_TCHAR(tmpData[i]));
		delete[]tmpData[i];
	}
	delete[]tmpData;
}

TArray<FString>UCOMDLLAPIFunctionLibrary::ParerDataStr(FString SRC)
{
	return SplitStringToArray(SRC, "#");
}

void UCOMDLLAPIFunctionLibrary::GetRotatorFromString(FString SRC, FRotator& Out)
{
	if (SRC.IsEmpty())
		return;
	TArray<FString>TmpParam = SplitStringToArray(SRC, ",");
	FQuat TmpQuat = FQuat(
		UKismetStringLibrary::Conv_StringToFloat(TmpParam[0]),
		UKismetStringLibrary::Conv_StringToFloat(TmpParam[1]),
		UKismetStringLibrary::Conv_StringToFloat(TmpParam[2]),
		UKismetStringLibrary::Conv_StringToFloat(TmpParam[3]));
	Out = TmpQuat.Rotator();
}

bool UCOMDLLAPIFunctionLibrary::ForceInit(FString& WrongPortName)
{
	FString portNames;
	FFileHelper::LoadFileToString(portNames, *(FPaths::GameContentDir() + "Config/portsInfo.ini"));
	TArray<FString>ports = SplitStringToArray(portNames, "#");
	for (auto i : ports)
	{
		if (i == "COM1")
			continue;
		FString COMNAME = i;
		if (i.Len() > 4)
		{
			COMNAME = "//./" + COMNAME;
		}
		if (InitHardware(COMNAME, 19200, 1) == -1)
		{
			WrongPortName = COMNAME;
			return false;
		}
	}

	return true;
}

void UCOMDLLAPIFunctionLibrary::GetAllCOMName()
{
	FString FullPath = FPaths::ConvertRelativePathToFull(FPaths::GameContentDir() + "Config/");
	FString cmdTmp = FullPath + "WriteAllCOMToLocal.exe" + " " + FullPath;
	system(TCHAR_TO_ANSI(*cmdTmp));

	//char*cmd = (TCHAR_TO_ANSI(*cmdTmp));
	//PROCESS_INFORMATION pi;
	//STARTUPINFOA si;
	//ZeroMemory(&si, sizeof(si));
	//si.cb = sizeof(si);
	//si.hStdInput = GetStdHandle(STD_INPUT_HANDLE);
	////LPSECURITY_ATTRIBUTES arg1 = new SECURITY_ATTRIBUTES();
	//
	//
	//CreateProcessA(NULL,
	//	cmd,
	//	NULL,
	//	NULL,
	//	FALSE,
	//	CREATE_NEW_CONSOLE,
	//	NULL,
	//	NULL,
	//	&si, &pi);
}



TArray<FString> UCOMDLLAPIFunctionLibrary::SplitStringToArray(FString SRC, FString Arg)
{
	TArray<FString>result;
	if (SRC.Contains(Arg, ESearchCase::CaseSensitive))
	{
		FString leftStr;
		FString rightStr;
		SRC.Split(Arg, &leftStr, &rightStr, ESearchCase::CaseSensitive);
		if (leftStr.Len() > 0)
		{
			result.Add(leftStr);
		}
		result.Append(SplitStringToArray(rightStr, Arg));
		return result;
	}
	else {
		if (SRC.Len() > 0)
		{
			result.Add(SRC);
		}
		return result;
	}
}

#pragma optimize("", on)
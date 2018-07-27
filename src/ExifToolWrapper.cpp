#include "ExifToolWrapper.h"

#define __callconvention __stdcall

extern "C" __declspec(dllexport) void __callconvention ExifToolWrapper::InitExifTool(const char * exec)
{
	if (et == NULL)
		et = new ExifTool(exec);
}

extern "C" __declspec(dllexport) void  __callconvention ExifToolWrapper::ReleaseExifTool()
{
	if (!et == NULL)
		delete et; 
}

extern "C" __declspec(dllexport) int  __callconvention ExifToolWrapper::TestDebug()
{
	return 10;
}


extern "C" __declspec(dllexport) TagInfo * __callconvention ExifToolWrapper::ImageInfo(const char * file, const char * opts, double timeout)
{
	if (!et == NULL)

		return et->ImageInfo(file, opts, timeout);

	else
		return nullptr;
}

extern "C" __declspec(dllexport)  int __callconvention ExifToolWrapper::ExtractInfo(const char * file, const char * opts)
{
	if (!et == NULL)

		return et->ExtractInfo(file, opts);

	else
		return -99999;
}

extern "C" __declspec(dllexport) TagInfo * __callconvention ExifToolWrapper::GetInfo(int cmdNum, double timeout)
{
	if (!et == NULL)
		return et->GetInfo(cmdNum, timeout);
	else
		return nullptr;
}

extern "C" __declspec(dllexport) int __callconvention ExifToolWrapper::SetNewValue(const char * tag, const char * value, int len)
{
	if (!et == NULL)
		return et->SetNewValue(tag, value, len);
	else
		return -99999;
}

extern "C" __declspec(dllexport) int __callconvention ExifToolWrapper::WriteInfo(const char * file, const char * opts, TagInfo * info)
{
	if (!et == NULL)
		return et->WriteInfo(file, opts, info);
	else
		return -99999;
}

extern "C" __declspec(dllexport) int __callconvention ExifToolWrapper::Command(const char * cmd)
{
	if (!et == NULL)
		return et->Command(cmd);
	else
		return -99999;
}

extern "C" __declspec(dllexport) int __callconvention ExifToolWrapper::Complete(double timeout)
{
	if (!et == NULL)
		return et->Complete(timeout);
	else
		return -99999;
}

extern "C" __declspec(dllexport) int __callconvention ExifToolWrapper::IsRunning()
{
	if (!et == NULL)
		return et->IsRunning();
	else
		return -99999;
}

extern "C" __declspec(dllexport) int __callconvention ExifToolWrapper::LastComplete()
{
	if (!et == NULL)
		return et->LastComplete();
	else
		return -99999;
}

extern "C" __declspec(dllexport) int __callconvention ExifToolWrapper::LastCommand()
{
	if (!et == NULL)
		return et->LastCommand();
	else
		return -99999;
}

extern "C" __declspec(dllexport) void __callconvention ExifToolWrapper::SetLastComplete(int lastComplete)
{
	if (!et == NULL)
		return et->SetLastComplete(lastComplete);
}

extern "C" __declspec(dllexport) char * __callconvention ExifToolWrapper::GetOutput()
{
	if (!et == NULL)
		return et->GetOutput();
	else
		return new char;
}

extern "C" __declspec(dllexport) int __callconvention ExifToolWrapper::GetOutputLen()
{
	if (!et == NULL)
		return et->GetOutputLen();
	else
		return -99999;
}

extern "C" __declspec(dllexport) char * __callconvention ExifToolWrapper::GetError()
{
	if (!et == NULL)
		return et->GetError();
	else
		return new char;
}

extern "C" __declspec(dllexport) int __callconvention ExifToolWrapper::GetErrorLen()
{
	if (!et == NULL)
		return et->GetErrorLen();
	else
		return -99999;
}

extern "C" __declspec(dllexport) int __callconvention ExifToolWrapper::GetSummary(const char * msg)
{
	if (!et == NULL)
		return et->GetSummary(msg);
	else
		return -99999;
}
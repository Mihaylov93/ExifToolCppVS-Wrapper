#ifndef __EXIFTOOLWRAPPER_H__
#define __EXIFTOOLWRAPPER_H__

#include "ExifTool.h"
/*#define DllExport extern "C" __declspec( dllexport )*/

class ExifToolWrapper
{
public:
	void InitExifTool(const char *);
	void ReleaseExifTool();
	TagInfo* ImageInfo(const char *file, const char *opts = NULL, double timeout = NEVER);
	int     ExtractInfo(const char *file, const char *opts = NULL);
	TagInfo *GetInfo(int cmdNum = 0, double timeout = NEVER);
	int     SetNewValue(const char *tag = NULL, const char *value = NULL, int len = -1);
	int     WriteInfo(const char *file, const char *opts = NULL, TagInfo *info = NULL);
	int     Command(const char *cmd = NULL);
	int     Complete(double timeout = NEVER);
	int     IsRunning();
	int     LastComplete();
	int     LastCommand();
	void    SetLastComplete(int lastComplete);
	char *  GetOutput();
	int     GetOutputLen();
	char *  GetError();
	int     GetErrorLen();
	int     GetSummary(const char *msg);

	int TestDebug();
private:
	ExifTool *et;
};

#endif
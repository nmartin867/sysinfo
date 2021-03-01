#include "sysinfo.h"
#include <QtGlobal>

#ifdef Q_OS_LINUX
    #include "sysinfolinuximpl.h"
#endif

SysInfo& SysInfo::instance()
{
     static SysInfoLinuxImpl singleton;
     return singleton;
}


SysInfo::SysInfo()
{

}

SysInfo::~SysInfo()
{

}

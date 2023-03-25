#include <winerr.h>

namespace WinSysError
{
    const int Success = ERROR_SUCCESS;

    enum class File : int
    {
        NotFound = ERROR_FILE_NOT_FOUND,
        AccessDenied = ERROR_ACCESS_DENIED,
        WriteError = ERROR_WRITE_FAULT,
        FileExists = ERROR_FILE_EXISTS,
        // ...
    };

    enum class Registry : int
    {
        NotFound = ERROR_FILE_NOT_FOUND,
        AccessDenied = ERROR_ACCESS_DENIED,
        KeyDeleted = ERROR_KEY_DELETED,
        KeyNotFound = ERROR_CANTOPEN,
        // ...
    };

    enum class IPC : int
    {
        ConnectionRefused = ERROR_PIPE_NOT_CONNECTED,
        ConnectionFailed = ERROR_PIPE_BUSY,
        // ...
    };

    const char *GetErrorString(int err);
}

const char *WinSysError::GetErrorString(int err)
{
    switch (err)
    {
    case SUCCESS:
        return "Success";
    case static_cast<int>(File::NotFound):
        return "File not found";
    case static_cast<int>(File::AccessDenied):
        return "Access denied";
    case static_cast<int>(File::WriteError):
        return "Write error";
    case static_cast<int>(File::FileExists):
        return "File exists";
    case static_cast<int>(IPC::ConnectionRefused):
        return "Connection refused";
    case static_cast<int>(IPC::ConnectionFailed):
        return "Connection failed";
    case static_cast<int>(Registry::NotFound):
        return "Registry key not found";
    case static_cast<int>(Registry::AccessDenied):
        return "Access denied";
    case static_cast<int>(Registry::KeyDeleted):
        return "Registry key was deleted";
    case static_cast<int>(Registry::KeyNotFound):
        return "Registry key was not found";
    // ...
    default:
        return "Unknown error";
    }
}
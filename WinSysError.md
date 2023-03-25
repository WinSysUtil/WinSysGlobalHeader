# WinSysError 헤더파일
WinSysError는 Windows 시스템에서 발생하는 다양한 에러에 대한 코드를 정의한 C++ 헤더파일입니다.   
이 헤더파일을 사용하면 에러코드를 간편하게 사용할 수 있습니다.

## 사용법
1. WinSysError.h 파일을 프로젝트의 소스코드 폴더에 추가합니다.   
2. WinSysError.h 파일을 프로젝트에서 include합니다.   

```cpp
#include "WinSysError.h"
```
3. 사용할 에러코드를 선택하여 사용합니다.
```cpp
int errorCode = static_cast<int>(WinSysError::File::NotFound);
```

4. 에러코드에 대한 문자열 정보를 얻기 위해서는 GetErrorString 함수를 사용합니다.
```cpp
const char* errorMessage = WinSysError::GetErrorString(errorCode);
```
## 에러코드 목록
- SUCCESS: 에러가 존재하지 않습니다.

### 파일 관련 에러
- NotFound: 지정된 경로가 없습니다. (에러코드: ERROR_FILE_NOT_FOUND)
- AccessDenied: 지정된 경로에 대한 액세스가 거부되었습니다. (에러코드: ERROR_ACCESS_DENIED)
- WriteError: 지정된 경로에 데이터를 쓰지 못했습니다. (에러코드: ERROR_WRITE_FAULT)
- FileExists: 파일이 이미 존재합니다. (에러코드: ERROR_FILE_EXISTS)
### 레지스트리 관련 에러
- NotFound: 지정된 레지스트리 키가 없습니다. (에러코드: ERROR_FILE_NOT_FOUND)
- AccessDenied: 지정된 레지스트리 키에 대한 액세스가 거부되었습니다. (에러코드: ERROR_ACCESS_DENIED)
- KeyDeleted: 레지스트리 키가 이미 삭제되었습니다. (에러코드: ERROR_KEY_DELETED)
- KeyNotFound: 레지스트리 키를 열지 못했습니다. (에러코드: ERROR_CANTOPEN)
### IPC 관련 에러
- ConnectionRefused: 연결이 거부되었습니다. (에러코드: ERROR_PIPE_NOT_CONNECTED)
- ConnectionFailed: 파이프가 현재 사용 중이므로 연결을 시도할 수 없습니다. (에러코드: ERROR_PIPE_BUSY)
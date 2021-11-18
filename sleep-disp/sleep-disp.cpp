#include <windows.h>

#define SET_SLEEP 2

int main() {
	bool ret;
	ret = PostMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, SET_SLEEP);
	
#if 0
	//めんどうくなった　私しか使わんしいいや
	if (ret != FALSE) {
		DWORD dwError = GetLastError();
		LPVOID buf;
	}

#endif

	return 0;
}
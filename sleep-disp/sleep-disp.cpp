#include <windows.h>

int main() {
	bool ret;
	ret = PostMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, 2);
	
#if 0
	//めんどうくなった　私しか使わんしいいや
	if (ret != FALSE) {
		DWORD dwError = GetLastError();
		LPVOID buf;
	}

#endif

	return 0;
}
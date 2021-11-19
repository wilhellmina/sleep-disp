#include <windows.h>
#include <chrono>
#include <thread>

#define SET_SLEEP 2
#define DECIMAL 10

int main(int argc, char *argv[]) {
	int64_t sleep_ms;
	bool ret;

	if (argc < 2) {
		sleep_ms = 3250;
	}
	else {
		const char* const str = argv[1];
		char *last;
		sleep_ms = strtoll(str, &last, DECIMAL);
		if ('\0' != *last) {
			return EXIT_FAILURE;
		}
	}

	std::this_thread::sleep_for(std::chrono::milliseconds(sleep_ms));
	ret = PostMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, SET_SLEEP);
	
#if 0
	//めんどうくなった　私しか使わんしいいや
	if (ret != FALSE) {
		DWORD dwError = GetLastError();
		LPVOID buf;
	}

#endif

	return EXIT_SUCCESS;
}
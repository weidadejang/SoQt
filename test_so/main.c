/*-----------------------------------------------------------------------------------------------
2019-08-05  WireBelong 0x42 Function change
2019-12-06  0x6d add respond second bit
2021-03-28  10块的数据问题。分块发送 修改了 static int fill_task(struct CacheList *cache)
2021-03-29  serialThread.c 1043 断言改==号
2021-04-29  up-packet.c  412 413 行  查询任务时候打印任务状态的日志。屏蔽
2021-05-11  whlist xiugai up_packet.c  read_whilist 542行 添加标志
2021-06-21  ed status one hour      spi log disable
2021-06-23  XShare.c  Tcptx   接收指令的时候增加指针
2021-06-25  serialThread.c +950 EDstatus Printf
-----------------------------------------------------------------------------------------------*/


#include <string.h>
#include <stdio.h>
#include <dlfcn.h>

int main(void)
{
	void(*myadd)(int a, int b);
	void *handle;
	handle = dlopen("./libmyc++.so", RTLD_LAZY);
	myadd = dlsym(handle, "addc");
//
	myadd(1, 2);
	//dlclose(handle);
	//printf("diaoyong so wenjian : %d\n", result);
	return 0;
}

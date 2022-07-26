#pragma once

#include <WinIoCtl.h>
#include <winsvc.h>

//此处是我们的demo测试文件,与驱动通讯的封装
	//根据您的代码,进行调整,
	//这里包含了当前版本的驱动所有功能,以后此Demo若无需要将不再更新
	//有其他新功能的话,可以联系我索要驱动通讯控制码以及结构体,当然,一般情况下您在易语言源码中就可以看到啦
	//感谢使用
	//官方网址http://driver.voouer.com/


#define CTL_NUM 0x800

#define IOCTL_IO_FILE_CHECK					CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	0, METHOD_BUFFERED, FILE_ANY_ACCESS)	//文件效验-----------------

//内存
#define IOCTL_IO_MEMORY_MOD					CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	1, METHOD_BUFFERED, FILE_ANY_ACCESS)	//内存_置读写模式
#define IOCTL_IO_MEMORY_GETMODULEBASE		CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	2, METHOD_BUFFERED, FILE_ANY_ACCESS)	//内存_取模块基址
#define IOCTL_IO_MEMORY_READ_EX				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	3, METHOD_BUFFERED, FILE_ANY_ACCESS)	//内存_读取Ex
#define IOCTL_IO_MEMORY_WRITE_EX			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	4, METHOD_BUFFERED, FILE_ANY_ACCESS)	//内存_写入Ex
#define IOCTL_IO_MEMORY_READ				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	5, METHOD_BUFFERED, FILE_ANY_ACCESS)	//内存_读取
#define IOCTL_IO_MEMORY_WRITE				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	6, METHOD_BUFFERED, FILE_ANY_ACCESS)	//内存_写入
#define IOCTL_IO_MEMORY_ALLOC				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	7, METHOD_BUFFERED, FILE_ANY_ACCESS)	//内存_申请/释放
#define IOCTL_IO_MEMORY_PROTECT				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	8, METHOD_BUFFERED, FILE_ANY_ACCESS)	//内存_修改属性
#define IOCTL_IO_MEMORY_QUERY				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	9, METHOD_BUFFERED, FILE_ANY_ACCESS)	//内存_查询属性

#define IOCTL_IO_HOOK_CTL					CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	10, METHOD_BUFFERED, FILE_ANY_ACCESS)	//HOOK_操作

//注入
#define IOCTL_IO_INJECT_DLL					CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	11, METHOD_BUFFERED, FILE_ANY_ACCESS)	//注入_注入DLL
#define IOCTL_IO_INJECT_SET_THREADMOD		CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	12, METHOD_BUFFERED, FILE_ANY_ACCESS)	//注入_置主线程mod
#define IOCTL_IO_INJECT_REMOTE_CALL			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	13, METHOD_BUFFERED, FILE_ANY_ACCESS)	//注入_线程CALL
#define IOCTL_IO_INJECT_REMOTE_CALLEX		CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	14, METHOD_BUFFERED, FILE_ANY_ACCESS)	//注入_线程调用CALL
#define IOCTL_IO_INJECT_SUPER_CALL			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	15, METHOD_BUFFERED, FILE_ANY_ACCESS)	//注入_超级CALL
#define IOCTL_IO_INJECT_SUPER_CALLEX		CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	16, METHOD_BUFFERED, FILE_ANY_ACCESS)	//注入_超级调用CALL

//键鼠
#define IOCTL_IO_INPUT_INIT					CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	17, METHOD_BUFFERED, FILE_ANY_ACCESS)	//键鼠_驱动安装
#define IOCTL_IO_INPUT_MOUSE				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	18, METHOD_BUFFERED, FILE_ANY_ACCESS)	//键鼠_鼠标控制
#define IOCTL_IO_INPUT_KEYBOARD				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	19, METHOD_BUFFERED, FILE_ANY_ACCESS)	//键鼠_键盘控制

//文件
#define IOCTL_IO_FILTER_INIT				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	20, METHOD_BUFFERED, FILE_ANY_ACCESS)	//隐藏文件_安装
#define IOCTL_IO_FILTER_UNINIT				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	21, METHOD_BUFFERED, FILE_ANY_ACCESS)	//隐藏文件_卸载
#define IOCTL_IO_FILTER_FILE				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	22, METHOD_BUFFERED, FILE_ANY_ACCESS)	//隐藏文件_文件
#define IOCTL_IO_FILTER_DIR					CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	23, METHOD_BUFFERED, FILE_ANY_ACCESS)	//隐藏文件_目录

//保护
#define IOCTL_IO_PROTECT_BEGIN_OR_END		CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	24, METHOD_BUFFERED, FILE_ANY_ACCESS)	//保护_安装/卸载
#define IOCTL_IO_PROTECT_PROCESS_BEGIN		CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	25, METHOD_BUFFERED, FILE_ANY_ACCESS)	//保护_进程_开始
#define IOCTL_IO_PROTECT_PROCESS_END		CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	26, METHOD_BUFFERED, FILE_ANY_ACCESS)	//保护_进程_结束
#define IOCTL_IO_PROTECT_WINDOW_BEGIN		CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	27, METHOD_BUFFERED, FILE_ANY_ACCESS)	//保护_窗口_开始
#define IOCTL_IO_PROTECT_WINDOW_END			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	28, METHOD_BUFFERED, FILE_ANY_ACCESS)	//保护_窗口_结束
#define IOCTL_IO_PROTECT_GAME_BEGIN			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	29, METHOD_BUFFERED, FILE_ANY_ACCESS)	//保护_游戏_开始
#define IOCTL_IO_PROTECT_GAME_END			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	30, METHOD_BUFFERED, FILE_ANY_ACCESS)	//保护_游戏_结束

//虚拟硬件
#define IOCTL_IO_HARDWARE_DISK				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	31, METHOD_BUFFERED, FILE_ANY_ACCESS)	//虚拟硬件_硬盘
#define IOCTL_IO_HARDWARE_VOLUMES			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	32, METHOD_BUFFERED, FILE_ANY_ACCESS)	//虚拟硬件_声卡
#define IOCTL_IO_HARDWARE_MAC				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	33, METHOD_BUFFERED, FILE_ANY_ACCESS)	//虚拟硬件_网卡
#define IOCTL_IO_HARDWARE_SMBOIS			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	34, METHOD_BUFFERED, FILE_ANY_ACCESS)	//虚拟硬件_主板
#define IOCTL_IO_HARDWARE_GPU				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	35, METHOD_BUFFERED, FILE_ANY_ACCESS)	//虚拟硬件_显卡


//后台消息
#define IOCTL_IO_MESSAGE_SEND				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	36, METHOD_BUFFERED, FILE_ANY_ACCESS)	//后台消息_SEND
#define IOCTL_IO_MESSAGE_POST				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	37, METHOD_BUFFERED, FILE_ANY_ACCESS)	//后台消息_POST

#define IOCTL_IO_BACKGROUND_BIND			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	38, METHOD_BUFFERED, FILE_ANY_ACCESS)	//后台绑定
#define IOCTL_IO_BACKGROUND_UNBIND			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	39, METHOD_BUFFERED, FILE_ANY_ACCESS)	//后台解绑
#define IOCTL_IO_BACKGROUND_MOUSE			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	40, METHOD_BUFFERED, FILE_ANY_ACCESS)	//后台鼠标
#define IOCTL_IO_BACKGROUND_GETMOUSEPOS		CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	41, METHOD_BUFFERED, FILE_ANY_ACCESS)	//后台取鼠标位置
#define IOCTL_IO_BACKGROUND_KEYBOARD		CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	42, METHOD_BUFFERED, FILE_ANY_ACCESS)	//后台键盘

#define IOCTL_IO_PROTECT_HIDEDRIVER			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	43, METHOD_BUFFERED, FILE_ANY_ACCESS)	//隐藏驱动


//远程驱动
#define IOCTL_IO_SOCKET_CREATLISTEN			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	44, METHOD_BUFFERED, FILE_ANY_ACCESS)	//远驱_创建本地通信端口
#define IOCTL_IO_SOCKET_DELETELISTEN		CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	45, METHOD_BUFFERED, FILE_ANY_ACCESS)	//远驱_删除本地通信端口
#define IOCTL_IO_SOCKET_CONNECT				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	46, METHOD_BUFFERED, FILE_ANY_ACCESS)	//远驱_连接远驱
#define IOCTL_IO_SOCKET_DISCONNECT			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	47, METHOD_BUFFERED, FILE_ANY_ACCESS)	//远驱_断开远驱
#define IOCTL_IO_SOCKET_SEND				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	48, METHOD_BUFFERED, FILE_ANY_ACCESS)	//远驱_发送数据
#define IOCTL_IO_SOCKET_RECV				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	49, METHOD_BUFFERED, FILE_ANY_ACCESS)	//远驱_接收数据
#define IOCTL_IO_SOCKET_MESSAGE				CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	50, METHOD_BUFFERED, FILE_ANY_ACCESS)	//远驱_远驱通信
#define IOCTL_IO_SOCKET_MESSAGE_Test		CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	51, METHOD_BUFFERED, FILE_ANY_ACCESS)	//远驱_校对通信

#define IOCTL_IO_INJECT_MAPIMAGE			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	52, METHOD_BUFFERED, FILE_ANY_ACCESS)	//注入_映射文件


#define IOCTL_IO_MEMORY_GETPIDNUM			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	53, METHOD_BUFFERED, FILE_ANY_ACCESS)	//内存_取进程数量
#define IOCTL_IO_MEMORY_GETPIDARRAY			CTL_CODE(FILE_DEVICE_UNKNOWN, CTL_NUM+	54, METHOD_BUFFERED, FILE_ANY_ACCESS)	//内存_取进程数组



//与驱动通讯专用结构体
typedef struct _IOCTL_BUFFER {
	ULONG64		PID;	    // 第1数据
	ULONG64		Addr;		// 第2数据
	ULONG64		Size;		// 第3数据
	ULONG64		Buf;		// 第4数据
}IOCTL_BUFFER, * PIOCTL_BUFFER;


//取模块基址
typedef struct _IOCTL_BUFFER_GetBase {
	ULONG64		PID;	// 进程pid
	ULONG64		ModelAddr;	// 模块地址(不为0则取函数名)
	CHAR        ModelName[MAX_PATH];//模块名称/函数名称
}IOCTL_BUFFER_GetBase, * PIOCTL_BUFFER_GetBase;


typedef struct _IOCTL_BUFFER_Write {
	ULONG64		PID;	//目标PID
	ULONG64     Addr;   //目标地址
	ULONG64     Size;   //要写入的长度
	BYTE        Buf[1];  //要写入的数据
}IOCTL_BUFFER_Write, * PIOCTL_BUFFER_Write;

typedef struct _ALLOCATE_FREE_MEMORY_RESULT
{
	ULONG64 address;          // Address of allocation
	ULONG64 size;             // Allocated size
} ALLOCATE_FREE_MEMORY_RESULT, * PALLOCATE_FREE_MEMORY_RESULT;



typedef struct _ALLOCATE_FREE_MEMORY
{
	ULONG64     base;             // 尝试在目标地址附近分配内存
	ULONG64     size;             // 分配内存的长度
	ULONG64     pid;              // 目标PID
	ULONG64     protection;       // 内存属性
	ULONG64     type;             // MEM_RESERVE/MEM_COMMIT/MEM_DECOMMIT/MEM_RELEASE
	ULONG64     allocate;         // 申请/释放
	ULONG64     physical;         // 是否物理内存
} ALLOCATE_FREE_MEMORY, * PALLOCATE_FREE_MEMORY;


typedef struct _IOCTL_BUFFER_InjectCode {
	ULONG64		PID;	        // 目标PID
	ULONG64		Addr;	    	// 读写内存的目标地址
	ULONG64		Size;		    // 读写大小
	ULONG64     isPhyMem;       // 是否物理硬件内存
	BYTE        Buf[1];          //要写入的数据
}IOCTL_BUFFER_InjectCode, * PIOCTL_BUFFER_InjectCode;



//鼠标输入的信息结构体
typedef struct _MOUSE_INPUT_DATA {
	USHORT UnitId;
	USHORT Flags;
	union {
		ULONG Buttons;
		struct {
			USHORT  ButtonFlags;
			USHORT  ButtonData;
		};
	};
	ULONG RawButtons;
	LONG LastX;
	LONG LastY;
	ULONG ExtraInformation;//附加信息,后台存储的是窗口句柄
} MOUSE_INPUT_DATA, * PMOUSE_INPUT_DATA;



//键盘输入的信息结构体
typedef struct _KEYBOARD_INPUT_DATA {
	USHORT UnitId;
	USHORT MakeCode;
	USHORT Flags;
	USHORT Reserved;
	ULONG ExtraInformation;
} KEYBOARD_INPUT_DATA, * PKEYBOARD_INPUT_DATA;
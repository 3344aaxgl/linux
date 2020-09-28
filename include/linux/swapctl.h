#ifndef _LINUX_SWAPCTL_H
#define _LINUX_SWAPCTL_H

#include <asm/page.h>
#include <linux/fs.h>

typedef struct buffer_mem_v1
{
	unsigned int	min_percent;
	unsigned int	borrow_percent;
	unsigned int	max_percent;
} buffer_mem_v1;
typedef buffer_mem_v1 buffer_mem_t;
extern buffer_mem_t buffer_mem;
extern buffer_mem_t page_cache;

typedef struct freepages_v1
{
	unsigned int	min;//用于不能低于这个数量
	unsigned int	low;//低于这个数量进行密集交换
	unsigned int	high;//低于这个数量进行后台页面交换
} freepages_v1;
typedef freepages_v1 freepages_t;
extern freepages_t freepages;

typedef struct pager_daemon_v1
{
	unsigned int	tries_base;
	unsigned int	tries_min;
	unsigned int	swap_cluster;
} pager_daemon_v1;
typedef pager_daemon_v1 pager_daemon_t;
extern pager_daemon_t pager_daemon;

#endif /* _LINUX_SWAPCTL_H */

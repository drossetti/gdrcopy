#include <linux/version.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/types.h>
#include <linux/delay.h>
#include <linux/compiler.h>
#include <linux/string.h>
#include <linux/uaccess.h>
#include <linux/fs.h>
#include <linux/list.h>
#include <linux/mm.h>
#include <linux/io.h>
#include <linux/sched.h>
#include <linux/timex.h>
#include <linux/timer.h>

MODULE_AUTHOR("drossetti@nvidia.com");
MODULE_LICENSE("MIT");
MODULE_DESCRIPTION("miao driver");
MODULE_VERSION("1.0");

void miaomiao(void)
{
  printk("Hi, I am miao\n");
}

static int __init miao_init(void)
{
  return 0;
}

static void __exit miao_cleanup(void)
{
}

module_init(miao_init);
module_exit(miao_cleanup);

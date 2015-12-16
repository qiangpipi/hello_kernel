#include <linux/init.h>
#include <linux/module.h>

static char *country_name = "China";
static int year = 2015;

static int __init hello_para_init(void)
{
	printk(KERN_INFO "Hello this is %d, Country %s\n",year,country_name);
	return 0;
}

static void __exit hello_para_exit(void)
{
	printk(KERN_ALERT "Hello module exit.\n");
}

module_init(hello_para_init);
module_exit(hello_para_exit);

module_param(year, int, S_IRUGO);
module_param(country_name, charp, S_IRUGO);

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Learning Kernel");
MODULE_DESCRIPTION("Hello module with para");
MODULE_VERSION("V1.0");
